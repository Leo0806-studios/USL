#include "HEADER/COMPILER/FRONTEND/METADATA_GENERATOR/METADATA_GENERATOR.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
namespace USL_COMPILER {

	std::vector<TypeMetaData> MetadataGenerator::TypeData = {};
	std::any MetadataGenerator::visitClass_delcaration(USLParser::Class_delcarationContext* ctx)
	{

		SymbolPtr Scope = SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString());
		SymbolTable::PushScopeStack(Scope->GetScope());
		TypeMetaData TypeData_{};
		auto ClassMembers = ctx->classmember_declaration();
		for (auto& Member : ClassMembers) {
			bool isFunc = Member->function_declaration() ? true : false;
			isFunc ?
				TypeData_.Functions.push_back(std::any_cast<FunctionInfo>(visitClassmember_declaration(Member)))
				:
				TypeData_.Members.push_back(std::any_cast<MemberInfo>(visitClassmember_declaration(Member)));
			
		}
		TypeData.emplace_back(std::move(TypeData_));

		SymbolTable::PopScopeStack();
		return std::any();
	}
	std::any MetadataGenerator::visitClassmember_declaration(USLParser::Classmember_declarationContext* ctx)
	{
		std::shared_ptr<TypeSymbol> Class = std::static_pointer_cast<TypeSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol());
		if (auto FuncPtr = ctx->function_declaration()) {
			std::shared_ptr<FunctionSymbol> Func = std::static_pointer_cast	<FunctionSymbol>(Class->GetChildSymbols().at(FuncPtr->ID()->toString()));
			return FunctionInfo{ .Symbol = Func };
		}
		else if (auto VarPtr = ctx->var_declaration()) {

			std::shared_ptr<VariableSymbol> Var = std::static_pointer_cast	<VariableSymbol>(Class->GetChildSymbols().at(VarPtr->ID()->toString()));
			return MemberInfo{ .Symbol = Var };
		}
		else{

		}
		return std::any();
	}
	std::any MetadataGenerator::visitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		SymbolPtr Scope = SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString());
		SymbolTable::PushScopeStack(Scope->GetScope());
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any MetadataGenerator::visitProgram(USLParser::ProgramContext* ctx)
	{
		auto RootScope = SymbolTable::GetRootSymbol()->GetScope();
		SymbolTable::SetScope(RootScope);
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}
}