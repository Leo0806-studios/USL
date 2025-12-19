
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

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

  virtual void enterExpression(USLParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(USLParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterBasic_block(USLParser::Basic_blockContext * /*ctx*/) override { }
  virtual void exitBasic_block(USLParser::Basic_blockContext * /*ctx*/) override { }

  virtual void enterClass_delcaration(USLParser::Class_delcarationContext * /*ctx*/) override { }
  virtual void exitClass_delcaration(USLParser::Class_delcarationContext * /*ctx*/) override { }

  virtual void enterNamespace_declaration(USLParser::Namespace_declarationContext * /*ctx*/) override { }
  virtual void exitNamespace_declaration(USLParser::Namespace_declarationContext * /*ctx*/) override { }

  virtual void enterAtribute_declaration(USLParser::Atribute_declarationContext * /*ctx*/) override { }
  virtual void exitAtribute_declaration(USLParser::Atribute_declarationContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(USLParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(USLParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext * /*ctx*/) override { }
  virtual void exitIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext * /*ctx*/) override { }

  virtual void enterExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext * /*ctx*/) override { }
  virtual void exitExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext * /*ctx*/) override { }

  virtual void enterExter_function_declaratio(USLParser::Exter_function_declaratioContext * /*ctx*/) override { }
  virtual void exitExter_function_declaratio(USLParser::Exter_function_declaratioContext * /*ctx*/) override { }

  virtual void enterUnit_test_declaration(USLParser::Unit_test_declarationContext * /*ctx*/) override { }
  virtual void exitUnit_test_declaration(USLParser::Unit_test_declarationContext * /*ctx*/) override { }

  virtual void enterEnum_declaration(USLParser::Enum_declarationContext * /*ctx*/) override { }
  virtual void exitEnum_declaration(USLParser::Enum_declarationContext * /*ctx*/) override { }

  virtual void enterVar_declaration(USLParser::Var_declarationContext * /*ctx*/) override { }
  virtual void exitVar_declaration(USLParser::Var_declarationContext * /*ctx*/) override { }

  virtual void enterNoexcept_specifyer(USLParser::Noexcept_specifyerContext * /*ctx*/) override { }
  virtual void exitNoexcept_specifyer(USLParser::Noexcept_specifyerContext * /*ctx*/) override { }

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

  virtual void enterUnary_expr(USLParser::Unary_exprContext * /*ctx*/) override { }
  virtual void exitUnary_expr(USLParser::Unary_exprContext * /*ctx*/) override { }

  virtual void enterPrimary_expr(USLParser::Primary_exprContext * /*ctx*/) override { }
  virtual void exitPrimary_expr(USLParser::Primary_exprContext * /*ctx*/) override { }

  virtual void enterFunction_call(USLParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(USLParser::Function_callContext * /*ctx*/) override { }

  virtual void enterAtribute_constructor(USLParser::Atribute_constructorContext * /*ctx*/) override { }
  virtual void exitAtribute_constructor(USLParser::Atribute_constructorContext * /*ctx*/) override { }

  virtual void enterAtrribute_requires(USLParser::Atrribute_requiresContext * /*ctx*/) override { }
  virtual void exitAtrribute_requires(USLParser::Atrribute_requiresContext * /*ctx*/) override { }

  virtual void enterImplements_function(USLParser::Implements_functionContext * /*ctx*/) override { }
  virtual void exitImplements_function(USLParser::Implements_functionContext * /*ctx*/) override { }

  virtual void enterImplements_Var(USLParser::Implements_VarContext * /*ctx*/) override { }
  virtual void exitImplements_Var(USLParser::Implements_VarContext * /*ctx*/) override { }

  virtual void enterPrimitives(USLParser::PrimitivesContext * /*ctx*/) override { }
  virtual void exitPrimitives(USLParser::PrimitivesContext * /*ctx*/) override { }

  virtual void enterIntegral_type(USLParser::Integral_typeContext * /*ctx*/) override { }
  virtual void exitIntegral_type(USLParser::Integral_typeContext * /*ctx*/) override { }

  virtual void enterSigned_inegral_type(USLParser::Signed_inegral_typeContext * /*ctx*/) override { }
  virtual void exitSigned_inegral_type(USLParser::Signed_inegral_typeContext * /*ctx*/) override { }

  virtual void enterUnsigned_integral_type(USLParser::Unsigned_integral_typeContext * /*ctx*/) override { }
  virtual void exitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext * /*ctx*/) override { }

  virtual void enterLitteral(USLParser::LitteralContext * /*ctx*/) override { }
  virtual void exitLitteral(USLParser::LitteralContext * /*ctx*/) override { }

  virtual void enterType(USLParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(USLParser::TypeContext * /*ctx*/) override { }

  virtual void enterParameter(USLParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(USLParser::ParameterContext * /*ctx*/) override { }

  virtual void enterParameterList(USLParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(USLParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterClassmember_declaration(USLParser::Classmember_declarationContext * /*ctx*/) override { }
  virtual void exitClassmember_declaration(USLParser::Classmember_declarationContext * /*ctx*/) override { }

  virtual void enterOperator_symbols(USLParser::Operator_symbolsContext * /*ctx*/) override { }
  virtual void exitOperator_symbols(USLParser::Operator_symbolsContext * /*ctx*/) override { }

  virtual void enterScope_ressolution(USLParser::Scope_ressolutionContext * /*ctx*/) override { }
  virtual void exitScope_ressolution(USLParser::Scope_ressolutionContext * /*ctx*/) override { }

  virtual void enterAtribute_parameter(USLParser::Atribute_parameterContext * /*ctx*/) override { }
  virtual void exitAtribute_parameter(USLParser::Atribute_parameterContext * /*ctx*/) override { }

  virtual void enterAtribute_parameter_list(USLParser::Atribute_parameter_listContext * /*ctx*/) override { }
  virtual void exitAtribute_parameter_list(USLParser::Atribute_parameter_listContext * /*ctx*/) override { }

  virtual void enterAtribute_decorators(USLParser::Atribute_decoratorsContext * /*ctx*/) override { }
  virtual void exitAtribute_decorators(USLParser::Atribute_decoratorsContext * /*ctx*/) override { }

  virtual void enterExtern_spec(USLParser::Extern_specContext * /*ctx*/) override { }
  virtual void exitExtern_spec(USLParser::Extern_specContext * /*ctx*/) override { }

  virtual void enterId_with_scope(USLParser::Id_with_scopeContext * /*ctx*/) override { }
  virtual void exitId_with_scope(USLParser::Id_with_scopeContext * /*ctx*/) override { }

  virtual void enterFunction_call_parameters(USLParser::Function_call_parametersContext * /*ctx*/) override { }
  virtual void exitFunction_call_parameters(USLParser::Function_call_parametersContext * /*ctx*/) override { }

  virtual void enterTest(USLParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(USLParser::TestContext * /*ctx*/) override { }

  virtual void enterVariable_decorator(USLParser::Variable_decoratorContext * /*ctx*/) override { }
  virtual void exitVariable_decorator(USLParser::Variable_decoratorContext * /*ctx*/) override { }

  virtual void enterDecorated_name(USLParser::Decorated_nameContext * /*ctx*/) override { }
  virtual void exitDecorated_name(USLParser::Decorated_nameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

