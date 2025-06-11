#pragma once
#include <HEADER/USLBaseVisitor.h>
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
import std;
namespace USL_COMPILER {
	class SemanticAnalyzer :public USLBaseVisitor {
		std::any visitProgram(USLParser::ProgramContext* ctx)override;
		std::any visitFunction_declaration(USLParser::Function_declarationContext* ctx) override;
		std::any visitNamespace_declaration(USLParser::Namespace_declarationContext* ctx) override;
		std::any visitClass_delcaratiom(USLParser::Class_delcaratiomContext* ctx) override;
		std::any visitAssignment_expr(USLParser::Assignment_exprContext* ctx) override;
		std::any visitPrimary_expr(USLParser::Primary_exprContext* ctx) override;
	};
}