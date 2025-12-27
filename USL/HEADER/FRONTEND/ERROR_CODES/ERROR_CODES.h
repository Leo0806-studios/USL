#pragma once
namespace USL::FRONTEND {
	enum class ErrorTypes :char {
		Internal ='I',
		SymbolResolve='R',
		StaticAnalysis='A',
		Generic='C'
	};
	enum class InternalErrors :unsigned int {

	};
}