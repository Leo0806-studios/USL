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

		 void enterClass_delcaration(USLParser::Class_delcarationContext* param) override;
		 void exitClass_delcaration(USLParser::Class_delcarationContext* param) override;


		void enterFunction_declaration(USLParser::Function_declarationContext* param) override;
		void exitFunction_declaration(USLParser::Function_declarationContext* param) override;
		void enterVar_declaration(USLParser::Var_declarationContext* param) override;
		void exitVar_declaration(USLParser::Var_declarationContext* param) override;

		void enterEnum_declaration(USLParser::Enum_declarationContext* param) override;
			void exitEnum_declaration(USLParser::Enum_declarationContext* param) override;
			void enterParameter(USLParser::ParameterContext* param) override;
			void exitParameter(USLParser::ParameterContext* param) override;

	};
}
#endif