#pragma once

#if   defined(__clang__)  || defined(__INTELLISENSE__)||defined(TESTS_BUILD)
#include <antlr4-runtime.h>
#include <USLBaseListener.h>
#include "FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"

#else
import <antlr4-runtime.h>;
import <USLLexer.h>;
import <FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>;
#endif //  __clang__ || __INTELLISENSE__||defined(TESTS_BUILD)
namespace USL::FRONTEND {

	class SymbolGatherer :public USLBaseListener {
		SymbolTable& table;
		std::vector<std::string> errors;
	public:
		explicit [[nodiscard]] SymbolGatherer(SymbolTable& table);

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

};
}//namespace USL::FRONTEND