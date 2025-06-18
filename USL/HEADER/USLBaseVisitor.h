
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLVisitor.h"


/**
 * This class provides an empty implementation of USLVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  USLBaseVisitor : public USLVisitor {
public:

  virtual std::any visitProgram(USLParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGlobal_statement(USLParser::Global_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(USLParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(USLParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasic_block(USLParser::Basic_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_delcaration(USLParser::Class_delcarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespace_declaration(USLParser::Namespace_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribute_declaration(USLParser::Atribute_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_declaration(USLParser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_declaration(USLParser::Enum_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_declaration(USLParser::Var_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCustom_opperator_sym(USLParser::Custom_opperator_symContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoexcept_specifyer(USLParser::Noexcept_specifyerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_expr(USLParser::Assignment_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality_expr(USLParser::Equality_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison_expr(USLParser::Comparison_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitshift_expr(USLParser::Bitshift_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditive_expr(USLParser::Additive_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicative_expr(USLParser::Multiplicative_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_expr(USLParser::Unary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_expr(USLParser::Primary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call(USLParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribute_constructor(USLParser::Atribute_constructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtrribute_requires(USLParser::Atrribute_requiresContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplements_function(USLParser::Implements_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplements_Var(USLParser::Implements_VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitives(USLParser::PrimitivesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegral_type(USLParser::Integral_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSigned_inegral_type(USLParser::Signed_inegral_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitteral(USLParser::LitteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(USLParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(USLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(USLParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassmember_declaration(USLParser::Classmember_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator_symbols(USLParser::Operator_symbolsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScope_ressolution(USLParser::Scope_ressolutionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribute_parameter(USLParser::Atribute_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribute_parameter_list(USLParser::Atribute_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtribute_decorators(USLParser::Atribute_decoratorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtern_spec(USLParser::Extern_specContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId_with_scope(USLParser::Id_with_scopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_call_parameters(USLParser::Function_call_parametersContext *ctx) override {
    return visitChildren(ctx);
  }


};

