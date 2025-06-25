#pragma once
#ifndef IR_GENERATOR_H
#define IR_GENERATOR_H

#include <HEADER/USLVisitor.h>
namespace USL_COMPILER {
	struct IrBuilderContent;
	class IrBuilder :public USLVisitor {
		// Inherited via USLVisitor
		std::any visitProgram(USLParser::ProgramContext* context) override;
		std::any visitGlobal_statement(USLParser::Global_statementContext* context) override;
		std::any visitStatement(USLParser::StatementContext* context) override;
		std::any visitExpression(USLParser::ExpressionContext* context) override;
		std::any visitBasic_block(USLParser::Basic_blockContext* context) override;
		std::any visitClass_delcaration(USLParser::Class_delcarationContext* context) override;
		std::any visitNamespace_declaration(USLParser::Namespace_declarationContext* context) override;
		std::any visitAtribute_declaration(USLParser::Atribute_declarationContext* context) override;
		std::any visitFunction_declaration(USLParser::Function_declarationContext* context) override;
		std::any visitIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext* context) override;
		std::any visitExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext* context) override;
		std::any visitExter_function_declaratio(USLParser::Exter_function_declaratioContext* context) override;
		std::any visitEnum_declaration(USLParser::Enum_declarationContext* context) override;
		std::any visitVar_declaration(USLParser::Var_declarationContext* context) override;
		std::any visitCustom_opperator_sym(USLParser::Custom_opperator_symContext* context) override;
		std::any visitNoexcept_specifyer(USLParser::Noexcept_specifyerContext* context) override;
		std::any visitAssignment_expr(USLParser::Assignment_exprContext* context) override;
		std::any visitEquality_expr(USLParser::Equality_exprContext* context) override;
		std::any visitComparison_expr(USLParser::Comparison_exprContext* context) override;
		std::any visitBitshift_expr(USLParser::Bitshift_exprContext* context) override;
		std::any visitAdditive_expr(USLParser::Additive_exprContext* context) override;
		std::any visitMultiplicative_expr(USLParser::Multiplicative_exprContext* context) override;
		std::any visitUnary_expr(USLParser::Unary_exprContext* context) override;
		std::any visitPrimary_expr(USLParser::Primary_exprContext* context) override;
		std::any visitFunction_call(USLParser::Function_callContext* context) override;
		std::any visitAtribute_constructor(USLParser::Atribute_constructorContext* context) override;
		std::any visitAtrribute_requires(USLParser::Atrribute_requiresContext* context) override;
		std::any visitImplements_function(USLParser::Implements_functionContext* context) override;
		std::any visitImplements_Var(USLParser::Implements_VarContext* context) override;
		std::any visitPrimitives(USLParser::PrimitivesContext* context) override;
		std::any visitIntegral_type(USLParser::Integral_typeContext* context) override;
		std::any visitSigned_inegral_type(USLParser::Signed_inegral_typeContext* context) override;
		std::any visitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext* context) override;
		std::any visitLitteral(USLParser::LitteralContext* context) override;
		std::any visitType(USLParser::TypeContext* context) override;
		std::any visitParameter(USLParser::ParameterContext* context) override;
		std::any visitParameterList(USLParser::ParameterListContext* context) override;
		std::any visitClassmember_declaration(USLParser::Classmember_declarationContext* context) override;
		std::any visitOperator_symbols(USLParser::Operator_symbolsContext* context) override;
		std::any visitScope_ressolution(USLParser::Scope_ressolutionContext* context) override;
		std::any visitAtribute_parameter(USLParser::Atribute_parameterContext* context) override;
		std::any visitAtribute_parameter_list(USLParser::Atribute_parameter_listContext* context) override;
		std::any visitAtribute_decorators(USLParser::Atribute_decoratorsContext* context) override;
		std::any visitExtern_spec(USLParser::Extern_specContext* context) override;
		std::any visitId_with_scope(USLParser::Id_with_scopeContext* context) override;
		std::any visitFunction_call_parameters(USLParser::Function_call_parametersContext* context) override;


	public:
		 IrBuilderContent* m_internals = nullptr;

		IrBuilder();
		~IrBuilder() final;
		IrBuilder(const IrBuilder& other) = delete;
		IrBuilder( IrBuilder&& other);
		IrBuilder& operator=(const IrBuilder& other) = delete;
		IrBuilder& operator=(IrBuilder&& other);
	};
}
#endif // !IR_GENERATOR_H
