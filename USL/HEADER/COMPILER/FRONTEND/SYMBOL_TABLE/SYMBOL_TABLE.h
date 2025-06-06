#pragma once
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H
import std;
namespace USL_COMPILER {
	enum class SymbolType {
		VARIABLE,
		FUNCTION,
		TYPE,
		ENUM
	};
	class Symbol {
		SymbolType type;
	public:
		explicit constexpr  Symbol(SymbolType type) : type(type) {}
		virtual ~Symbol() = default;
};
	using SymbolPtr = std::shared_ptr<Symbol>;

	class VariableSymbol : public Symbol {
	};
	class FunctionSymbol : public Symbol {
	};
	class TypeSymbol : public Symbol {

	};
	class Scope {

	};
	class SymbolTable {

	};
}
#endif // !SYMBOL_TABLE_H
