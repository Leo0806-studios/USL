#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <antlr4-runtime.h>
#include <FRONTEND/CMD_PARSE/CMD_PARSE.h>
#include <FRONTEND/ERROR_CODES/ERROR_CODES.h>
#include <FRONTEND/SYMBOL/SYMBOL.h>
#include <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
#include <memory>
#include <sstream>
#include <string>
#include <USLParser.h>
#include <utility>
#include <vector>
#include "FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include "FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#else
import <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>;
import <FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <FRONTEND/ERROR_CODES/ERROR_CODES.h>;
import <FRONTEND/SYMBOL/SYMBOL.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
import <memory>;
import <sstream>;
import <string>;
#pragma warning (push,0)
import <antlr4-runtime.h>;
import <USLParser.h>;
#pragma warning (pop)
import <utility>;
import <vector>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace USL::FRONTEND {
	namespace {
		std::vector<std::string> aggregateScope(WeakScopePtr startScope) {
			std::vector<std::string> ret;
			WeakScopePtr current = std::move(startScope);
			do {
				ret.emplace_back(current.lock()->Get_simpleName());
				current = current.lock()->Get_parentScope();
			} while (current.lock()->Get_parentScope().lock());
			return ret;
		}
	}
	void SymbolGatherer::logError(InternalErrors error, const std::string& errorMessage, size_t line, size_t pos)
	{
		std::stringstream errorText;
		errorText << "Internal Error [" << std::to_underlying(ErrorTypes::Internal) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());
	}
	void SymbolGatherer::logError(error error, const std::string& errorMessage, size_t line, size_t pos)
	{
		std::stringstream errorText;
		errorText << "Generic Error [" << std::to_underlying(ErrorTypes::Generic) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());
	}
	void SymbolGatherer::logWarning(WarningCodes warning, const std::string& warningMessage, size_t line, size_t pos)
	{
		std::stringstream warnText;
		warnText << "Warning [" << std::to_underlying(SeverityLevels::Warning) << std::to_underlying(warning) << "]: " << warningMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		warnings.emplace_back(warnText.str());
	}
	void SymbolGatherer::logInfo(const std::string& infoMessage, size_t line, size_t pos)
	{
		std::stringstream infoText;
		infoText << "Info: " << infoMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		infos.emplace_back(infoText.str());
	}
	SymbolGatherer::SymbolGatherer(std::weak_ptr<SymbolTable> Table,
								   std::weak_ptr<const Arguments> Args,
								   std::weak_ptr< antlr4::tree::ParseTreeProperty<DecoratedName>> DecoratedNames) :
		table(std::move(Table)),
		args(std::move(Args)),
		DecoratedNames(std::move(DecoratedNames))
	{
	}

	void SymbolGatherer::enterNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		using iResult = SymbolTable::InsertScopeResult;
		auto lockedTable = this->table.lock();
		switch (lockedTable->InsertScope(ctx->NamespaceName->getText())) {
			case iResult::succses: {
					break;
				}
			case iResult::failiure: {
					logError(InternalErrors::FailedToInsertScope, "Failed to insert Namespace scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResult::allreadyExists: {
					if (args.lock()->IsDebugOptionEnabled(Arguments::CompilerDebugOptions::printFullLogs)) {
						logInfo("Namespace scope already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					}
					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Namespace scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
				}
		}
	}

	void SymbolGatherer::exitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		if (!table.lock()->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Namespace scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}

	void SymbolGatherer::enterClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		auto lockedTable = this->table.lock();

		const WeakScopePtr currentScope = lockedTable->GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> classSymbol = std::make_unique<USL::FRONTEND::TypeSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (lockedTable->InsertScopeWithSymbol(ctx->TypeName->getText(), std::move(classSymbol), ctx->TypeName->getText()))
		{
			case iResultSymbol::succses: {
					break; //nothing else to do here. just exists for future proofing
				}
			case iResultSymbol::failiure: {
					logError(InternalErrors::FailedToInsertSymbol, "Failed to insert Class/Struct symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResultSymbol::allreadyExists: {
					logError(error::DuplicateSymbolDeclaration, "Class/Struct symbol already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Class/Struct symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
		}
		const auto scopes = aggregateScope(lockedTable->GetCurrentScope().lock()->Get_parentScope());

		const DecoratedName decoratedName(scopes, TypeSymbolName(ctx->TypeName->getText()));
		DecoratedNames.lock()->put(ctx, decoratedName);
	}

	void SymbolGatherer::exitClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		if (!table.lock()->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Class/Struct scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}

	void SymbolGatherer::enterEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
		auto lovkedTable = this->table.lock();

		const WeakScopePtr currentScope = lovkedTable->GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> enumSymbol = std::make_unique<USL::FRONTEND::EnumSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (lovkedTable->InsertScopeWithSymbol(ctx->EnumName->getText(), std::move(enumSymbol), ctx->EnumName->getText()))
		{
			case iResultSymbol::succses: {
					break; //nothing else to do here. just exists for future proofing
				}
			case iResultSymbol::failiure: {
					logError(InternalErrors::FailedToInsertSymbol, "Failed to insert Enum symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResultSymbol::allreadyExists: {
					logError(error::DuplicateSymbolDeclaration, "Enum symbol already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Enum symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
				}
		}

		//enum is different to classes and such since there are no helper rules and we have to enumerate the enum values here
		const auto enumIds = ctx->ID();
		for (const auto& id : enumIds) {
			std::unique_ptr<Symbol> symbol = std::make_unique<EnumConstant>(lovkedTable->GetCurrentScope());
			switch (lovkedTable->InsertSymbol(std::move(symbol), id->getText())) {
				case iResultSymbol::succses: {
						break;//nothing to do
					}
				case iResultSymbol::allreadyExists: {
						logError(error::DuplicateSymbolDeclaration, "enum constant " + id->getText() + " allready exists", id->getSymbol()->getLine(), 0);
						return;
					}
				case iResultSymbol::failiure: {
						logError(InternalErrors::FailedToInsertSymbol, "failed to insert enum constant " + id->getText(), id->getSymbol()->getLine(), 0);
						return;
					}
				default: {
						logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Enum constant", id->getSymbol()->getLine(), 0);
						return;
					}
			}
		}
	}

	void SymbolGatherer::exitEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
		if (!table.lock()->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Enum scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}

	void SymbolGatherer::enterAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
		auto lokedTable = this->table.lock();

		const WeakScopePtr currentScope = lokedTable->GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> enumSymbol = std::make_unique<USL::FRONTEND::AttribueSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (lokedTable->InsertScopeWithSymbol(ctx->AttributeName->getText(), std::move(enumSymbol), ctx->AttributeName->getText()))
		{
			case iResultSymbol::succses: {
					break; //nothing else to do here. just exists for future proofing
				}
			case iResultSymbol::failiure: {
					logError(InternalErrors::FailedToInsertSymbol, "Failed to insert attribute  symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResultSymbol::allreadyExists: {
					logError(error::DuplicateSymbolDeclaration, "attribute symbol already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting attribute symbol", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
				}
		}
	}

	void SymbolGatherer::exitAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
		if (!table.lock()->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Attribute scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}

	void SymbolGatherer::enterFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
		auto lovkedTable = this->table.lock();
		const WeakScopePtr currentScope = lovkedTable->GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> functionSymbol = std::make_unique<USL::FRONTEND::FunctionSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (lovkedTable->InsertScopeWithSymbol(ctx->FunctionName->getText(), std::move(functionSymbol), ctx->FunctionName->getText())) {
			case iResultSymbol::succses: {
					break;//nothing to do here
				}
			case iResultSymbol::allreadyExists: {
					logError(error::DuplicateSymbolDeclaration, "Function Symbol allready exists:  " + ctx->FunctionName->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResultSymbol::failiure: {
					logError(InternalErrors::FailedToInsertSymbol, "failed to insert Funktion symbol: " + ctx->FunctionName->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "unknown error occured while inserting function Symbol: " + ctx->FunctionName->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
		}
	}

	void SymbolGatherer::exitFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
		if (!table.lock()->ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Function scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}
	}

	void SymbolGatherer::enterVariable_declaration(USLParser::Variable_declarationContext* ctx)
	{
	}

	void SymbolGatherer::exitVariable_declaration(USLParser::Variable_declarationContext* ctx)
	{
	}

	void SymbolGatherer::enterLable_statement(USLParser::Lable_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitLable_statement(USLParser::Lable_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterIf_statement(USLParser::If_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitIf_statement(USLParser::If_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterElse_statement(USLParser::Else_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitElse_statement(USLParser::Else_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterWhile_statement(USLParser::While_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitWhile_statement(USLParser::While_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterDo_statement(USLParser::Do_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitDo_statement(USLParser::Do_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterFor_statement(USLParser::For_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitFor_statement(USLParser::For_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterSwitch_statement(USLParser::Switch_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitSwitch_statement(USLParser::Switch_statementContext* ctx)
	{
	}

	void SymbolGatherer::enterCase_statement(USLParser::Case_statementContext* ctx)
	{
	}

	void SymbolGatherer::exitCase_statement(USLParser::Case_statementContext* ctx)
	{
	}
}// namespace USL::FRONTEND