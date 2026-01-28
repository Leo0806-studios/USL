#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <antlr4-runtime.h>
#include <USLBaseListener.h>
#include <memory>
#include "FRONTEND/CMD_PARSE/CMD_PARSE.h"
#include "FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
#include "FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h"
#else
import <memory>;
import <antlr4-runtime.h>;
import <FRONTEND/SYMBOL_GATHERER/SYMBOL_GATHERER.h>;
import <FRONTEND/CMD_PARSE/CMD_PARSE.h>;
import <USLBaseListener.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {
	class SymbolResolver :public USLBaseListener {
		std::weak_ptr<SymbolTable> table;
		std::vector<std::string> errors;
		std::vector<std::string> warnings;
		std::vector<std::string> infos;
		std::weak_ptr<const Arguments> args;
		std::weak_ptr< antlr4::tree::ParseTreeProperty<DecoratedName>>DecoratedNames;
		std::weak_ptr<antlr4::tree::ParseTreeProperty<FunctionLocalBlockid>> LocalBlockIds;
		void logError(InternalErrors error, const std::string& errorMessage, size_t line, size_t pos);
		void logError(error error, const std::string& errorMessage, size_t line, size_t pos);
		void logError(SymbolResolveErrors error, const std::string& errorMessage, size_t line, size_t pos);
		void logWarning(WarningCodes warning, const std::string& warningMessage, size_t line, size_t pos);
		void logInfo(const std::string& infoMessage, size_t line, size_t pos);
	public:
		SymbolResolver(std::weak_ptr<SymbolTable> Table,
					   std::weak_ptr<const Arguments> Args,
					   std::weak_ptr< antlr4::tree::ParseTreeProperty<DecoratedName>> DecoratedNames,
					   std::weak_ptr<antlr4::tree::ParseTreeProperty<FunctionLocalBlockid>> LocalBlockIds);

		void enterNamespace_declaration(USLParser::Namespace_declarationContext* ctx) override;
		void exitNamespace_declaration(USLParser::Namespace_declarationContext* ctx) override;

		void enterClass_declaration(USLParser::Class_declarationContext* ctx) override;
		void exitClass_declaration(USLParser::Class_declarationContext* ctx) override;

		void enterEnum_declaration(USLParser::Enum_declarationContext* ctx) override;
		void exitEnum_declaration(USLParser::Enum_declarationContext* ctx) override;

		void enterAttribute_declaration(USLParser::Attribute_declarationContext* ctx) override;
		void exitAttribute_declaration(USLParser::Attribute_declarationContext* ctx) override;

		void enterFunction_declaration(USLParser::Function_declarationContext* ctx) override;
		void exitFunction_declaration(USLParser::Function_declarationContext* ctx) override;

		void enterVariable_declaration(USLParser::Variable_declarationContext* ctx) override;
		void exitVariable_declaration(USLParser::Variable_declarationContext* ctx) override;

		void enterLable_statement(USLParser::Lable_statementContext* ctx) override;
		void exitLable_statement(USLParser::Lable_statementContext* ctx) override;

		void enterIf_statement(USLParser::If_statementContext* ctx) override;
		void exitIf_statement(USLParser::If_statementContext* ctx) override;

		void enterElse_statement(USLParser::Else_statementContext* ctx) override;
		void exitElse_statement(USLParser::Else_statementContext* ctx) override;

		void enterWhile_statement(USLParser::While_statementContext* ctx) override;
		void exitWhile_statement(USLParser::While_statementContext* ctx) override;

		void enterDo_statement(USLParser::Do_statementContext* ctx) override;
		void exitDo_statement(USLParser::Do_statementContext* ctx) override;

		void enterFor_statement(USLParser::For_statementContext* ctx) override;
		void exitFor_statement(USLParser::For_statementContext* ctx) override;

		void enterSwitch_statement(USLParser::Switch_statementContext* ctx) override;
		void exitSwitch_statement(USLParser::Switch_statementContext* ctx) override;

		void enterCase_statement(USLParser::Case_statementContext* ctx) override;
		void exitCase_statement(USLParser::Case_statementContext* ctx) override;
		void enterDefault_statement(USLParser::Default_statementContext* ctx) override;
		void exitDefault_statement(USLParser::Default_statementContext* ctx) override;

	};
}