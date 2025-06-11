#include "HEADER/COMPILER/FRONTEND/SEMANTIC_ANALYZER/SEMANTIC_ANALYZER.h"
namespace USL_COMPILER {
	struct ExpressionReturnType {
		SymbolPtr ReturnType=nullptr;
		bool succses = false;
	};
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
	std::any SemanticAnalyzer::visitProgram(USLParser::ProgramContext* ctx)
	{
		SymbolTable::SetScope(SymbolTable::GetRootSymbol()->GetScope());
		std::cout << "visiting root\n";
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
		std::cout << "visiting function: " << ctx->ID()->toString() << '\n';
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		std::cout << "visiting namespace: " << ctx->ID()->toString() << '\n';

		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}
	std::any SemanticAnalyzer::visitClass_delcaratiom(USLParser::Class_delcaratiomContext* ctx)
	{
		std::cout << "visiting class: " << ctx->ID()->toString() << '\n';
		SymbolTable::SetScope(SymbolTable::GetCurrentScope()->getOwnSymbol()->GetChildSymbols().at(ctx->ID()->toString())->GetScope());
		auto ret = visitChildren(ctx);
		SymbolTable::PopScopeStack();
		return ret;
	}

	std::any SemanticAnalyzer::visitAssignment_expr(USLParser::Assignment_exprContext* ctx)
	{
		if (ctx->children.size() == 1) {
			std::cout << "no assigment expression\n";
		}
		else {
			std::cout << "assigment expression\n";
			
		}
		return visitChildren(ctx);
	}

	std::any SemanticAnalyzer::visitPrimary_expr(USLParser::Primary_exprContext* ctx)
	{
		SymbolPtr type = nullptr;
		ExpressionReturnType ret{};
		if (auto ptr_id = ctx->ID()) {
			type = SymbolTable::GetSymbolByName(ptr_id->toString());
			if (type) {
				ret.ReturnType = type;
				ret.succses = true;
			}
			else {
				ret.ReturnType = nullptr;
				ret.succses = false;
			}
		}
		else if (auto ptr = ctx->litteral()) {
			if (auto boolptr = ptr->BOOL_LITTERAL()) {
				ret.ReturnType = SymbolTable::GetSymbolByName(boolptr->toString());
				ret.succses = true;
			}
			else if (auto charptr = ptr->CHAR_LITTERAL()) {
				ret.ReturnType = SymbolTable::GetSymbolByName(charptr->toString());
				ret.succses = true;

			}
			else if (auto floatptr = ptr->FLOAT_LITTERAL())
			{
				ret.ReturnType = SymbolTable::GetSymbolByName(floatptr->toString());
				ret.succses = true;

			}
			else if (auto intptr = ptr->INT_LITTERAL()) {
				ret.ReturnType = SymbolTable::GetSymbolByName(intptr->toString());
				ret.succses = true;
			}

		}
		else if (auto ptr_funccall = ctx->function_call()) {
			SymbolPtr Symbol = SymbolTable::GetSymbolByName(ptr_funccall->ID()->toString());
			if (Symbol) {
				std::shared_ptr<FunctionSymbol> AsFuncSym = std::static_pointer_cast<FunctionSymbol>(Symbol);
				ret.ReturnType = AsFuncSym->GetReturnType();
				ret.succses = true;

			}
			else {
				ret.ReturnType = nullptr;
				ret.succses = false;
			}
		}

		return std::any();
	}


	
}