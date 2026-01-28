#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <antlr4-runtime.h>
#include <USLBaseListener.h>
#include <memory>
#include "FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include "FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#include "FRONTEND/SYMBOL_RESOLVER/SYMBOL_RESOLVER.h"
#else
import <memory>;
import <antlr4-runtime.h>;
import <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <USLBaseListener.h>;
import <FRONTEND/SYMBOL_RESOLVER/SYMBOL_RESOLVER.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {
	namespace {
		size_t GetLine(antlr4::ParserRuleContext* ctx) {
			return ctx->getStart()->getLine();
		}
		size_t GetCharPos(antlr4::ParserRuleContext* ctx) {
			return ctx->getStart()->getCharPositionInLine();
		}
	}
	void SymbolResolver::logError(InternalErrors error, const std::string& errorMessage, size_t line, size_t pos)
	{	
		std::stringstream errorText;
		errorText << "Internal Error [" << std::to_underlying(ErrorTypes::Internal) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());
	}
	void SymbolResolver::logError(error error, const std::string& errorMessage, size_t line, size_t pos)
	{
		std::stringstream errorText;
		errorText << "Generic Error [" << std::to_underlying(ErrorTypes::Generic) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());
	}
	void SymbolResolver::logError(SymbolResolveErrors error, const std::string& errorMessage, size_t line, size_t pos)
	{
		std::stringstream errorText;
		errorText << "SymbolResolver Error [" << std::to_underlying(ErrorTypes::SymbolResolve) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());

	}
	void SymbolResolver::logWarning(WarningCodes warning, const std::string& warningMessage, size_t line, size_t pos)
	{
	}
	void SymbolResolver::logInfo(const std::string& infoMessage, size_t line, size_t pos)
	{
	}
	SymbolResolver::SymbolResolver(std::weak_ptr<SymbolTable> Table,
								   std::weak_ptr<const Arguments> Args,
								   std::weak_ptr<antlr4::tree::ParseTreeProperty<DecoratedName>> DecoratedNames,
								   std::weak_ptr<antlr4::tree::ParseTreeProperty<FunctionLocalBlockid>> LocalBlockIds)
		:table(Table),args(Args),DecoratedNames(DecoratedNames),LocalBlockIds(LocalBlockIds)
	{
	}
	void SymbolResolver::enterNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		auto locked = table.lock();
		if (!locked->EnterScope(ctx->NamespaceName->getText())) {
			logError(InternalErrors::FailedToEnterScope, "failed to enter Namespace scope during symbol Resolving", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}
	void SymbolResolver::exitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		auto locked = table.lock();
		if (!locked->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "failed to exit namespace scope during symbol resolving", GetLine(ctx), GetCharPos(ctx));
		}
	}
	void SymbolResolver::enterClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		auto locked = table.lock();
		if (!locked->EnterScope(ctx->TypeName->getText())) {
			logError(InternalErrors::FailedToEnterScope, "failed to enter class scope during symbol Resolving", GetLine(ctx), GetCharPos(ctx));
		}
	}
	void SymbolResolver::exitClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		auto locked = table.lock();
		if (!locked->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "failed to exit class scope during symbol resolving", GetLine(ctx), GetCharPos(ctx));
		}
	}
	void SymbolResolver::enterEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
		auto locked = table.lock();
		std::weak_ptr<EnumSymbol> enumSymbol = std::dynamic_pointer_cast<EnumSymbol>(locked->LookupSymbol(ctx->EnumName->getText()).lock());
		if (enumSymbol.expired()) {
			logError(InternalErrors::unknownInternalError, "cant find symbol that should exist. this error should never show up. good luck", GetLine(ctx), GetCharPos(ctx));
			}
		std::weak_ptr<TypeSymbol> enumType = std::dynamic_pointer_cast<TypeSymbol>(locked->LookupSymbol(ctx->EnumType->getText()).lock());
		if (enumType.expired()) {
			logError(InternalErrors::unknownInternalError, " cant resolve enum symbol Type. this error should never appear since the parser only accepts primitives. good luck", GetLine(ctx), GetCharPos(ctx));
		}
		enumSymbol.lock()->Set_enumtype(enumType);

		for (auto& constant : enumSymbol.lock()->Get_ownScope().lock()->GetSymbols()) {
			std::static_pointer_cast<EnumConstant> (constant.second)->Set_type(enumType);
		}

	}
	void SymbolResolver::exitEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
		auto locked = table.lock();
		if (!locked->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "failed to exit enum scope during symbol resolving", GetLine(ctx), GetCharPos(ctx));
		}
	}
	void SymbolResolver::enterAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
	}
	void SymbolResolver::exitAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
	}
	void SymbolResolver::enterFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
	}
	void SymbolResolver::exitFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
	}
	void SymbolResolver::enterVariable_declaration(USLParser::Variable_declarationContext* ctx)
	{
	}
	void SymbolResolver::exitVariable_declaration(USLParser::Variable_declarationContext* ctx)
	{
	}
	void SymbolResolver::enterLable_statement(USLParser::Lable_statementContext* ctx)
	{
	}
	void SymbolResolver::exitLable_statement(USLParser::Lable_statementContext* ctx)
	{
	}
	void SymbolResolver::enterIf_statement(USLParser::If_statementContext* ctx)
	{
	}
	void SymbolResolver::exitIf_statement(USLParser::If_statementContext* ctx)
	{
	}
	void SymbolResolver::enterElse_statement(USLParser::Else_statementContext* ctx)
	{
	}
	void SymbolResolver::exitElse_statement(USLParser::Else_statementContext* ctx)
	{
	}
	void SymbolResolver::enterWhile_statement(USLParser::While_statementContext* ctx)
	{
	}
	void SymbolResolver::exitWhile_statement(USLParser::While_statementContext* ctx)
	{
	}
	void SymbolResolver::enterDo_statement(USLParser::Do_statementContext* ctx)
	{
	}
	void SymbolResolver::exitDo_statement(USLParser::Do_statementContext* ctx)
	{
	}
	void SymbolResolver::enterFor_statement(USLParser::For_statementContext* ctx)
	{
	}
	void SymbolResolver::exitFor_statement(USLParser::For_statementContext* ctx)
	{
	}
	void SymbolResolver::enterSwitch_statement(USLParser::Switch_statementContext* ctx)
	{
	}
	void SymbolResolver::exitSwitch_statement(USLParser::Switch_statementContext* ctx)
	{
	}
	void SymbolResolver::enterCase_statement(USLParser::Case_statementContext* ctx)
	{
	}
	void SymbolResolver::exitCase_statement(USLParser::Case_statementContext* ctx)
	{
	}
	void SymbolResolver::enterDefault_statement(USLParser::Default_statementContext* ctx)
	{
	}
	void SymbolResolver::exitDefault_statement(USLParser::Default_statementContext* ctx)
	{
	}
}