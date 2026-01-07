
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

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

  virtual void enterGlobal_statement(USLParser::Global_statementContext *ctx) = 0;
  virtual void exitGlobal_statement(USLParser::Global_statementContext *ctx) = 0;

  virtual void enterStatement(USLParser::StatementContext *ctx) = 0;
  virtual void exitStatement(USLParser::StatementContext *ctx) = 0;

  virtual void enterNamespace_declaration(USLParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(USLParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterClass_declaration(USLParser::Class_declarationContext *ctx) = 0;
  virtual void exitClass_declaration(USLParser::Class_declarationContext *ctx) = 0;

  virtual void enterEnum_declaration(USLParser::Enum_declarationContext *ctx) = 0;
  virtual void exitEnum_declaration(USLParser::Enum_declarationContext *ctx) = 0;

  virtual void enterAttribute_declaration(USLParser::Attribute_declarationContext *ctx) = 0;
  virtual void exitAttribute_declaration(USLParser::Attribute_declarationContext *ctx) = 0;

  virtual void enterFunction_declaration(USLParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(USLParser::Function_declarationContext *ctx) = 0;

  virtual void enterBasic_block(USLParser::Basic_blockContext *ctx) = 0;
  virtual void exitBasic_block(USLParser::Basic_blockContext *ctx) = 0;

  virtual void enterVariable_declaration(USLParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(USLParser::Variable_declarationContext *ctx) = 0;

  virtual void enterIf_statement(USLParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(USLParser::If_statementContext *ctx) = 0;

  virtual void enterElse_statement(USLParser::Else_statementContext *ctx) = 0;
  virtual void exitElse_statement(USLParser::Else_statementContext *ctx) = 0;

  virtual void enterWhile_statement(USLParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(USLParser::While_statementContext *ctx) = 0;

  virtual void enterDo_statement(USLParser::Do_statementContext *ctx) = 0;
  virtual void exitDo_statement(USLParser::Do_statementContext *ctx) = 0;

  virtual void enterFor_statement(USLParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(USLParser::For_statementContext *ctx) = 0;

  virtual void enterSwitch_statement(USLParser::Switch_statementContext *ctx) = 0;
  virtual void exitSwitch_statement(USLParser::Switch_statementContext *ctx) = 0;

  virtual void enterCase_statement(USLParser::Case_statementContext *ctx) = 0;
  virtual void exitCase_statement(USLParser::Case_statementContext *ctx) = 0;

  virtual void enterGoto_statement(USLParser::Goto_statementContext *ctx) = 0;
  virtual void exitGoto_statement(USLParser::Goto_statementContext *ctx) = 0;

  virtual void enterLable_statement(USLParser::Lable_statementContext *ctx) = 0;
  virtual void exitLable_statement(USLParser::Lable_statementContext *ctx) = 0;

  virtual void enterThrow_statement(USLParser::Throw_statementContext *ctx) = 0;
  virtual void exitThrow_statement(USLParser::Throw_statementContext *ctx) = 0;

  virtual void enterExpression_statement(USLParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(USLParser::Expression_statementContext *ctx) = 0;

  virtual void enterExpression(USLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(USLParser::ExpressionContext *ctx) = 0;

  virtual void enterAssignment_expr(USLParser::Assignment_exprContext *ctx) = 0;
  virtual void exitAssignment_expr(USLParser::Assignment_exprContext *ctx) = 0;

  virtual void enterEquality_expr(USLParser::Equality_exprContext *ctx) = 0;
  virtual void exitEquality_expr(USLParser::Equality_exprContext *ctx) = 0;

  virtual void enterComparison_expr(USLParser::Comparison_exprContext *ctx) = 0;
  virtual void exitComparison_expr(USLParser::Comparison_exprContext *ctx) = 0;

  virtual void enterBitshift_expr(USLParser::Bitshift_exprContext *ctx) = 0;
  virtual void exitBitshift_expr(USLParser::Bitshift_exprContext *ctx) = 0;

  virtual void enterAdditive_expr(USLParser::Additive_exprContext *ctx) = 0;
  virtual void exitAdditive_expr(USLParser::Additive_exprContext *ctx) = 0;

  virtual void enterMultiplicative_expr(USLParser::Multiplicative_exprContext *ctx) = 0;
  virtual void exitMultiplicative_expr(USLParser::Multiplicative_exprContext *ctx) = 0;

  virtual void enterPostfix_expr(USLParser::Postfix_exprContext *ctx) = 0;
  virtual void exitPostfix_expr(USLParser::Postfix_exprContext *ctx) = 0;

  virtual void enterPrefix_expr(USLParser::Prefix_exprContext *ctx) = 0;
  virtual void exitPrefix_expr(USLParser::Prefix_exprContext *ctx) = 0;

  virtual void enterPrimary_expr(USLParser::Primary_exprContext *ctx) = 0;
  virtual void exitPrimary_expr(USLParser::Primary_exprContext *ctx) = 0;

  virtual void enterAcces_modifiers(USLParser::Acces_modifiersContext *ctx) = 0;
  virtual void exitAcces_modifiers(USLParser::Acces_modifiersContext *ctx) = 0;

  virtual void enterThrows_postfix(USLParser::Throws_postfixContext *ctx) = 0;
  virtual void exitThrows_postfix(USLParser::Throws_postfixContext *ctx) = 0;

  virtual void enterQuailified_name(USLParser::Quailified_nameContext *ctx) = 0;
  virtual void exitQuailified_name(USLParser::Quailified_nameContext *ctx) = 0;

  virtual void enterAttribute_addition(USLParser::Attribute_additionContext *ctx) = 0;
  virtual void exitAttribute_addition(USLParser::Attribute_additionContext *ctx) = 0;

  virtual void enterAttribute(USLParser::AttributeContext *ctx) = 0;
  virtual void exitAttribute(USLParser::AttributeContext *ctx) = 0;

  virtual void enterComparision_operator(USLParser::Comparision_operatorContext *ctx) = 0;
  virtual void exitComparision_operator(USLParser::Comparision_operatorContext *ctx) = 0;

  virtual void enterBitshift_operator(USLParser::Bitshift_operatorContext *ctx) = 0;
  virtual void exitBitshift_operator(USLParser::Bitshift_operatorContext *ctx) = 0;

  virtual void enterAdditive_operator(USLParser::Additive_operatorContext *ctx) = 0;
  virtual void exitAdditive_operator(USLParser::Additive_operatorContext *ctx) = 0;

  virtual void enterMultiplicative_operator(USLParser::Multiplicative_operatorContext *ctx) = 0;
  virtual void exitMultiplicative_operator(USLParser::Multiplicative_operatorContext *ctx) = 0;

  virtual void enterPrefix_operator(USLParser::Prefix_operatorContext *ctx) = 0;
  virtual void exitPrefix_operator(USLParser::Prefix_operatorContext *ctx) = 0;

  virtual void enterPostfix_operator(USLParser::Postfix_operatorContext *ctx) = 0;
  virtual void exitPostfix_operator(USLParser::Postfix_operatorContext *ctx) = 0;

  virtual void enterCall_operator(USLParser::Call_operatorContext *ctx) = 0;
  virtual void exitCall_operator(USLParser::Call_operatorContext *ctx) = 0;

  virtual void enterIndex_operator(USLParser::Index_operatorContext *ctx) = 0;
  virtual void exitIndex_operator(USLParser::Index_operatorContext *ctx) = 0;

  virtual void enterCvu_type(USLParser::Cvu_typeContext *ctx) = 0;
  virtual void exitCvu_type(USLParser::Cvu_typeContext *ctx) = 0;

  virtual void enterPointer_type(USLParser::Pointer_typeContext *ctx) = 0;
  virtual void exitPointer_type(USLParser::Pointer_typeContext *ctx) = 0;

  virtual void enterArray_type(USLParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(USLParser::Array_typeContext *ctx) = 0;

  virtual void enterType(USLParser::TypeContext *ctx) = 0;
  virtual void exitType(USLParser::TypeContext *ctx) = 0;

  virtual void enterPrimitive(USLParser::PrimitiveContext *ctx) = 0;
  virtual void exitPrimitive(USLParser::PrimitiveContext *ctx) = 0;

  virtual void enterIntegral_type(USLParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(USLParser::Integral_typeContext *ctx) = 0;

  virtual void enterFloating_type(USLParser::Floating_typeContext *ctx) = 0;
  virtual void exitFloating_type(USLParser::Floating_typeContext *ctx) = 0;

  virtual void enterVector_type(USLParser::Vector_typeContext *ctx) = 0;
  virtual void exitVector_type(USLParser::Vector_typeContext *ctx) = 0;

  virtual void enterParemeter_list(USLParser::Paremeter_listContext *ctx) = 0;
  virtual void exitParemeter_list(USLParser::Paremeter_listContext *ctx) = 0;

  virtual void enterParameter(USLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(USLParser::ParameterContext *ctx) = 0;

  virtual void enterLitteral(USLParser::LitteralContext *ctx) = 0;
  virtual void exitLitteral(USLParser::LitteralContext *ctx) = 0;

  virtual void enterBool_litteral(USLParser::Bool_litteralContext *ctx) = 0;
  virtual void exitBool_litteral(USLParser::Bool_litteralContext *ctx) = 0;

  virtual void enterCvu_decorators(USLParser::Cvu_decoratorsContext *ctx) = 0;
  virtual void exitCvu_decorators(USLParser::Cvu_decoratorsContext *ctx) = 0;

  virtual void enterScoperesolution_list(USLParser::Scoperesolution_listContext *ctx) = 0;
  virtual void exitScoperesolution_list(USLParser::Scoperesolution_listContext *ctx) = 0;

  virtual void enterError_recovery(USLParser::Error_recoveryContext *ctx) = 0;
  virtual void exitError_recovery(USLParser::Error_recoveryContext *ctx) = 0;


};

