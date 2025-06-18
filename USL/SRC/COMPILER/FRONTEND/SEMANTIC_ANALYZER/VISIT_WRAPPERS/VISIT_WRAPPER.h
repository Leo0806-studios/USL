#pragma once
#ifndef VISIT_WRAPPER_H
#define VISIT_WRAPPER_H
import std;
#include<COMPILER/FRONTEND/SEMANTIC_ANALYZER/SEMANTIC_ANALYZER.h>
#include "VisitorReturnTypes.h"
namespace USL_COMPILER {
	std::any visitProgram(SemanticAnalyzer* thisPtr,USLParser::ProgramContext* ctx);
	std::any visitFunction_declaration(SemanticAnalyzer* thisPtr,USLParser::Function_declarationContext* ctx);
	std::any visitNamespace_declaration(SemanticAnalyzer* thisPtr,USLParser::Namespace_declarationContext* ctx);
	std::any visitClass_delcaration(SemanticAnalyzer* thisPtr,USLParser::Class_delcarationContext* ctx);
	std::any visitAssignment_expr(SemanticAnalyzer* thisPtr,USLParser::Assignment_exprContext* ctx);
	std::any visitPrimary_expr(SemanticAnalyzer* thisPtr,USLParser::Primary_exprContext* ctx);
	std::any visitGlobal_statement(SemanticAnalyzer* thisPtr,USLParser::Global_statementContext* context);
	std::any visitStatement(SemanticAnalyzer* thisPtr,USLParser::StatementContext* context);
	std::any visitExpression(SemanticAnalyzer* thisPtr,USLParser::ExpressionContext* context);
	std::any visitBasic_block(SemanticAnalyzer* thisPtr,USLParser::Basic_blockContext* context);
	std::any visitAtribute_declaration(SemanticAnalyzer* thisPtr,USLParser::Atribute_declarationContext* context);
	std::any visitEnum_declaration(SemanticAnalyzer* thisPtr,USLParser::Enum_declarationContext* context);
	std::any visitVar_declaration(SemanticAnalyzer* thisPtr,USLParser::Var_declarationContext* context);
	std::any visitCustom_opperator_sym(SemanticAnalyzer* thisPtr,USLParser::Custom_opperator_symContext* context);
	std::any visitNoexcept_specifyer(SemanticAnalyzer* thisPtr,USLParser::Noexcept_specifyerContext* context);
	std::any visitEquality_expr(SemanticAnalyzer* thisPtr,USLParser::Equality_exprContext* context);
	std::any visitComparison_expr(SemanticAnalyzer* thisPtr,USLParser::Comparison_exprContext* context);
	std::any visitBitshift_expr(SemanticAnalyzer* thisPtr,USLParser::Bitshift_exprContext* context);
	std::any visitAdditive_expr(SemanticAnalyzer* thisPtr,USLParser::Additive_exprContext* context);
	std::any visitMultiplicative_expr(SemanticAnalyzer* thisPtr,USLParser::Multiplicative_exprContext* context);
	std::any visitUnary_expr(SemanticAnalyzer* thisPtr,USLParser::Unary_exprContext* context);
	std::any visitFunction_call(SemanticAnalyzer* thisPtr,USLParser::Function_callContext* context);
	std::any visitAtribute_constructor(SemanticAnalyzer* thisPtr,USLParser::Atribute_constructorContext* context);
	std::any visitAtrribute_requires(SemanticAnalyzer* thisPtr,USLParser::Atrribute_requiresContext* context);
	std::any visitImplements_function(SemanticAnalyzer* thisPtr,USLParser::Implements_functionContext* context);
	std::any visitImplements_Var(SemanticAnalyzer* thisPtr,USLParser::Implements_VarContext* context);
	std::any visitPrimitives(SemanticAnalyzer* thisPtr,USLParser::PrimitivesContext* context);
	std::any visitIntegral_type(SemanticAnalyzer* thisPtr,USLParser::Integral_typeContext* context);
	std::any visitLitteral(SemanticAnalyzer* thisPtr,USLParser::LitteralContext* context);
	std::any visitType(SemanticAnalyzer* thisPtr,USLParser::TypeContext* context);
	std::any visitParameter(SemanticAnalyzer* thisPtr,USLParser::ParameterContext* context);
	std::any visitParameterList(SemanticAnalyzer* thisPtr,USLParser::ParameterListContext* context);
	std::any visitClassmember_declaration(SemanticAnalyzer* thisPtr,USLParser::Classmember_declarationContext* context);
	std::any visitOperator_symbols(SemanticAnalyzer* thisPtr,USLParser::Operator_symbolsContext* context);
	std::any visitScope_ressolution(SemanticAnalyzer* thisPtr,USLParser::Scope_ressolutionContext* context);
	std::any visitAtribute_parameter(SemanticAnalyzer* thisPtr,USLParser::Atribute_parameterContext* context);
	std::any visitAtribute_parameter_list(SemanticAnalyzer* thisPtr,USLParser::Atribute_parameter_listContext* context);
	std::any visitAtribute_decorators(SemanticAnalyzer* thisPtr,USLParser::Atribute_decoratorsContext* context);
	std::any visitSigned_inegral_type(SemanticAnalyzer* thisPtr,USLParser::Signed_inegral_typeContext* context);
	std::any visitUnsigned_integral_type(SemanticAnalyzer* thisPtr,USLParser::Unsigned_integral_typeContext* context);
	std::any visitExtern_spec(SemanticAnalyzer* thisPtr,USLParser::Extern_specContext* context);
	std::any visitId_with_scope(SemanticAnalyzer* thisPtr,USLParser::Id_with_scopeContext* context);
	std::any visitFunction_call_parameters(SemanticAnalyzer* thisPtr,USLParser::Function_call_parametersContext* context) ;
}
#endif // !VISIT_WRAPPER_H
