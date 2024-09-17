
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by USLParser.
 */
class  USLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(USLParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(USLParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(USLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(USLParser::StatementContext *ctx) = 0;

  virtual void enterCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext *ctx) = 0;
  virtual void exitCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext *ctx) = 0;

  virtual void enterCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext *ctx) = 0;
  virtual void exitCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext *ctx) = 0;

  virtual void enterCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext *ctx) = 0;
  virtual void exitCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext *ctx) = 0;

  virtual void enterNamespaceDeclaration(USLParser::NamespaceDeclarationContext *ctx) = 0;
  virtual void exitNamespaceDeclaration(USLParser::NamespaceDeclarationContext *ctx) = 0;

  virtual void enterClassDeclaration(USLParser::ClassDeclarationContext *ctx) = 0;
  virtual void exitClassDeclaration(USLParser::ClassDeclarationContext *ctx) = 0;

  virtual void enterClassMember(USLParser::ClassMemberContext *ctx) = 0;
  virtual void exitClassMember(USLParser::ClassMemberContext *ctx) = 0;

  virtual void enterFunctionDeclaration(USLParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(USLParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext *ctx) = 0;
  virtual void exitFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext *ctx) = 0;

  virtual void enterVarDeclaration(USLParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(USLParser::VarDeclarationContext *ctx) = 0;

  virtual void enterVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext *ctx) = 0;
  virtual void exitVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext *ctx) = 0;

  virtual void enterParameterList(USLParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(USLParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(USLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(USLParser::ParameterContext *ctx) = 0;

  virtual void enterAssignment(USLParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(USLParser::AssignmentContext *ctx) = 0;

  virtual void enterTypeSpacifier(USLParser::TypeSpacifierContext *ctx) = 0;
  virtual void exitTypeSpacifier(USLParser::TypeSpacifierContext *ctx) = 0;

  virtual void enterExpression(USLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(USLParser::ExpressionContext *ctx) = 0;

  virtual void enterPrimary(USLParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(USLParser::PrimaryContext *ctx) = 0;

  virtual void enterExpressionStatement(USLParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(USLParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterAttribute(USLParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(USLParser::AttributeContext *ctx) = 0;

  virtual void enterAttributeParameterList(USLParser::AttributeParameterListContext *ctx) = 0;
  virtual void exitAttributeParameterList(USLParser::AttributeParameterListContext *ctx) = 0;

  virtual void enterAttributeParameter(USLParser::AttributeParameterContext *ctx) = 0;
  virtual void exitAttributeParameter(USLParser::AttributeParameterContext *ctx) = 0;

  virtual void enterGenericParameterList(USLParser::GenericParameterListContext *ctx) = 0;
  virtual void exitGenericParameterList(USLParser::GenericParameterListContext *ctx) = 0;

  virtual void enterBlock(USLParser::BlockContext *ctx) = 0;
  virtual void exitBlock(USLParser::BlockContext *ctx) = 0;


};

