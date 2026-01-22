
// Generated from c:/Users/leo08/source/repos/Leo0806-studios/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

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

  virtual void enterGlobal_statement(USLParser::Global_statementContext * /*ctx*/) override { }
  virtual void exitGlobal_statement(USLParser::Global_statementContext * /*ctx*/) override { }

  virtual void enterStatement(USLParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(USLParser::StatementContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(USLParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(USLParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterClass_declaration(USLParser::Class_declarationContext * /*ctx*/) override { }
  virtual void exitClass_declaration(USLParser::Class_declarationContext * /*ctx*/) override { }

  virtual void enterEnum_declaration(USLParser::Enum_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_declaration(USLParser::Enum_declarationContext * /*ctx*/) override { }

  virtual void enterAttribute_declaration(USLParser::Attribute_declarationContext * /*ctx*/) override { }
  virtual void exitAttribute_declaration(USLParser::Attribute_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(USLParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(USLParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterBasic_block(USLParser::Basic_blockContext * /*ctx*/) override { }
  virtual void exitBasic_block(USLParser::Basic_blockContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(USLParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(USLParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterIf_statement(USLParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(USLParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElse_statement(USLParser::Else_statementContext * /*ctx*/) override { }
  virtual void exitElse_statement(USLParser::Else_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(USLParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(USLParser::While_statementContext * /*ctx*/) override { }

  virtual void enterDo_statement(USLParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(USLParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterFor_statement(USLParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(USLParser::For_statementContext * /*ctx*/) override { }

  virtual void enterSwitch_statement(USLParser::Switch_statementContext * /*ctx*/) override { }
  virtual void exitSwitch_statement(USLParser::Switch_statementContext * /*ctx*/) override { }

  virtual void enterCase_statement(USLParser::Case_statementContext * /*ctx*/) override { }
  virtual void exitCase_statement(USLParser::Case_statementContext * /*ctx*/) override { }

  virtual void enterDefault_statement(USLParser::Default_statementContext * /*ctx*/) override { }
  virtual void exitDefault_statement(USLParser::Default_statementContext * /*ctx*/) override { }

  virtual void enterGoto_statement(USLParser::Goto_statementContext * /*ctx*/) override { }
  virtual void exitGoto_statement(USLParser::Goto_statementContext * /*ctx*/) override { }

  virtual void enterLable_statement(USLParser::Lable_statementContext * /*ctx*/) override { }
  virtual void exitLable_statement(USLParser::Lable_statementContext * /*ctx*/) override { }

  virtual void enterThrow_statement(USLParser::Throw_statementContext * /*ctx*/) override { }
  virtual void exitThrow_statement(USLParser::Throw_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(USLParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(USLParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterExpression(USLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(USLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterAssignment_expr(USLParser::Assignment_exprContext * /*ctx*/) override { }
  virtual void exitAssignment_expr(USLParser::Assignment_exprContext * /*ctx*/) override { }

  virtual void enterEquality_expr(USLParser::Equality_exprContext * /*ctx*/) override { }
  virtual void exitEquality_expr(USLParser::Equality_exprContext * /*ctx*/) override { }

  virtual void enterComparison_expr(USLParser::Comparison_exprContext * /*ctx*/) override { }
  virtual void exitComparison_expr(USLParser::Comparison_exprContext * /*ctx*/) override { }

  virtual void enterBitshift_expr(USLParser::Bitshift_exprContext * /*ctx*/) override { }
  virtual void exitBitshift_expr(USLParser::Bitshift_exprContext * /*ctx*/) override { }

  virtual void enterAdditive_expr(USLParser::Additive_exprContext * /*ctx*/) override { }
  virtual void exitAdditive_expr(USLParser::Additive_exprContext * /*ctx*/) override { }

  virtual void enterMultiplicative_expr(USLParser::Multiplicative_exprContext * /*ctx*/) override { }
  virtual void exitMultiplicative_expr(USLParser::Multiplicative_exprContext * /*ctx*/) override { }

  virtual void enterPostfix_expr(USLParser::Postfix_exprContext * /*ctx*/) override { }
  virtual void exitPostfix_expr(USLParser::Postfix_exprContext * /*ctx*/) override { }

  virtual void enterPrefix_expr(USLParser::Prefix_exprContext * /*ctx*/) override { }
  virtual void exitPrefix_expr(USLParser::Prefix_exprContext * /*ctx*/) override { }

  virtual void enterPrimary_expr(USLParser::Primary_exprContext * /*ctx*/) override { }
  virtual void exitPrimary_expr(USLParser::Primary_exprContext * /*ctx*/) override { }

  virtual void enterClassmember_declaration(USLParser::Classmember_declarationContext * /*ctx*/) override { }
  virtual void exitClassmember_declaration(USLParser::Classmember_declarationContext * /*ctx*/) override { }

  virtual void enterAcces_modifiers(USLParser::Acces_modifiersContext * /*ctx*/) override { }
  virtual void exitAcces_modifiers(USLParser::Acces_modifiersContext * /*ctx*/) override { }

  virtual void enterThrows_postfix(USLParser::Throws_postfixContext * /*ctx*/) override { }
  virtual void exitThrows_postfix(USLParser::Throws_postfixContext * /*ctx*/) override { }

  virtual void enterQuailified_name(USLParser::Quailified_nameContext * /*ctx*/) override { }
  virtual void exitQuailified_name(USLParser::Quailified_nameContext * /*ctx*/) override { }

  virtual void enterAttribute_addition(USLParser::Attribute_additionContext * /*ctx*/) override { }
  virtual void exitAttribute_addition(USLParser::Attribute_additionContext * /*ctx*/) override { }

  virtual void enterAttribute(USLParser::AttributeContext * /*ctx*/) override { }
  virtual void exitAttribute(USLParser::AttributeContext * /*ctx*/) override { }

  virtual void enterComparision_operator(USLParser::Comparision_operatorContext * /*ctx*/) override { }
  virtual void exitComparision_operator(USLParser::Comparision_operatorContext * /*ctx*/) override { }

  virtual void enterBitshift_operator(USLParser::Bitshift_operatorContext * /*ctx*/) override { }
  virtual void exitBitshift_operator(USLParser::Bitshift_operatorContext * /*ctx*/) override { }

  virtual void enterAdditive_operator(USLParser::Additive_operatorContext * /*ctx*/) override { }
  virtual void exitAdditive_operator(USLParser::Additive_operatorContext * /*ctx*/) override { }

  virtual void enterMultiplicative_operator(USLParser::Multiplicative_operatorContext * /*ctx*/) override { }
  virtual void exitMultiplicative_operator(USLParser::Multiplicative_operatorContext * /*ctx*/) override { }

  virtual void enterPrefix_operator(USLParser::Prefix_operatorContext * /*ctx*/) override { }
  virtual void exitPrefix_operator(USLParser::Prefix_operatorContext * /*ctx*/) override { }

  virtual void enterPostfix_operator(USLParser::Postfix_operatorContext * /*ctx*/) override { }
  virtual void exitPostfix_operator(USLParser::Postfix_operatorContext * /*ctx*/) override { }

  virtual void enterCall_operator(USLParser::Call_operatorContext * /*ctx*/) override { }
  virtual void exitCall_operator(USLParser::Call_operatorContext * /*ctx*/) override { }

  virtual void enterIndex_operator(USLParser::Index_operatorContext * /*ctx*/) override { }
  virtual void exitIndex_operator(USLParser::Index_operatorContext * /*ctx*/) override { }

  virtual void enterCvu_type(USLParser::Cvu_typeContext * /*ctx*/) override { }
  virtual void exitCvu_type(USLParser::Cvu_typeContext * /*ctx*/) override { }

  virtual void enterPointer_type(USLParser::Pointer_typeContext * /*ctx*/) override { }
  virtual void exitPointer_type(USLParser::Pointer_typeContext * /*ctx*/) override { }

  virtual void enterArray_type(USLParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(USLParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterType(USLParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(USLParser::TypeContext * /*ctx*/) override { }

  virtual void enterPrimitive(USLParser::PrimitiveContext * /*ctx*/) override { }
  virtual void exitPrimitive(USLParser::PrimitiveContext * /*ctx*/) override { }

  virtual void enterIntegral_type(USLParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(USLParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterFloating_type(USLParser::Floating_typeContext * /*ctx*/) override { }
  virtual void exitFloating_type(USLParser::Floating_typeContext * /*ctx*/) override { }

  virtual void enterVector_type(USLParser::Vector_typeContext * /*ctx*/) override { }
  virtual void exitVector_type(USLParser::Vector_typeContext * /*ctx*/) override { }

  virtual void enterParemeter_list(USLParser::Paremeter_listContext * /*ctx*/) override { }
  virtual void exitParemeter_list(USLParser::Paremeter_listContext * /*ctx*/) override { }

  virtual void enterParameter(USLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(USLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterLitteral(USLParser::LitteralContext * /*ctx*/) override { }
  virtual void exitLitteral(USLParser::LitteralContext * /*ctx*/) override { }

  virtual void enterBool_litteral(USLParser::Bool_litteralContext * /*ctx*/) override { }
  virtual void exitBool_litteral(USLParser::Bool_litteralContext * /*ctx*/) override { }

  virtual void enterCvu_decorators(USLParser::Cvu_decoratorsContext * /*ctx*/) override { }
  virtual void exitCvu_decorators(USLParser::Cvu_decoratorsContext * /*ctx*/) override { }

  virtual void enterScoperesolution_list(USLParser::Scoperesolution_listContext * /*ctx*/) override { }
  virtual void exitScoperesolution_list(USLParser::Scoperesolution_listContext * /*ctx*/) override { }

  virtual void enterError_recovery(USLParser::Error_recoveryContext * /*ctx*/) override { }
  virtual void exitError_recovery(USLParser::Error_recoveryContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

