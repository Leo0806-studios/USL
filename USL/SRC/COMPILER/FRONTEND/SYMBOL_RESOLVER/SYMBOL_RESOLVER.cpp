#include "HEADER/COMPILER/FRONTEND/SYMBOL_RESOLVER/SYMBOL_RESOLVER.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
namespace USL_COMPILER {

	struct TypeAndScope {
		std::string Type{};
		std::vector<std::string> scope{};
	};
	static TypeAndScope TypeToString(USLParser::TypeContext* ctx_) {
		std::string symbolType_ = "";
		std::vector<std::string> scopes_{};
		auto selectorFunc = [](USLParser::TypeContext* ctx) {
			std::string symbolType = "";
			if (ctx->ID()) {
				symbolType = ctx->ID()->toString();
			}
			else {
				if (ctx->primitives()->BOOL()) {
					symbolType = ctx->primitives()->BOOL()->toString();

				}
				else if (ctx->primitives()->BYTE()) {
					symbolType = ctx->primitives()->BYTE()->toString();
				}
				else if (ctx->primitives()->CHAR()) {
					symbolType = ctx->primitives()->CHAR()->toString();
				}
				else if (ctx->primitives()->DOUBLE()) {
					symbolType = ctx->primitives()->DOUBLE()->toString();
				}
				else if (ctx->primitives()->FLOAT()) {
					symbolType = ctx->primitives()->FLOAT()->toString();
				}
				else if (ctx->primitives()->HASH()) {
					symbolType = ctx->primitives()->HASH()->toString();
				}
				else if (ctx->primitives()->INT()) {
					symbolType = ctx->primitives()->INT()->toString();
				}
				else if (ctx->primitives()->LONG()) {
					symbolType = ctx->primitives()->LONG()->toString();
				}
				else if (ctx->primitives()->SHORT()) {
					symbolType = ctx->primitives()->SHORT()->toString();
				}
				else if (ctx->primitives()->STRING()) {
					symbolType = ctx->primitives()->STRING()->toString();
				}
				else {
					symbolType = "";
				}


			}
			return symbolType;
			};
		if (ctx_->scope_ressolution()) {
			std::vector<std::string> scopes;
			auto scopesss = ctx_->scope_ressolution()->ID();
			for (auto& scope : scopesss) {
				std::cout << scope->toString() << '\n';
				scopes.push_back(scope->toString());

			}
			scopes_ = std::move(scopes);
			symbolType_ = selectorFunc(ctx_);
		}
		else {
			symbolType_ = selectorFunc(ctx_);
		}
		TypeAndScope ret{ .Type = symbolType_,.scope = std::move(scopes_) };
		return ret;
	}

	void USL_COMPILER::SymbolResolver::enterProgram(USLParser::ProgramContext*)
	{
		SymbolTable::SetScope(std::static_pointer_cast<NamespaceSymbol>(SymbolTable::GetRootSymbol())->getScope());
	}

	void USL_COMPILER::SymbolResolver::exitProgram(USLParser::ProgramContext*)
	{
		SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolResolver::enterNamespace_declaration(USLParser::Namespace_declarationContext* param)
	{
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString())->GetScope());

	}

	void USL_COMPILER::SymbolResolver::exitNamespace_declaration(USLParser::Namespace_declarationContext* param)
	{
		SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolResolver::enterClass_delcaratiom(USLParser::Class_delcaratiomContext* param)
	{
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString())->GetScope());

	}

	void USL_COMPILER::SymbolResolver::exitClass_delcaratiom(USLParser::Class_delcaratiomContext* param)
	{
		SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolResolver::enterFunction_declaration(USLParser::Function_declarationContext* param)
	{

		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString())->GetScope());
		SymbolPtr Func = SymbolTable::GetSymbolByName(param->ID()->toString());
		auto a = TypeToString(param->type());
		SymbolPtr rettype = nullptr;
		if (a.scope.empty()) {
			rettype = SymbolTable::ResolveSymbol(a.Type);

		}
		else{
			rettype = SymbolTable::ResolveSymbol(a.Type, a.scope);
		}
		std::static_pointer_cast<FunctionSymbol>(Func)->SetReturnType(rettype);

	}

	void USL_COMPILER::SymbolResolver::exitFunction_declaration(USLParser::Function_declarationContext* param)
	{
		SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolResolver::enterVar_declaration(USLParser::Var_declarationContext* param)
	{
		std::shared_ptr<VariableSymbol> varSymbol = std::static_pointer_cast<VariableSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString()));
		std::cout << "Var declaration: " << param->ID()->toString() <<"   ";
		if (param->type()->scope_ressolution()) {
			std::vector<std::string> scopes;
			auto scopesss = param->type()->scope_ressolution()->ID();
			for (auto& scope : scopesss) {
				std::cout << scope->toString() << '\n';
				scopes.push_back(scope->toString());

			}
			std::string symbolType{};
			if (param->type()->ID()) {
				symbolType = param->type()->ID()->toString();
			}
			else {
				if (param->type()->primitives()->BOOL()) {
					symbolType = param->type()->primitives()->BOOL()->toString();

				}
				else if (param->type()->primitives()->BYTE()) {
					symbolType = param->type()->primitives()->BYTE()->toString();

				}
				else if (param->type()->primitives()->CHAR()) {
					symbolType = param->type()->primitives()->CHAR()->toString();
				}
				else if (param->type()->primitives()->DOUBLE()) {
					symbolType = param->type()->primitives()->DOUBLE()->toString();
				}
				else if (param->type()->primitives()->FLOAT()) {
					symbolType = param->type()->primitives()->FLOAT()->toString();
				}
				else if (param->type()->primitives()->HASH()) {
					symbolType = param->type()->primitives()->HASH()->toString();
				}
				else if (param->type()->primitives()->INT()) {
					symbolType = param->type()->primitives()->INT()->toString();
				}
				else if (param->type()->primitives()->LONG()) {
					symbolType = param->type()->primitives()->LONG()->toString();
				}
				else if (param->type()->primitives()->SHORT()) {
					symbolType = param->type()->primitives()->SHORT()->toString();
				}
				else if (param->type()->primitives()->STRING()) {
					symbolType = param->type()->primitives()->STRING()->toString();
				}
				else {
					std::cerr << "Unknown type in var declaration: " << param->type()->getText() << std::endl;
				}


			}
			auto it = SymbolTable::ResolveSymbol(symbolType, scopes);
			varSymbol->SetType(it );

		}
		else {

			std::string symbolType{};

			if(param->type()->ID()) {
				symbolType = param->type()->ID()->toString();
			}
			else {
				if (param->type()->primitives()->BOOL()) {
					symbolType = param->type()->primitives()->BOOL()->toString();

				}
				else if (param->type()->primitives()->BYTE()) {
					symbolType = param->type()->primitives()->BYTE()->toString();

				}
				else if (param->type()->primitives()->CHAR()) {
					symbolType = param->type()->primitives()->CHAR()->toString();
				}
				else if (param->type()->primitives()->DOUBLE()) {
					symbolType = param->type()->primitives()->DOUBLE()->toString();
				}
				else if (param->type()->primitives()->FLOAT()) {
					symbolType = param->type()->primitives()->FLOAT()->toString();
				}
				else if (param->type()->primitives()->HASH()){ 
					symbolType = param->type()->primitives()->HASH()->toString();
				}
				else if (param->type()->primitives()->INT()) {
					symbolType = param->type()->primitives()->INT()->toString();
				}
				else if (param->type()->primitives()->LONG()) {
					symbolType = param->type()->primitives()->LONG()->toString();
				}
				else if (param->type()->primitives()->SHORT()) {
					symbolType = param->type()->primitives()->SHORT()->toString();
				}
				else if (param->type()->primitives()->STRING()) {
					symbolType = param->type()->primitives()->STRING()->toString();
				}
				else {
					std::cerr << "Unknown type in var declaration: " << param->type()->getText() << std::endl;
				}


			}
			
			auto it = SymbolTable::ResolveSymbol(symbolType);
			varSymbol->SetType(it);
		}
	}

	void USL_COMPILER::SymbolResolver::exitVar_declaration(USLParser::Var_declarationContext* param)
	{
	}
}