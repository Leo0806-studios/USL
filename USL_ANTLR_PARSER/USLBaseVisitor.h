
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

  virtual std::any visitNamespace_declaration(USLParser::Namespace_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_declaration(USLParser::Class_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnum_declaration(USLParser::Enum_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_declaration(USLParser::Attribute_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_declaration(USLParser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasic_block(USLParser::Basic_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration(USLParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(USLParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_statement(USLParser::Else_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_statement(USLParser::While_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDo_statement(USLParser::Do_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor_statement(USLParser::For_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch_statement(USLParser::Switch_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase_statement(USLParser::Case_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto_statement(USLParser::Goto_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLable_statement(USLParser::Lable_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrow_statement(USLParser::Throw_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression_statement(USLParser::Expression_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(USLParser::ExpressionContext *ctx) override {
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

  virtual std::any visitPostfix_expr(USLParser::Postfix_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_expr(USLParser::Prefix_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary_expr(USLParser::Primary_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAcces_modifiers(USLParser::Acces_modifiersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrows_postfix(USLParser::Throws_postfixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuailified_name(USLParser::Quailified_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute_addition(USLParser::Attribute_additionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttribute(USLParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparision_operator(USLParser::Comparision_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitshift_operator(USLParser::Bitshift_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditive_operator(USLParser::Additive_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicative_operator(USLParser::Multiplicative_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefix_operator(USLParser::Prefix_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix_operator(USLParser::Postfix_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall_operator(USLParser::Call_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndex_operator(USLParser::Index_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvu_type(USLParser::Cvu_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(USLParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitive(USLParser::PrimitiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegral_type(USLParser::Integral_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloating_type(USLParser::Floating_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVector_type(USLParser::Vector_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParemeter_list(USLParser::Paremeter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(USLParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitteral(USLParser::LitteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBool_litteral(USLParser::Bool_litteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvu_decorators(USLParser::Cvu_decoratorsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScoperesolution_list(USLParser::Scoperesolution_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitError_recovery(USLParser::Error_recoveryContext *ctx) override {
    return visitChildren(ctx);
  }


};

