#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <memory>

// --- ANTLR 4.9.1 headers ---
#include "antlr4-runtime.h"
#include "SpaceLexer.h"
#include "SpaceParser.h"

// --- LLVM headers ---
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"  // outs()

using namespace antlr4;
using namespace std;

// Вывод токенов: только через Ref<Token>, без конвертаций
void printTokens(TokenStream* tokens) {
    auto* common = dynamic_cast<CommonTokenStream*>(tokens);
    if (!common) {
        cerr << "[WARN] Cannot cast TokenStream to CommonTokenStream" << endl;
        return;
    }

    // В ANTLR 4.9.1 CommonTokenStream (наследник BufferedTokenStream)
    // возвращает std::vector<Token*>
    const std::vector<antlr4::Token*>& tokenList = common->getTokens();

    cout << "=== Токены (ANTLR) ===" << endl;
    for (size_t i = 0; i < tokenList.size(); ++i) {
        antlr4::Token* t = tokenList[i];  // Это просто Token*

        if (!t) continue; // защита на всякий случай

        string text = t->getText();
        if (text.empty()) text = "<empty>";

        cout << "Token #" << i
            << " | Type:" << t->getType()
            << " | Text:" << text
            << " | Line:" << t->getLine()
            << ":" << t->getCharPositionInLine() << "\n";
    }
    cout << "=======================" << endl;
}

// Упрощённый вывод дерева: без getGrammar() (его нет в 4.9.1)
void visitTree(tree::ParseTree* tree, int depth = 0) {
    string indent(depth * 2, ' ');

    auto* ctx = dynamic_cast<ParserRuleContext*>(tree);
    if (ctx) {
        // В ANTLR 4.9.1 нет getGrammar(), поэтому печатаем только ruleIndex
        cout << indent << "[RULE_CTX] ruleIndex=" << ctx->getRuleIndex() << endl;

        for (size_t i = 0; i < ctx->children.size(); ++i) {
            visitTree(ctx->children[i], depth + 1);
        }
        return;
    }

    auto* term = dynamic_cast<tree::TerminalNode*>(tree);
    if (term) {
        Token* sym = term->getSymbol();
        string text = sym ? sym->getText() : "<no-token>";
        cout << indent << "[TERM] " << text << endl;
        return;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: spc.exe <file.spc> [options]" << endl;
        cerr << "Options:" << endl;
        cerr << "  /compile          - компилировать (заглушка)" << endl;
        cerr << "  /output <file>    - выходной файл (заглушка)" << endl;
        cerr << "  --help, -h        - показать справку" << endl;
        return 1;
    }

    string inputFile;
    bool doCompile = false;
    string outputFile;

    for (int i = 1; i < argc; ++i) {
        string arg = argv[i];

        if (arg == "--help" || arg == "-h") {
            cerr << "Space Compiler (spc.exe)" << endl;
            cerr << "Usage: spc.exe <file.spc> [options]" << endl;
            cerr << "/compile            - включить режим компиляции в LLVM IR" << endl;
            cerr << "/output <file>      - задать выходной файл" << endl;
            return 0;
        }
        else if (arg == "/compile") {
            doCompile = true;
        }
        else if (arg == "/output" && i + 1 < argc) {
            outputFile = argv[++i];
        }
        else {
            if (inputFile.empty()) {
                inputFile = arg;
            }
        }
    }

    if (inputFile.empty()) {
        cerr << "Error: no input file specified." << endl;
        return 1;
    }

    // Чтение файла
    ifstream file(inputFile);
    if (!file.is_open()) {
        cerr << "Error: cannot open file '" << inputFile << "'" << endl;
        return 1;
    }
    stringstream buffer;
    buffer << file.rdbuf();
    string source = buffer.str();

    cout << "[INFO] Input file: " << inputFile << endl;

    // ANTLR: парсинг
    ANTLRInputStream input(source);
    SpaceLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    tokens.fill();
    printTokens(&tokens);

    SpaceParser parser(&tokens);
    parser.setErrorHandler(make_unique<BailErrorStrategy>());

    try {
        // ВАЖНО: замени 'program' на своё стартовое правило, если оно называется иначе
        tree::ParseTree* tree = parser.program();
        cout << "[OK] Parse tree generated." << endl;
        cout << "--- Parse Tree (simplified) ---" << endl;
        visitTree(tree, 0);
        cout << "-------------------------------" << endl;
    }
    catch (ParseCancellationException&) {
        cerr << "[ERROR] Syntax error detected during parsing." << endl;
        return 1;
    }

    // LLVM: проверка связи
    cout << "[INFO] Initializing LLVM..." << endl;
    llvm::InitializeNativeTarget();
    llvm::LLVMContext context;
    cout << "[OK] LLVM initialized." << endl;

    auto mod = make_unique<llvm::Module>("spc_module", context);
    mod->print(llvm::outs(), nullptr);
    cout << endl;

    if (doCompile) {
        cout << "[INFO] Compile mode enabled (/compile)." << endl;
        if (!outputFile.empty())
            cout << "[INFO] Output target: " << outputFile << endl;
        else
            cout << "[INFO] No output file specified; IR printed to stdout." << endl;
    }

    return 0;
}