#include "HEADER/COMPILER/FRONTEND/SYMBOL_RESOLVER/SYMBOL_RESOLVER.h"
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
#include <HEADER/COMPILER/FRONTEND/ERROR_TABLE/ERROR_TABLE.h>
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

	void USL_COMPILER::SymbolResolver::enterClass_delcaration(USLParser::Class_delcarationContext* param)
	{
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString())->GetScope());

	}

	void USL_COMPILER::SymbolResolver::exitClass_delcaration(USLParser::Class_delcarationContext* param)
	{
		SymbolTable::PopScopeStack();
	}
	static void ReportVoidParameter(const std::string& func, const size_t line, const size_t collum) {
		ErrorPtr error = std::make_shared<SemanticError>(
			"cant use Void as Type for parameter in function declaration: " + func,
			line,
			collum
		);
		ErrorTable::AddError(error, ErrorType::SEMANTIC_ERROR);
	}
	static void ReportNUnknownType(const std::string& func,const std::string& type, const size_t line, const size_t collum) {
		ErrorPtr error = std::make_shared<SemanticError>(
			"Type : " +type +" used as function parameter in "+func+ + " does not exists in any specified scope ",
			line,
			collum
		);
		ErrorTable::AddError(error, ErrorType::SEMANTIC_ERROR);
	}
	void ProcessParameter(USLParser::ParameterContext* parameter, std::shared_ptr<FunctionSymbol> FunctionSymbol) {
		if (parameter->type()) {
			TypeAndScope typeAndScope = TypeToString(parameter->type());
			if (typeAndScope.scope.empty()) {
				SymbolPtr type = SymbolTable::ResolveSymbol(typeAndScope.Type);
				if (type) {
					FunctionSymbol->AddParameter(type);
				}
				else {
					const auto* const start = parameter->getStart();
					ReportNUnknownType(parameter->ID()->toString(), typeAndScope.Type, start->getLine(), start->getCharPositionInLine());

				}
			}
		}
		else {
			ReportVoidParameter(parameter->ID()->toString(), parameter->getStart()->getLine(), parameter->getStart()->getCharPositionInLine());
		}
	}

	void USL_COMPILER::SymbolResolver::enterFunction_declaration(USLParser::Function_declarationContext* param)
	{

		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString())->GetScope());
		SymbolPtr Func = SymbolTable::GetSymbolByName(param->ID()->toString());
		const TypeAndScope a = [&]() {	
			if (param->type()) {
			return TypeToString(param->type());
		}
		else {
			return TypeAndScope{ .Type = param->VOID()->toString(), .scope = {} };
		}}();
		const SymbolPtr rettype = [&](){
				if (a.scope.empty()) {
					return  SymbolTable::ResolveSymbol(a.Type);

				}
				else {
					return  SymbolTable::ResolveSymbol(a.Type, a.scope);
				}
				}();
		if(rettype == nullptr) {
			ReportNUnknownType(param->ID()->toString(), a.Type, param->getStart()->getLine(), param->getStart()->getCharPositionInLine());
			return;
		}
		std::static_pointer_cast<FunctionSymbol>(Func)->SetReturnType(rettype);
		auto asfuncsymbol = std::static_pointer_cast<FunctionSymbol>(Func);
		if (!param->parameterList()) {
			return;
		}


		auto parameter_list = param->parameterList();
			auto parameters = parameter_list->parameter();
			for (auto& parameter : parameter_list->parameter()) {
				ProcessParameter(parameter, asfuncsymbol);
			}
		

	}

	void USL_COMPILER::SymbolResolver::exitFunction_declaration(USLParser::Function_declarationContext* param)
	{
		SymbolTable::PopScopeStack();
	}

	void USL_COMPILER::SymbolResolver::enterVar_declaration(USLParser::Var_declarationContext* param)
	{
		std::shared_ptr<VariableSymbol> varSymbol = std::static_pointer_cast<VariableSymbol>(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(param->ID()->toString()));
		TypeAndScope typeAndScope = TypeToString(param->type());
	


			if (typeAndScope.scope.empty()) {
				auto it = SymbolTable::ResolveSymbol(typeAndScope.Type);
				varSymbol->SetType(it);
			}
			else {
				auto it = SymbolTable::ResolveSymbol(typeAndScope.Type, typeAndScope.scope);
				varSymbol->SetType(it);
			}
			

		
	}

	void USL_COMPILER::SymbolResolver::exitVar_declaration(USLParser::Var_declarationContext* param)
	{
	}
}