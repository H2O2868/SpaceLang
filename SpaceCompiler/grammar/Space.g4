grammar Space;

// --- Корневое правило (точка входа) ---
start: program EOF;

program: statement*;

statement
    : assignmentStmt          # Assignment
    | ifStmt                  # IfStatement
    | whileStmt               # WhileStatement
    | printStmt               # PrintStatement
    | block                   # BlockStatement
    ;

block: '{' statement* '}';

// --- Присваивание: x = 10; ---
assignmentStmt: ID '=' expression ';';

// --- Условный оператор: if (x > 0) { ... } ---
ifStmt: 'if' '(' expression ')' block ('else' block)?;

// --- Цикл: while (x < 10) { ... } ---
whileStmt: 'while' '(' expression ')' block;

// --- Вывод: print(x); ---
printStmt: 'print' '(' expression ')' ';';

// --- Выражения (приоритеты от низкого к высокому) ---
expression
    : left=expression op=('||' | '&&') right=expression      # LogicalExpr
    | left=expression op=('<' | '<=' | '>' | '>=') right=expression  # RelationalExpr
    | left=expression op=('+' | '-') right=expression        # AdditiveExpr
    | left=expression op=('*' | '/') right=expression       # MultiplicativeExpr
    | '-' expression                                         # UnaryMinus
    | '(' expression ')'                                     # Parenthesized
    | literal                                                # LiteralExpr
    | ID                                                     # VariableRef
    ;

literal
    : INT_LITERAL
    | FLOAT_LITERAL
    | STRING_LITERAL
    ;

// --- Лексические правила (токены) ---
ID: [a-zA-Z_][a-zA-Z0-9_]*;
INT_LITERAL: [0-9]+;
FLOAT_LITERAL: [0-9]+ '.' [0-9]+;
STRING_LITERAL: '"' (~["\\\r\n] | '\\' .)* '"';

WS: [ \t\r\n]+ -> skip;
COMMENT: '//' ~[\r\n]* -> skip;