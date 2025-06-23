
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

    virtual std::any visitExpression(USLParser::ExpressionContext *context) = 0;

    virtual std::any visitBasic_block(USLParser::Basic_blockContext *context) = 0;

    virtual std::any visitClass_delcaration(USLParser::Class_delcarationContext *context) = 0;

    virtual std::any visitNamespace_declaration(USLParser::Namespace_declarationContext *context) = 0;

    virtual std::any visitAtribute_declaration(USLParser::Atribute_declarationContext *context) = 0;

    virtual std::any visitFunction_declaration(USLParser::Function_declarationContext *context) = 0;

    virtual std::any visitIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext *context) = 0;

    virtual std::any visitExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext *context) = 0;

    virtual std::any visitExter_function_declaratio(USLParser::Exter_function_declaratioContext *context) = 0;

    virtual std::any visitUnit_test_declaration(USLParser::Unit_test_declarationContext *context) = 0;

    virtual std::any visitEnum_declaration(USLParser::Enum_declarationContext *context) = 0;

    virtual std::any visitVar_declaration(USLParser::Var_declarationContext *context) = 0;

    virtual std::any visitCustom_opperator_sym(USLParser::Custom_opperator_symContext *context) = 0;

    virtual std::any visitNoexcept_specifyer(USLParser::Noexcept_specifyerContext *context) = 0;

    virtual std::any visitAssignment_expr(USLParser::Assignment_exprContext *context) = 0;

    virtual std::any visitEquality_expr(USLParser::Equality_exprContext *context) = 0;

    virtual std::any visitComparison_expr(USLParser::Comparison_exprContext *context) = 0;

    virtual std::any visitBitshift_expr(USLParser::Bitshift_exprContext *context) = 0;

    virtual std::any visitAdditive_expr(USLParser::Additive_exprContext *context) = 0;

    virtual std::any visitMultiplicative_expr(USLParser::Multiplicative_exprContext *context) = 0;

    virtual std::any visitUnary_expr(USLParser::Unary_exprContext *context) = 0;

    virtual std::any visitPrimary_expr(USLParser::Primary_exprContext *context) = 0;

    virtual std::any visitFunction_call(USLParser::Function_callContext *context) = 0;

    virtual std::any visitAtribute_constructor(USLParser::Atribute_constructorContext *context) = 0;

    virtual std::any visitAtrribute_requires(USLParser::Atrribute_requiresContext *context) = 0;

    virtual std::any visitImplements_function(USLParser::Implements_functionContext *context) = 0;

    virtual std::any visitImplements_Var(USLParser::Implements_VarContext *context) = 0;

    virtual std::any visitPrimitives(USLParser::PrimitivesContext *context) = 0;

    virtual std::any visitIntegral_type(USLParser::Integral_typeContext *context) = 0;

    virtual std::any visitSigned_inegral_type(USLParser::Signed_inegral_typeContext *context) = 0;

    virtual std::any visitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext *context) = 0;

    virtual std::any visitLitteral(USLParser::LitteralContext *context) = 0;

    virtual std::any visitType(USLParser::TypeContext *context) = 0;

    virtual std::any visitParameter(USLParser::ParameterContext *context) = 0;

    virtual std::any visitParameterList(USLParser::ParameterListContext *context) = 0;

    virtual std::any visitClassmember_declaration(USLParser::Classmember_declarationContext *context) = 0;

    virtual std::any visitOperator_symbols(USLParser::Operator_symbolsContext *context) = 0;

    virtual std::any visitScope_ressolution(USLParser::Scope_ressolutionContext *context) = 0;

    virtual std::any visitAtribute_parameter(USLParser::Atribute_parameterContext *context) = 0;

    virtual std::any visitAtribute_parameter_list(USLParser::Atribute_parameter_listContext *context) = 0;

    virtual std::any visitAtribute_decorators(USLParser::Atribute_decoratorsContext *context) = 0;

    virtual std::any visitExtern_spec(USLParser::Extern_specContext *context) = 0;

    virtual std::any visitId_with_scope(USLParser::Id_with_scopeContext *context) = 0;

    virtual std::any visitFunction_call_parameters(USLParser::Function_call_parametersContext *context) = 0;

    virtual std::any visitTest(USLParser::TestContext *context) = 0;


};

