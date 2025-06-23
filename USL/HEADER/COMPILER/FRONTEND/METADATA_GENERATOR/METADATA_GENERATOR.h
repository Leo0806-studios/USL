#pragma once
#ifndef METADATA_GENERATOR_H
#define METADATA_GENERATOR_H
#include <HEADER/USLBaseVisitor.h>
#include <HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h>
import std;
namespace USL_COMPILER {
	struct FunctionInfo {
		std::shared_ptr<FunctionSymbol> Symbol = nullptr;
	};
	struct MemberInfo {
		std::shared_ptr<VariableSymbol> Symbol = nullptr;

	};
	struct TypeMetaData {
		std::vector<FunctionInfo> Functions;
		std::vector<MemberInfo> Members;
	};
	class MetadataGenerator  :public USLBaseVisitor {
		std::any visitClass_delcaration(USLParser::Class_delcarationContext* ctx) override;
		std::any visitClassmember_declaration(USLParser::Classmember_declarationContext* ctx) override;
		std::any visitNamespace_declaration(USLParser::Namespace_declarationContext* ctx)override;
		std::any visitProgram(USLParser::ProgramContext* ctx)override;
	public:
		static std::vector<TypeMetaData> TypeData;

	};
}
#endif
