#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Instructions.h>
#include "HEADER/COMPiLER/FRONTEND/IR_GENERATOR/IR_GENERATOR.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>

namespace USL_COMPILER {
	struct IrBuilderContent {
		std::unique_ptr<llvm::Module> TheModule;
		llvm::LLVMContext TheContext;
		llvm::IRBuilder<> Builder{ TheContext };
		std::unordered_map<std::string, llvm::AllocaInst*> symbols = {};
		explicit IrBuilderContent(const std::string& name) {
			this->TheModule = std::make_unique<llvm::Module>(name, TheContext);
		}
		IrBuilderContent() = delete;

		IrBuilderContent(const IrBuilderContent& other) = delete;
		IrBuilderContent(IrBuilderContent&& other) = delete;
		IrBuilderContent& operator=(const IrBuilderContent& other) = delete;
		IrBuilderContent& operator=(IrBuilderContent&& other) = delete;
	};
	IrBuilder::IrBuilder() :m_internals(std::make_unique<IrBuilderContent>("USL_Module"))
	{
	}
	IrBuilder::IrBuilder(IrBuilder&& other) :m_internals(std::move(other.m_internals))
	{
	}
	IrBuilder& IrBuilder::operator=(IrBuilder&& other)
	{
		this->m_internals = std::move(other.m_internals);
		return *this;
	}


	static void addLLVMTypeTobyte(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeToshort(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeToint(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTolong(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTofloat(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTodouble(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTohash(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTostring(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTochar(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTovoid(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTonull(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTobool(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeToubyte(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeToushort(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeTouint(SymbolPtr RootSymbol) {
	};
	static void addLLVMTypeToulong(SymbolPtr RootSymbol) {
	};
	void AddLLVMTypesToPrimitives(SymbolPtr RootSymbol) {

		addLLVMTypeTobyte(RootSymbol);
		addLLVMTypeToshort(RootSymbol);
		addLLVMTypeToint(RootSymbol);
		addLLVMTypeTolong(RootSymbol);
		addLLVMTypeTofloat(RootSymbol);
		addLLVMTypeTodouble(RootSymbol);
		addLLVMTypeTohash(RootSymbol);
		addLLVMTypeTostring(RootSymbol);
		addLLVMTypeTochar(RootSymbol);
		addLLVMTypeTovoid(RootSymbol);
		addLLVMTypeTonull(RootSymbol);
		addLLVMTypeTobool(RootSymbol);
		addLLVMTypeToubyte(RootSymbol);
		addLLVMTypeToushort(RootSymbol);
		addLLVMTypeTouint(RootSymbol);
		addLLVMTypeToulong(RootSymbol);
	}
	std::any USL_COMPILER::IrBuilder::visitProgram(USLParser::ProgramContext* context)
	{
		SymbolPtr Root = SymbolTable::GetRootSymbol();
		SymbolTable::SetScope(Root->GetScope());
		AddLLVMTypesToPrimitives(Root);
		auto ret = visitChildren(context);
		SymbolTable::PopScopeStack();
		return ret;
	}

	std::any USL_COMPILER::IrBuilder::visitGlobal_statement(USLParser::Global_statementContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitStatement(USLParser::StatementContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitExpression(USLParser::ExpressionContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitBasic_block(USLParser::Basic_blockContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitClass_delcaration(USLParser::Class_delcarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitNamespace_declaration(USLParser::Namespace_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtribute_declaration(USLParser::Atribute_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitFunction_declaration(USLParser::Function_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitIntrinsic_function_pre_declaration(USLParser::Intrinsic_function_pre_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitExtern_function_pre_declaration(USLParser::Extern_function_pre_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitExter_function_declaratio(USLParser::Exter_function_declaratioContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitEnum_declaration(USLParser::Enum_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitVar_declaration(USLParser::Var_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitCustom_opperator_sym(USLParser::Custom_opperator_symContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitNoexcept_specifyer(USLParser::Noexcept_specifyerContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAssignment_expr(USLParser::Assignment_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitEquality_expr(USLParser::Equality_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitComparison_expr(USLParser::Comparison_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitBitshift_expr(USLParser::Bitshift_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAdditive_expr(USLParser::Additive_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitMultiplicative_expr(USLParser::Multiplicative_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitUnary_expr(USLParser::Unary_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitPrimary_expr(USLParser::Primary_exprContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitFunction_call(USLParser::Function_callContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtribute_constructor(USLParser::Atribute_constructorContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtrribute_requires(USLParser::Atrribute_requiresContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitImplements_function(USLParser::Implements_functionContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitImplements_Var(USLParser::Implements_VarContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitPrimitives(USLParser::PrimitivesContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitIntegral_type(USLParser::Integral_typeContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitSigned_inegral_type(USLParser::Signed_inegral_typeContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitUnsigned_integral_type(USLParser::Unsigned_integral_typeContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitLitteral(USLParser::LitteralContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitType(USLParser::TypeContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitParameter(USLParser::ParameterContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitParameterList(USLParser::ParameterListContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitClassmember_declaration(USLParser::Classmember_declarationContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitOperator_symbols(USLParser::Operator_symbolsContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitScope_ressolution(USLParser::Scope_ressolutionContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtribute_parameter(USLParser::Atribute_parameterContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtribute_parameter_list(USLParser::Atribute_parameter_listContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitAtribute_decorators(USLParser::Atribute_decoratorsContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitExtern_spec(USLParser::Extern_specContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitId_with_scope(USLParser::Id_with_scopeContext* context)
	{
		return std::any();
	}

	std::any USL_COMPILER::IrBuilder::visitFunction_call_parameters(USLParser::Function_call_parametersContext* context)
	{
		return std::any();
	}

}
