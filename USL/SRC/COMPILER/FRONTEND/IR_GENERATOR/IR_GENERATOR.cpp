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
	IrBuilder::IrBuilder() :m_internals(new IrBuilderContent("USL_Module"))
	{
	}
	 IrBuilder::~IrBuilder() {
//never delete m_internals. it has to be treated as a normal member of the class and will be freed after program exit. this is not a leak as there is only ever one instacne of this class
	}
	IrBuilder::IrBuilder(IrBuilder&& other) :m_internals(std::move(other.m_internals))
	{
	}
	IrBuilder& IrBuilder::operator=(IrBuilder&& other)
	{
		this->m_internals = std::move(other.m_internals);
		return *this;
	}

	std::any IrBuilder::visitUnit_test_declaration(USLParser::Unit_test_declarationContext* context)
	{
		return std::any();
	}

	std::any IrBuilder::visitTest(USLParser::TestContext* context)
	{
		return std::any();
	}

	std::any IrBuilder::visitDecorated_name(USLParser::Decorated_nameContext* context)
	{
		return std::any();
	}


	static void addLLVMTypeTobyte(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("byte"))->SetLLVMType(llvm::Type::getInt8Ty(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeToshort(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("short"))->SetLLVMType(llvm::Type::getInt16Ty(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeToint(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("int"))->SetLLVMType(llvm::Type::getInt32Ty(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTolong(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("long"))->SetLLVMType(llvm::Type::getInt64Ty(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTofloat(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("float"))->SetLLVMType(llvm::Type::getFloatTy(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTodouble(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("double"))->SetLLVMType(llvm::Type::getDoubleTy(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTohash(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		//hash is a struct so ill implement this later
		//TODO : implement hash type
	};
	static void addLLVMTypeTostring(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		//string is a struct so ill implement this later
		//TODO : implement string type
	};
	static void addLLVMTypeTochar(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("char"))->SetLLVMType(llvm::Type::getInt8Ty(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTovoid(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("void"))->SetLLVMType(llvm::Type::getVoidTy(thisptr->m_internals->TheContext));
	};
	static void addLLVMTypeTonull(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		//null is a pointer to void so we set it to int8* (char*)
	};
	static void addLLVMTypeTobool(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("bool"))->SetLLVMType(llvm::Type::getInt1Ty(thisptr->m_internals->TheContext));
		//bool is a 1 bit integer
	};
	static void addLLVMTypeToubyte(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("ubyte"))->SetLLVMType(llvm::Type::getInt8Ty(thisptr->m_internals->TheContext));
		//ubyte is an unsigned 8 bit integer
	};
	static void addLLVMTypeToushort(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("ushort"))->SetLLVMType(llvm::Type::getInt16Ty(thisptr->m_internals->TheContext));
		//ushort is an unsigned 16 bit integer
	};
	static void addLLVMTypeTouint(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("uint"))->SetLLVMType(llvm::Type::getInt32Ty(thisptr->m_internals->TheContext));
		//uint is an unsigned 32 bit integer
	};
	static void addLLVMTypeToulong(SymbolPtr RootSymbol, IrBuilder* thisptr) {
		std::static_pointer_cast<TypeSymbol>(RootSymbol->GetChildSymbols().at("ulong"))->SetLLVMType(llvm::Type::getInt64Ty(thisptr->m_internals->TheContext));
		//ulong is an unsigned 64 bit integer
	};
	void AddLLVMTypesToPrimitives(SymbolPtr RootSymbol,IrBuilder* thisptr) {

		addLLVMTypeTobyte(RootSymbol, thisptr);
		addLLVMTypeToshort(RootSymbol, thisptr);
		addLLVMTypeToint(RootSymbol, thisptr);
		addLLVMTypeTolong(RootSymbol, thisptr);
		addLLVMTypeTofloat(RootSymbol, thisptr);
		addLLVMTypeTodouble(RootSymbol, thisptr);
		addLLVMTypeTohash(RootSymbol, thisptr);
		addLLVMTypeTostring(RootSymbol, thisptr);
		addLLVMTypeTochar(RootSymbol, thisptr);
		addLLVMTypeTovoid(RootSymbol, thisptr);
		addLLVMTypeTonull(RootSymbol, thisptr);
		addLLVMTypeTobool(RootSymbol, thisptr);
		addLLVMTypeToubyte(RootSymbol, thisptr);
		addLLVMTypeToushort(RootSymbol, thisptr);
		addLLVMTypeTouint(RootSymbol, thisptr);
		addLLVMTypeToulong(RootSymbol, thisptr);
	}

	std::string NameDecorator(const SymbolPtr Symbol) {
		// first 
		std::string name = Symbol->Name();
		SymbolPtr WorkingSymbol = Symbol;
		std::stringstream DecoratedName={};
		while (SymbolPtr Parrent = WorkingSymbol->GetParent()) {

		}
		return "";
	}
	std::any USL_COMPILER::IrBuilder::visitProgram(USLParser::ProgramContext* context)
	{
		SymbolPtr Root = SymbolTable::GetRootSymbol();
		SymbolTable::SetScope(Root->GetScope());
		AddLLVMTypesToPrimitives(Root,this);
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
