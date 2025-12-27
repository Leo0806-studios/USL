#include "SYMBOL_GATHERER.h"
namespace USL::FRONTEND {
	SymbolGatherer::SymbolGatherer(SymbolTable& table) :table(table)
	{
	}

	void SymbolGatherer::enterNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		using iResult = SymbolTable::InsertScopeResult;
		switch (table.InsertScope(ctx->getText())) {
		case iResult::succses: {

		}
		case iResult::failiure: {
			std::stringstream errorText;
			errorText << "failed to insert and enter namespace scope " << ctx->getText()
				<<" at line: "<<ctx->getStart()->getLine()
				<< " char position: "<<ctx->getStart()->getCharPositionInLine()<<'\n';
			errors.push_back(errorText.str());
		}
		case iResult::allreadyExists: {
			break; //nothing to here yet. just exists for future proofing
		}
		}
	}

	void SymbolGatherer::exitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)
	{
		table.ExitScope();
	}

	void SymbolGatherer::enterClass_declaration(USLParser::Class_declarationContext* ctx)
	{
	}

	void SymbolGatherer::exitClass_declaration(USLParser::Class_declarationContext* ctx)
	{
	}

	void SymbolGatherer::enterEnum_declaration(USLParser::Enum_declarationContext* ctx)
	{
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

}