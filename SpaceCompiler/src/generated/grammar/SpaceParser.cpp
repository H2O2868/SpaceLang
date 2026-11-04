
// Generated from grammar\Space.g4 by ANTLR 4.9.1


#include "SpaceVisitor.h"

#include "SpaceParser.h"


using namespace antlrcpp;
using namespace antlr4;

SpaceParser::SpaceParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SpaceParser::~SpaceParser() {
  delete _interpreter;
}

std::string SpaceParser::getGrammarFileName() const {
  return "Space.g4";
}

const std::vector<std::string>& SpaceParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SpaceParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- StartContext ------------------------------------------------------------------

SpaceParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SpaceParser::ProgramContext* SpaceParser::StartContext::program() {
  return getRuleContext<SpaceParser::ProgramContext>(0);
}

tree::TerminalNode* SpaceParser::StartContext::EOF() {
  return getToken(SpaceParser::EOF, 0);
}


size_t SpaceParser::StartContext::getRuleIndex() const {
  return SpaceParser::RuleStart;
}


antlrcpp::Any SpaceParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::StartContext* SpaceParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, SpaceParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    program();
    setState(21);
    match(SpaceParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

SpaceParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SpaceParser::StatementContext *> SpaceParser::ProgramContext::statement() {
  return getRuleContexts<SpaceParser::StatementContext>();
}

SpaceParser::StatementContext* SpaceParser::ProgramContext::statement(size_t i) {
  return getRuleContext<SpaceParser::StatementContext>(i);
}


size_t SpaceParser::ProgramContext::getRuleIndex() const {
  return SpaceParser::RuleProgram;
}


antlrcpp::Any SpaceParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::ProgramContext* SpaceParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, SpaceParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SpaceParser::T__0)
      | (1ULL << SpaceParser::T__4)
      | (1ULL << SpaceParser::T__8)
      | (1ULL << SpaceParser::T__9)
      | (1ULL << SpaceParser::ID))) != 0)) {
      setState(23);
      statement();
      setState(28);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SpaceParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpaceParser::StatementContext::getRuleIndex() const {
  return SpaceParser::RuleStatement;
}

void SpaceParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignmentContext ------------------------------------------------------------------

SpaceParser::AssignmentStmtContext* SpaceParser::AssignmentContext::assignmentStmt() {
  return getRuleContext<SpaceParser::AssignmentStmtContext>(0);
}

SpaceParser::AssignmentContext::AssignmentContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

SpaceParser::IfStmtContext* SpaceParser::IfStatementContext::ifStmt() {
  return getRuleContext<SpaceParser::IfStmtContext>(0);
}

SpaceParser::IfStatementContext::IfStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStatementContext ------------------------------------------------------------------

SpaceParser::PrintStmtContext* SpaceParser::PrintStatementContext::printStmt() {
  return getRuleContext<SpaceParser::PrintStmtContext>(0);
}

SpaceParser::PrintStatementContext::PrintStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStatementContext ------------------------------------------------------------------

SpaceParser::BlockContext* SpaceParser::BlockStatementContext::block() {
  return getRuleContext<SpaceParser::BlockContext>(0);
}

SpaceParser::BlockStatementContext::BlockStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStatementContext ------------------------------------------------------------------

SpaceParser::WhileStmtContext* SpaceParser::WhileStatementContext::whileStmt() {
  return getRuleContext<SpaceParser::WhileStmtContext>(0);
}

SpaceParser::WhileStatementContext::WhileStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}
SpaceParser::StatementContext* SpaceParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SpaceParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpaceParser::ID: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SpaceParser::AssignmentContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(29);
        assignmentStmt();
        break;
      }

      case SpaceParser::T__4: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SpaceParser::IfStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(30);
        ifStmt();
        break;
      }

      case SpaceParser::T__8: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SpaceParser::WhileStatementContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(31);
        whileStmt();
        break;
      }

      case SpaceParser::T__9: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SpaceParser::PrintStatementContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(32);
        printStmt();
        break;
      }

      case SpaceParser::T__0: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SpaceParser::BlockStatementContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(33);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SpaceParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SpaceParser::StatementContext *> SpaceParser::BlockContext::statement() {
  return getRuleContexts<SpaceParser::StatementContext>();
}

SpaceParser::StatementContext* SpaceParser::BlockContext::statement(size_t i) {
  return getRuleContext<SpaceParser::StatementContext>(i);
}


size_t SpaceParser::BlockContext::getRuleIndex() const {
  return SpaceParser::RuleBlock;
}


antlrcpp::Any SpaceParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::BlockContext* SpaceParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, SpaceParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(SpaceParser::T__0);
    setState(40);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SpaceParser::T__0)
      | (1ULL << SpaceParser::T__4)
      | (1ULL << SpaceParser::T__8)
      | (1ULL << SpaceParser::T__9)
      | (1ULL << SpaceParser::ID))) != 0)) {
      setState(37);
      statement();
      setState(42);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(43);
    match(SpaceParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmtContext ------------------------------------------------------------------

SpaceParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpaceParser::AssignmentStmtContext::ID() {
  return getToken(SpaceParser::ID, 0);
}

SpaceParser::ExpressionContext* SpaceParser::AssignmentStmtContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}


size_t SpaceParser::AssignmentStmtContext::getRuleIndex() const {
  return SpaceParser::RuleAssignmentStmt;
}


antlrcpp::Any SpaceParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::AssignmentStmtContext* SpaceParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, SpaceParser::RuleAssignmentStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(SpaceParser::ID);
    setState(46);
    match(SpaceParser::T__2);
    setState(47);
    expression(0);
    setState(48);
    match(SpaceParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

SpaceParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SpaceParser::ExpressionContext* SpaceParser::IfStmtContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}

std::vector<SpaceParser::BlockContext *> SpaceParser::IfStmtContext::block() {
  return getRuleContexts<SpaceParser::BlockContext>();
}

SpaceParser::BlockContext* SpaceParser::IfStmtContext::block(size_t i) {
  return getRuleContext<SpaceParser::BlockContext>(i);
}


size_t SpaceParser::IfStmtContext::getRuleIndex() const {
  return SpaceParser::RuleIfStmt;
}


antlrcpp::Any SpaceParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::IfStmtContext* SpaceParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, SpaceParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(SpaceParser::T__4);
    setState(51);
    match(SpaceParser::T__5);
    setState(52);
    expression(0);
    setState(53);
    match(SpaceParser::T__6);
    setState(54);
    block();
    setState(57);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SpaceParser::T__7) {
      setState(55);
      match(SpaceParser::T__7);
      setState(56);
      block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

SpaceParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SpaceParser::ExpressionContext* SpaceParser::WhileStmtContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}

SpaceParser::BlockContext* SpaceParser::WhileStmtContext::block() {
  return getRuleContext<SpaceParser::BlockContext>(0);
}


size_t SpaceParser::WhileStmtContext::getRuleIndex() const {
  return SpaceParser::RuleWhileStmt;
}


antlrcpp::Any SpaceParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::WhileStmtContext* SpaceParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, SpaceParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(SpaceParser::T__8);
    setState(60);
    match(SpaceParser::T__5);
    setState(61);
    expression(0);
    setState(62);
    match(SpaceParser::T__6);
    setState(63);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStmtContext ------------------------------------------------------------------

SpaceParser::PrintStmtContext::PrintStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SpaceParser::ExpressionContext* SpaceParser::PrintStmtContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}


size_t SpaceParser::PrintStmtContext::getRuleIndex() const {
  return SpaceParser::RulePrintStmt;
}


antlrcpp::Any SpaceParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::PrintStmtContext* SpaceParser::printStmt() {
  PrintStmtContext *_localctx = _tracker.createInstance<PrintStmtContext>(_ctx, getState());
  enterRule(_localctx, 14, SpaceParser::RulePrintStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(SpaceParser::T__9);
    setState(66);
    match(SpaceParser::T__5);
    setState(67);
    expression(0);
    setState(68);
    match(SpaceParser::T__6);
    setState(69);
    match(SpaceParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SpaceParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SpaceParser::ExpressionContext::getRuleIndex() const {
  return SpaceParser::RuleExpression;
}

void SpaceParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultiplicativeExprContext ------------------------------------------------------------------

std::vector<SpaceParser::ExpressionContext *> SpaceParser::MultiplicativeExprContext::expression() {
  return getRuleContexts<SpaceParser::ExpressionContext>();
}

SpaceParser::ExpressionContext* SpaceParser::MultiplicativeExprContext::expression(size_t i) {
  return getRuleContext<SpaceParser::ExpressionContext>(i);
}

SpaceParser::MultiplicativeExprContext::MultiplicativeExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::MultiplicativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableRefContext ------------------------------------------------------------------

tree::TerminalNode* SpaceParser::VariableRefContext::ID() {
  return getToken(SpaceParser::ID, 0);
}

SpaceParser::VariableRefContext::VariableRefContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::VariableRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitVariableRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AdditiveExprContext ------------------------------------------------------------------

std::vector<SpaceParser::ExpressionContext *> SpaceParser::AdditiveExprContext::expression() {
  return getRuleContexts<SpaceParser::ExpressionContext>();
}

SpaceParser::ExpressionContext* SpaceParser::AdditiveExprContext::expression(size_t i) {
  return getRuleContext<SpaceParser::ExpressionContext>(i);
}

SpaceParser::AdditiveExprContext::AdditiveExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::AdditiveExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitAdditiveExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedContext ------------------------------------------------------------------

SpaceParser::ExpressionContext* SpaceParser::ParenthesizedContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}

SpaceParser::ParenthesizedContext::ParenthesizedContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::ParenthesizedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitParenthesized(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralExprContext ------------------------------------------------------------------

SpaceParser::LiteralContext* SpaceParser::LiteralExprContext::literal() {
  return getRuleContext<SpaceParser::LiteralContext>(0);
}

SpaceParser::LiteralExprContext::LiteralExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::LiteralExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitLiteralExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusContext ------------------------------------------------------------------

SpaceParser::ExpressionContext* SpaceParser::UnaryMinusContext::expression() {
  return getRuleContext<SpaceParser::ExpressionContext>(0);
}

SpaceParser::UnaryMinusContext::UnaryMinusContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::UnaryMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitUnaryMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalExprContext ------------------------------------------------------------------

std::vector<SpaceParser::ExpressionContext *> SpaceParser::RelationalExprContext::expression() {
  return getRuleContexts<SpaceParser::ExpressionContext>();
}

SpaceParser::ExpressionContext* SpaceParser::RelationalExprContext::expression(size_t i) {
  return getRuleContext<SpaceParser::ExpressionContext>(i);
}

SpaceParser::RelationalExprContext::RelationalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::RelationalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitRelationalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalExprContext ------------------------------------------------------------------

std::vector<SpaceParser::ExpressionContext *> SpaceParser::LogicalExprContext::expression() {
  return getRuleContexts<SpaceParser::ExpressionContext>();
}

SpaceParser::ExpressionContext* SpaceParser::LogicalExprContext::expression(size_t i) {
  return getRuleContext<SpaceParser::ExpressionContext>(i);
}

SpaceParser::LogicalExprContext::LogicalExprContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SpaceParser::LogicalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitLogicalExpr(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::ExpressionContext* SpaceParser::expression() {
   return expression(0);
}

SpaceParser::ExpressionContext* SpaceParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SpaceParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SpaceParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, SpaceParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SpaceParser::T__17: {
        _localctx = _tracker.createInstance<UnaryMinusContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(72);
        match(SpaceParser::T__17);
        setState(73);
        expression(4);
        break;
      }

      case SpaceParser::T__5: {
        _localctx = _tracker.createInstance<ParenthesizedContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        match(SpaceParser::T__5);
        setState(75);
        expression(0);
        setState(76);
        match(SpaceParser::T__6);
        break;
      }

      case SpaceParser::INT_LITERAL:
      case SpaceParser::FLOAT_LITERAL:
      case SpaceParser::STRING_LITERAL: {
        _localctx = _tracker.createInstance<LiteralExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(78);
        literal();
        break;
      }

      case SpaceParser::ID: {
        _localctx = _tracker.createInstance<VariableRefContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(79);
        match(SpaceParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(94);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(82);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(83);
          dynamic_cast<LogicalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SpaceParser::T__10

          || _la == SpaceParser::T__11)) {
            dynamic_cast<LogicalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(84);
          dynamic_cast<LogicalExprContext *>(_localctx)->right = expression(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<RelationalExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(86);
          dynamic_cast<RelationalExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SpaceParser::T__12)
            | (1ULL << SpaceParser::T__13)
            | (1ULL << SpaceParser::T__14)
            | (1ULL << SpaceParser::T__15))) != 0))) {
            dynamic_cast<RelationalExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          dynamic_cast<RelationalExprContext *>(_localctx)->right = expression(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AdditiveExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(88);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(89);
          dynamic_cast<AdditiveExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SpaceParser::T__16

          || _la == SpaceParser::T__17)) {
            dynamic_cast<AdditiveExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          dynamic_cast<AdditiveExprContext *>(_localctx)->right = expression(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MultiplicativeExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(91);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(92);
          dynamic_cast<MultiplicativeExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SpaceParser::T__18

          || _la == SpaceParser::T__19)) {
            dynamic_cast<MultiplicativeExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(93);
          dynamic_cast<MultiplicativeExprContext *>(_localctx)->right = expression(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

SpaceParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SpaceParser::LiteralContext::INT_LITERAL() {
  return getToken(SpaceParser::INT_LITERAL, 0);
}

tree::TerminalNode* SpaceParser::LiteralContext::FLOAT_LITERAL() {
  return getToken(SpaceParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* SpaceParser::LiteralContext::STRING_LITERAL() {
  return getToken(SpaceParser::STRING_LITERAL, 0);
}


size_t SpaceParser::LiteralContext::getRuleIndex() const {
  return SpaceParser::RuleLiteral;
}


antlrcpp::Any SpaceParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SpaceVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SpaceParser::LiteralContext* SpaceParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 18, SpaceParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SpaceParser::INT_LITERAL)
      | (1ULL << SpaceParser::FLOAT_LITERAL)
      | (1ULL << SpaceParser::STRING_LITERAL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SpaceParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SpaceParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SpaceParser::_decisionToDFA;
atn::PredictionContextCache SpaceParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SpaceParser::_atn;
std::vector<uint16_t> SpaceParser::_serializedATN;

std::vector<std::string> SpaceParser::_ruleNames = {
  "start", "program", "statement", "block", "assignmentStmt", "ifStmt", 
  "whileStmt", "printStmt", "expression", "literal"
};

std::vector<std::string> SpaceParser::_literalNames = {
  "", "'{'", "'}'", "'='", "';'", "'if'", "'('", "')'", "'else'", "'while'", 
  "'print'", "'||'", "'&&'", "'<'", "'<='", "'>'", "'>='", "'+'", "'-'", 
  "'*'", "'/'"
};

std::vector<std::string> SpaceParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "ID", "INT_LITERAL", "FLOAT_LITERAL", "STRING_LITERAL", "WS", 
  "COMMENT"
};

dfa::Vocabulary SpaceParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SpaceParser::_tokenNames;

SpaceParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1c, 0x68, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x1b, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x1e, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x25, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x29, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x2c, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x3c, 0xa, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x53, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0x61, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x64, 0xb, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x2, 0x3, 0x12, 0xc, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x7, 0x3, 0x2, 0xd, 0xe, 0x3, 
    0x2, 0xf, 0x12, 0x3, 0x2, 0x13, 0x14, 0x3, 0x2, 0x15, 0x16, 0x3, 0x2, 
    0x18, 0x1a, 0x2, 0x6b, 0x2, 0x16, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x34, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x43, 0x3, 0x2, 0x2, 0x2, 0x12, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x65, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x5, 
    0x4, 0x3, 0x2, 0x17, 0x18, 0x7, 0x2, 0x2, 0x3, 0x18, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1b, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x25, 0x5, 0xa, 0x6, 0x2, 0x20, 0x25, 
    0x5, 0xc, 0x7, 0x2, 0x21, 0x25, 0x5, 0xe, 0x8, 0x2, 0x22, 0x25, 0x5, 
    0x10, 0x9, 0x2, 0x23, 0x25, 0x5, 0x8, 0x5, 0x2, 0x24, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x24, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x7, 0x3, 0x2, 0x2, 0x2, 0x26, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x27, 
    0x29, 0x5, 0x6, 0x4, 0x2, 0x28, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x2e, 0x7, 0x4, 0x2, 0x2, 0x2e, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x30, 0x7, 0x17, 0x2, 0x2, 0x30, 0x31, 0x7, 0x5, 0x2, 0x2, 
    0x31, 0x32, 0x5, 0x12, 0xa, 0x2, 0x32, 0x33, 0x7, 0x6, 0x2, 0x2, 0x33, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x7, 0x2, 0x2, 0x35, 0x36, 
    0x7, 0x8, 0x2, 0x2, 0x36, 0x37, 0x5, 0x12, 0xa, 0x2, 0x37, 0x38, 0x7, 
    0x9, 0x2, 0x2, 0x38, 0x3b, 0x5, 0x8, 0x5, 0x2, 0x39, 0x3a, 0x7, 0xa, 
    0x2, 0x2, 0x3a, 0x3c, 0x5, 0x8, 0x5, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x7, 0xb, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x8, 0x2, 0x2, 0x3f, 
    0x40, 0x5, 0x12, 0xa, 0x2, 0x40, 0x41, 0x7, 0x9, 0x2, 0x2, 0x41, 0x42, 
    0x5, 0x8, 0x5, 0x2, 0x42, 0xf, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 
    0xc, 0x2, 0x2, 0x44, 0x45, 0x7, 0x8, 0x2, 0x2, 0x45, 0x46, 0x5, 0x12, 
    0xa, 0x2, 0x46, 0x47, 0x7, 0x9, 0x2, 0x2, 0x47, 0x48, 0x7, 0x6, 0x2, 
    0x2, 0x48, 0x11, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x8, 0xa, 0x1, 0x2, 
    0x4a, 0x4b, 0x7, 0x14, 0x2, 0x2, 0x4b, 0x53, 0x5, 0x12, 0xa, 0x6, 0x4c, 
    0x4d, 0x7, 0x8, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x12, 0xa, 0x2, 0x4e, 0x4f, 
    0x7, 0x9, 0x2, 0x2, 0x4f, 0x53, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x5, 
    0x14, 0xb, 0x2, 0x51, 0x53, 0x7, 0x17, 0x2, 0x2, 0x52, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0xc, 0xa, 0x2, 0x2, 0x55, 0x56, 0x9, 0x2, 0x2, 0x2, 0x56, 
    0x61, 0x5, 0x12, 0xa, 0xb, 0x57, 0x58, 0xc, 0x9, 0x2, 0x2, 0x58, 0x59, 
    0x9, 0x3, 0x2, 0x2, 0x59, 0x61, 0x5, 0x12, 0xa, 0xa, 0x5a, 0x5b, 0xc, 
    0x8, 0x2, 0x2, 0x5b, 0x5c, 0x9, 0x4, 0x2, 0x2, 0x5c, 0x61, 0x5, 0x12, 
    0xa, 0x9, 0x5d, 0x5e, 0xc, 0x7, 0x2, 0x2, 0x5e, 0x5f, 0x9, 0x5, 0x2, 
    0x2, 0x5f, 0x61, 0x5, 0x12, 0xa, 0x8, 0x60, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x57, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x9, 0x6, 
    0x2, 0x2, 0x66, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9, 0x1c, 0x24, 0x2a, 0x3b, 
    0x52, 0x60, 0x62, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SpaceParser::Initializer SpaceParser::_init;
