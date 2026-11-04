
// Generated from C:/Dev/Space/spc/grammar/Space.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "SpaceParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SpaceParser.
 */
class  SpaceVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SpaceParser.
   */
    virtual antlrcpp::Any visitStart(SpaceParser::StartContext *context) = 0;

    virtual antlrcpp::Any visitProgram(SpaceParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(SpaceParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(SpaceParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(SpaceParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitPrintStatement(SpaceParser::PrintStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(SpaceParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SpaceParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(SpaceParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(SpaceParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(SpaceParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitPrintStmt(SpaceParser::PrintStmtContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpr(SpaceParser::MultiplicativeExprContext *context) = 0;

    virtual antlrcpp::Any visitVariableRef(SpaceParser::VariableRefContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpr(SpaceParser::AdditiveExprContext *context) = 0;

    virtual antlrcpp::Any visitParenthesized(SpaceParser::ParenthesizedContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpr(SpaceParser::LiteralExprContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinus(SpaceParser::UnaryMinusContext *context) = 0;

    virtual antlrcpp::Any visitRelationalExpr(SpaceParser::RelationalExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalExpr(SpaceParser::LogicalExprContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SpaceParser::LiteralContext *context) = 0;


};

