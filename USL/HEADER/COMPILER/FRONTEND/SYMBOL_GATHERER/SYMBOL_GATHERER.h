#pragma once
#ifndef SYMBOL_GATHERER_H
#define SYMBOL_GATHERER_H
#include <HEADER/USLBaseListener.h>
namespace USL_COMPILER {
	class SymbolGatherer :public USLBaseListener {
		void enterProgram(USLParser::ProgramContext* /*ctx*/) override;
		void exitProgram(USLParser::ProgramContext* /*ctx*/) override;

		void enterNamespace_declaration(USLParser::Namespace_declarationContext* param) override;
		void exitNamespace_declaration(USLParser::Namespace_declarationContext* param) override;

		 void enterClass_delcaratiom(USLParser::Class_delcaratiomContext* param) override;
		 void exitClass_delcaratiom(USLParser::Class_delcaratiomContext* param) override;


		void enterFunction_declaration(USLParser::Function_declarationContext* param) override;
		void exitFunction_declaration(USLParser::Function_declarationContext* param) override;
		void enterVar_declaration(USLParser::Var_declarationContext* param) override;
		void exitVar_declaration(USLParser::Var_declarationContext* param) override;
	};
}
#endif