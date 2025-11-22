#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)
#include <string>
#include <vector>
#include <utility>
#else
import<string>;
import<vector>;
import <utility>;
#endif //  __clang__ || __INTELLISENSE__
namespace USL::FRONTEND
{
	class InvalidDecoratedNameException : public std::exception {
		std::string message = {};
	public:
		InvalidDecoratedNameException() = default;
		explicit InvalidDecoratedNameException(const std::string& msg) : message(msg) {}
		const char* what() const noexcept override {
			return message.c_str();
		}
	};
	enum class Prefix :char {
		invalid = '\0',
		destructor = '!',
		constructor = '?',
		intrinsic = '%',
	};
	enum class SymbolType :char {
		invalid_type = '\0',
		type = 'T',
		function = 'F',
		variable = 'V',
		attribute = 'A',
	};
	enum class Postfix :char {
		invalid = '\0',
	};
	class VariableSymbol {
	public:
		VariableSymbol() = default; VariableSymbol(const VariableSymbol& other) = default; VariableSymbol& operator=(const VariableSymbol& other) = default; VariableSymbol(VariableSymbol&& other) noexcept = default; VariableSymbol& operator=(VariableSymbol&& other) noexcept = default; ~VariableSymbol() = default;
		std::string to_string() const;
	};
	class TypeSymbol {
	public:
		RuleOfFive(TypeSymbol)
			std::string to_string() const;
	};
	class FunctionSymbol {
		friend struct std::hash<FunctionSymbol>;
		using ScopeList = std::vector<std::string >;
		std::vector<ScopeList> Parameters = {};
		ScopeList ReturnType = {};
	public:
		RuleOfFive(FunctionSymbol)
			std::string to_string() const;
	};
	class AttributeSymbol {
	public:
		RuleOfFive(AttributeSymbol)
			std::string to_string() const;
	};
	/// <summary>
	/// represents the decorated name of a symbol in the USL language.
	/// the internally cached hash is used to speed up lookups in the symbol table.
	/// it is not included in any further hashing operations.
	/// </summary>
	class DecoratedName {
		friend struct std::hash<DecoratedName>;
		std::vector<std::string> scope = {};
		size_t PrecomputedHash = 0;
		union {
			VariableSymbol variable_symbol;
			TypeSymbol type_symbol;
			FunctionSymbol function_symbol;
			AttributeSymbol attribute_symbol;
		};
		SymbolType symbol_type = SymbolType::invalid_type;
	public:
		DecoratedName() : function_symbol{} {}
		~DecoratedName() {};
		template<typename SymbolKind,typename = std::enable_if<
			std::is_same_v<SymbolKind, VariableSymbol> ||
			std::is_same_v<SymbolKind, TypeSymbol> ||
			std::is_same_v<SymbolKind, FunctionSymbol> ||
			std::is_same_v<SymbolKind, AttributeSymbol>>>
		DecoratedName(std::vector<std::string> scopes,SymbolKind symbolKind)
		{
			scope = std::move(scopes);
			if constexpr (std::is_same_v<SymbolKind, VariableSymbol>) {
				symbol_type = SymbolType::variable;
				variable_symbol =std::move(symbolKind);
			}
			else if constexpr (std::is_same_v<SymbolKind, TypeSymbol>) {
				symbol_type = SymbolType::type;
				type_symbol=std::move(symbolKind);
			}
			else if constexpr (std::is_same_v<SymbolKind, FunctionSymbol>) {
				symbol_type = SymbolType::function;
				function_symbol =std::move(symbolKind);
			}
			else if constexpr (std::is_same_v<SymbolKind, AttributeSymbol>) {
				symbol_type = SymbolType::attribute;
				attribute_symbol =std::move(symbolKind);
			}
			PrecomputedHash = std::hash<DecoratedName>{}(*this);
		}
		explicit DecoratedName(const std::string& mangled_name);
		DecoratedName(const DecoratedName& other);
		DecoratedName& operator=(const DecoratedName& other);

		DecoratedName(DecoratedName&& other);
		DecoratedName& operator=(DecoratedName&& other);
		void SetPrecomputedHash(size_t hash) noexcept {
			PrecomputedHash = hash;
		}
		size_t GetPrecomputedHash() const noexcept {
			return PrecomputedHash;
		}
		std::string to_string() const;
	};
} // namespace USL::FRONTEND

static size_t hash_combine(size_t lhs, size_t rhs) noexcept {
	lhs ^= rhs + 0x9e3779b9 + (lhs << 6) + (lhs >> 2);
	return lhs;
}
 namespace std {
	template<>
	struct hash<USL::FRONTEND::VariableSymbol> {
	public:
		size_t operator()(const USL::FRONTEND::VariableSymbol& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::TypeSymbol> {
	public:
		size_t operator()(const USL::FRONTEND::TypeSymbol& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::FunctionSymbol> {
	public:
		size_t operator()(const USL::FRONTEND::FunctionSymbol& symbol) const noexcept {

			size_t hash = 0;
			for (const auto& paramList : symbol.Parameters) {
				for (const auto& param : paramList) {
					hash = hash_combine(hash, std::hash<std::string>{}(param));
				}
			}
			for (const auto& retTypePart : symbol.ReturnType) {
				hash = hash_combine(hash, std::hash<std::string>{}(retTypePart));
			}
			return hash;
		}
	};
	template<>
	struct hash<USL::FRONTEND::AttributeSymbol> {
	public:
		size_t operator()(const USL::FRONTEND::AttributeSymbol& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::DecoratedName> {
	public:
		size_t operator()(const USL::FRONTEND::DecoratedName& name) const;
	};

	

 }