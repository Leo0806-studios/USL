
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

  virtual void enterExpression(USLParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(USLParser::ExpressionContext *ctx) = 0;

  virtual void enterBasic_block(USLParser::Basic_blockContext *ctx) = 0;
  virtual void exitBasic_block(USLParser::Basic_blockContext *ctx) = 0;

  virtual void enterClass_delcaratiom(USLParser::Class_delcaratiomContext *ctx) = 0;
  virtual void exitClass_delcaratiom(USLParser::Class_delcaratiomContext *ctx) = 0;

  virtual void enterNamespace_declaration(USLParser::Namespace_declarationContext *ctx) = 0;
  virtual void exitNamespace_declaration(USLParser::Namespace_declarationContext *ctx) = 0;

  virtual void enterAtribute_declaration(USLParser::Atribute_declarationContext *ctx) = 0;
  virtual void exitAtribute_declaration(USLParser::Atribute_declarationContext *ctx) = 0;

  virtual void enterFunction_declaration(USLParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(USLParser::Function_declarationContext *ctx) = 0;

  virtual void enterEnum_declaration(USLParser::Enum_declarationContext *ctx) = 0;
  virtual void exitEnum_declaration(USLParser::Enum_declarationContext *ctx) = 0;

  virtual void enterVar_declaration(USLParser::Var_declarationContext *ctx) = 0;
  virtual void exitVar_declaration(USLParser::Var_declarationContext *ctx) = 0;

  virtual void enterCustom_opperator_sym(USLParser::Custom_opperator_symContext *ctx) = 0;
  virtual void exitCustom_opperator_sym(USLParser::Custom_opperator_symContext *ctx) = 0;

  virtual void enterNoexcept_specifyer(USLParser::Noexcept_specifyerContext *ctx) = 0;
  virtual void exitNoexcept_specifyer(USLParser::Noexcept_specifyerContext *ctx) = 0;

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

  virtual void enterUnary_expr(USLParser::Unary_exprContext *ctx) = 0;
  virtual void exitUnary_expr(USLParser::Unary_exprContext *ctx) = 0;

  virtual void enterPrimary_expr(USLParser::Primary_exprContext *ctx) = 0;
  virtual void exitPrimary_expr(USLParser::Primary_exprContext *ctx) = 0;

  virtual void enterFunction_call(USLParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(USLParser::Function_callContext *ctx) = 0;

  virtual void enterAtribute_constructor(USLParser::Atribute_constructorContext *ctx) = 0;
  virtual void exitAtribute_constructor(USLParser::Atribute_constructorContext *ctx) = 0;

  virtual void enterAtrribute_requires(USLParser::Atrribute_requiresContext *ctx) = 0;
  virtual void exitAtrribute_requires(USLParser::Atrribute_requiresContext *ctx) = 0;

  virtual void enterImplements_function(USLParser::Implements_functionContext *ctx) = 0;
  virtual void exitImplements_function(USLParser::Implements_functionContext *ctx) = 0;

  virtual void enterImplements_Var(USLParser::Implements_VarContext *ctx) = 0;
  virtual void exitImplements_Var(USLParser::Implements_VarContext *ctx) = 0;

  virtual void enterPrimitives(USLParser::PrimitivesContext *ctx) = 0;
  virtual void exitPrimitives(USLParser::PrimitivesContext *ctx) = 0;

  virtual void enterIntegral_type(USLParser::Integral_typeContext *ctx) = 0;
  virtual void exitIntegral_type(USLParser::Integral_typeContext *ctx) = 0;

  virtual void enterLitteral(USLParser::LitteralContext *ctx) = 0;
  virtual void exitLitteral(USLParser::LitteralContext *ctx) = 0;

  virtual void enterType(USLParser::TypeContext *ctx) = 0;
  virtual void exitType(USLParser::TypeContext *ctx) = 0;

  virtual void enterParameter(USLParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(USLParser::ParameterContext *ctx) = 0;

  virtual void enterParameterList(USLParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(USLParser::ParameterListContext *ctx) = 0;

  virtual void enterClassmember_declaration(USLParser::Classmember_declarationContext *ctx) = 0;
  virtual void exitClassmember_declaration(USLParser::Classmember_declarationContext *ctx) = 0;

  virtual void enterOperator_symbols(USLParser::Operator_symbolsContext *ctx) = 0;
  virtual void exitOperator_symbols(USLParser::Operator_symbolsContext *ctx) = 0;

  virtual void enterScope_ressolution(USLParser::Scope_ressolutionContext *ctx) = 0;
  virtual void exitScope_ressolution(USLParser::Scope_ressolutionContext *ctx) = 0;


};

