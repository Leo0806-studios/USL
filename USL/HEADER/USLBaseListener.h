
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLListener.h"


/**
 * This class provides an empty implementation of USLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  USLBaseListener : public USLListener {
public:

  virtual void enterProgram(USLParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(USLParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(USLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(USLParser::StatementContext * /*ctx*/) override { }

  virtual void enterCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext * /*ctx*/) override { }
  virtual void exitCustomKeyDeclaration(USLParser::CustomKeyDeclarationContext * /*ctx*/) override { }

  virtual void enterCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext * /*ctx*/) override { }
  virtual void exitCustomOperatorDeclaration(USLParser::CustomOperatorDeclarationContext * /*ctx*/) override { }

  virtual void enterCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext * /*ctx*/) override { }
  virtual void exitCustomControlFlowDeclaration(USLParser::CustomControlFlowDeclarationContext * /*ctx*/) override { }

  virtual void enterNamespaceDeclaration(USLParser::NamespaceDeclarationContext * /*ctx*/) override { }
  virtual void exitNamespaceDeclaration(USLParser::NamespaceDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDeclaration(USLParser::ClassDeclarationContext * /*ctx*/) override { }
  virtual void exitClassDeclaration(USLParser::ClassDeclarationContext * /*ctx*/) override { }

  virtual void enterClassMember(USLParser::ClassMemberContext * /*ctx*/) override { }
  virtual void exitClassMember(USLParser::ClassMemberContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(USLParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(USLParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext * /*ctx*/) override { }
  virtual void exitFunctionDeclarationWithAtr(USLParser::FunctionDeclarationWithAtrContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(USLParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(USLParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext * /*ctx*/) override { }
  virtual void exitVarDeclarationWithAtr(USLParser::VarDeclarationWithAtrContext * /*ctx*/) override { }

  virtual void enterParameterList(USLParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(USLParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(USLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(USLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterAssignment(USLParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(USLParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterTypeSpacifier(USLParser::TypeSpacifierContext * /*ctx*/) override { }
  virtual void exitTypeSpacifier(USLParser::TypeSpacifierContext * /*ctx*/) override { }

  virtual void enterExpression(USLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(USLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterPrimary(USLParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(USLParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(USLParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(USLParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterAttribute(USLParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(USLParser::AttributeContext * /*ctx*/) override { }

  virtual void enterAttributeParameterList(USLParser::AttributeParameterListContext * /*ctx*/) override { }
  virtual void exitAttributeParameterList(USLParser::AttributeParameterListContext * /*ctx*/) override { }

  virtual void enterAttributeParameter(USLParser::AttributeParameterContext * /*ctx*/) override { }
  virtual void exitAttributeParameter(USLParser::AttributeParameterContext * /*ctx*/) override { }

  virtual void enterGenericParameterList(USLParser::GenericParameterListContext * /*ctx*/) override { }
  virtual void exitGenericParameterList(USLParser::GenericParameterListContext * /*ctx*/) override { }

  virtual void enterBlock(USLParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(USLParser::BlockContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

