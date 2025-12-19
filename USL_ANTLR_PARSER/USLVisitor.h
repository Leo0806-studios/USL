
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "USLParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by USLParser.
 */
class  USLVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by USLParser.
   */
    virtual std::any visitProgram(USLParser::ProgramContext *context) = 0;

    virtual std::any visitGlobal_statement(USLParser::Global_statementContext *context) = 0;

    virtual std::any visitStatement(USLParser::StatementContext *context) = 0;

    virtual std::any visitNamespace_declaration(USLParser::Namespace_declarationContext *context) = 0;

    virtual std::any visitClass_declaration(USLParser::Class_declarationContext *context) = 0;

    virtual std::any visitEnum_declaration(USLParser::Enum_declarationContext *context) = 0;

    virtual std::any visitAttribute_declaration(USLParser::Attribute_declarationContext *context) = 0;

    virtual std::any visitFunction_declaration(USLParser::Function_declarationContext *context) = 0;

    virtual std::any visitBasic_block(USLParser::Basic_blockContext *context) = 0;

    virtual std::any visitVariable_declaration(USLParser::Variable_declarationContext *context) = 0;

    virtual std::any visitIf_statement(USLParser::If_statementContext *context) = 0;

    virtual std::any visitElse_statement(USLParser::Else_statementContext *context) = 0;

    virtual std::any visitWhile_statement(USLParser::While_statementContext *context) = 0;

    virtual std::any visitDo_statement(USLParser::Do_statementContext *context) = 0;

    virtual std::any visitFor_statement(USLParser::For_statementContext *context) = 0;

    virtual std::any visitSwitch_statement(USLParser::Switch_statementContext *context) = 0;

    virtual std::any visitCase_statement(USLParser::Case_statementContext *context) = 0;

    virtual std::any visitGoto_statement(USLParser::Goto_statementContext *context) = 0;

    virtual std::any visitLable_statement(USLParser::Lable_statementContext *context) = 0;

    virtual std::any visitThrow_statement(USLParser::Throw_statementContext *context) = 0;

    virtual std::any visitExpression_statement(USLParser::Expression_statementContext *context) = 0;

    virtual std::any visitExpression(USLParser::ExpressionContext *context) = 0;

    virtual std::any visitAssignment_expr(USLParser::Assignment_exprContext *context) = 0;

    virtual std::any visitEquality_expr(USLParser::Equality_exprContext *context) = 0;

    virtual std::any visitComparison_expr(USLParser::Comparison_exprContext *context) = 0;

    virtual std::any visitBitshift_expr(USLParser::Bitshift_exprContext *context) = 0;

    virtual std::any visitAdditive_expr(USLParser::Additive_exprContext *context) = 0;

    virtual std::any visitMultiplicative_expr(USLParser::Multiplicative_exprContext *context) = 0;

    virtual std::any visitPostfix_expr(USLParser::Postfix_exprContext *context) = 0;

    virtual std::any visitPrefix_expr(USLParser::Prefix_exprContext *context) = 0;

    virtual std::any visitPrimary_expr(USLParser::Primary_exprContext *context) = 0;

    virtual std::any visitAcces_modifiers(USLParser::Acces_modifiersContext *context) = 0;

    virtual std::any visitThrows_postfix(USLParser::Throws_postfixContext *context) = 0;

    virtual std::any visitQuailified_name(USLParser::Quailified_nameContext *context) = 0;

    virtual std::any visitAttribute_addition(USLParser::Attribute_additionContext *context) = 0;

    virtual std::any visitAttribute(USLParser::AttributeContext *context) = 0;

    virtual std::any visitComparision_operator(USLParser::Comparision_operatorContext *context) = 0;

    virtual std::any visitBitshift_operator(USLParser::Bitshift_operatorContext *context) = 0;

    virtual std::any visitAdditive_operator(USLParser::Additive_operatorContext *context) = 0;

    virtual std::any visitMultiplicative_operator(USLParser::Multiplicative_operatorContext *context) = 0;

    virtual std::any visitPrefix_operator(USLParser::Prefix_operatorContext *context) = 0;

    virtual std::any visitPostfix_operator(USLParser::Postfix_operatorContext *context) = 0;

    virtual std::any visitCall_operator(USLParser::Call_operatorContext *context) = 0;

    virtual std::any visitIndex_operator(USLParser::Index_operatorContext *context) = 0;

    virtual std::any visitCvu_type(USLParser::Cvu_typeContext *context) = 0;

    virtual std::any visitType(USLParser::TypeContext *context) = 0;

    virtual std::any visitPrimitive(USLParser::PrimitiveContext *context) = 0;

    virtual std::any visitIntegral_type(USLParser::Integral_typeContext *context) = 0;

    virtual std::any visitFloating_type(USLParser::Floating_typeContext *context) = 0;

    virtual std::any visitVector_type(USLParser::Vector_typeContext *context) = 0;

    virtual std::any visitParemeter_list(USLParser::Paremeter_listContext *context) = 0;

    virtual std::any visitParameter(USLParser::ParameterContext *context) = 0;

    virtual std::any visitLitteral(USLParser::LitteralContext *context) = 0;

    virtual std::any visitBool_litteral(USLParser::Bool_litteralContext *context) = 0;

    virtual std::any visitCvu_decorators(USLParser::Cvu_decoratorsContext *context) = 0;

    virtual std::any visitScoperesolution_list(USLParser::Scoperesolution_listContext *context) = 0;

    virtual std::any visitError_recovery(USLParser::Error_recoveryContext *context) = 0;


};

