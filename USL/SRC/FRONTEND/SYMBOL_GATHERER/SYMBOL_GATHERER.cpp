#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)

#include "FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#else
import <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)

namespace USL::FRONTEND {
	void SymbolGatherer::logError(InternalErrors error, const std::string& errorMessage, size_t line, size_t pos)
	{
		std::stringstream errorText;
		errorText << "Internal Error [" << std::to_underlying(ErrorTypes::Internal) << std::to_underlying(error) << "]: " << errorMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		errors.emplace_back(errorText.str());
	}
	void SymbolGatherer::logInfo(const std::string& infoMessage, size_t line, size_t pos)
	{
		std::stringstream infoText;
		infoText << "Info: " << infoMessage
			<< " at line: " << line
			<< " char position: " << pos << '\n';
		infos.emplace_back(infoText.str());
	}
	SymbolGatherer::SymbolGatherer(SymbolTable& rTable, const Arguments& rArgs) :table(rTable), args(rArgs)
	{
	}

	void SymbolGatherer::enterNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		using iResult = SymbolTable::InsertScopeResult;
		switch (table.InsertScope(ctx->NamespaceName->getText())) {
			case iResult::succses: {
					break;
				}
			case iResult::failiure: {
					logError(InternalErrors::FailedToInsertScope, "Failed to insert Namespace scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
			case iResult::allreadyExists: {
					if (args.IsDebugOptionEnabled(Arguments::CompilerDebugOptions::printFullLogs)) {
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
		if (!table.ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Namespace scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
		}

	}

	void SymbolGatherer::enterClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		using iResultScope = SymbolTable::InsertScopeResult;
		switch (table.InsertScope(ctx->TypeName->getText())) {
			case iResultScope::succses: {
					break;// nothing else to do here. just exists for future proofing
				}
			case iResultScope::failiure: {
					logError(InternalErrors::FailedToInsertScope, "Failed to insert Class/Struct scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());

					return;
				}
			case iResultScope::allreadyExists: {
					logInfo("Class/Struct scope already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());

					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Class/Struct scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
		}


		const WeakScopePtr currentScope = table.GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> classSymbol = std::make_unique<USL::FRONTEND::TypeSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (table.InsertSymbol(std::move(classSymbol), ctx->TypeName->getText()))
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
	}

	void SymbolGatherer::exitClass_declaration(USLParser::Class_declarationContext* ctx)
	{
		if (!table.ExitScope()) {
			logError(InternalErrors::FailedToExitScope, "Failed to exit Class/Struct scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());

		}


	}

	void SymbolGatherer::enterEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
		using iResultScope = SymbolTable::InsertScopeResult;
		switch (table.InsertScope(ctx->EnumName->getText())) {
			case iResultScope::succses: {
					break;// nothing else to do here. just exists for future proofing
				}
			case iResultScope::failiure: {
					logError(InternalErrors::FailedToInsertScope, "Failed to insert Enum scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());

					return;
				}
			case iResultScope::allreadyExists: {
					logInfo("Enum scope already exists: " + ctx->getText(), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());

					return;
				}
			default: {
					logError(InternalErrors::unknownInternalError, "Unknown error occurred while inserting Enum scope", ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
					return;
				}
		}
		const WeakScopePtr currentScope = table.GetCurrentScope();
		std::unique_ptr<USL::FRONTEND::Symbol> enumSymbol = std::make_unique<USL::FRONTEND::EnumSymbol>(currentScope);
		using iResultSymbol = SymbolTable::InsertSymbolResult;
		switch (table.InsertSymbol(std::move(enumSymbol), ctx->EnumName->getText()))
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
	}

	void SymbolGatherer::exitEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
	}

	void SymbolGatherer::enterAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
	}

	void SymbolGatherer::exitAttribute_declaration(USLParser::Attribute_declarationContext* ctx)
	{
	}

	void SymbolGatherer::enterFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
	}

	void SymbolGatherer::exitFunction_declaration(USLParser::Function_declarationContext* ctx)
	{
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