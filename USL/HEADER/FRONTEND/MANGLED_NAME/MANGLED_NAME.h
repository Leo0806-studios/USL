#pragma once
#include "MACROS.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <exception>
#include <type_traits>
#else
import<vector>;
import<string>;
import <utility>;
import <algorithm>;
import <exception>;
import <type_traits>;
	#endif //  __clang__ || __INTELLISENSE__
namespace USL::FRONTEND
{
	class InvalidDecoratedNameException : public std::exception {
		std::string message ;
	public:
		InvalidDecoratedNameException() = default;
		explicit InvalidDecoratedNameException(const std::string& msg) : message(msg) {}
		[[nodiscard]]const char* what() const noexcept override {
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
	class VariableSymbolName {
	public:
		RuleOfFive(VariableSymbolName)
			bool operator==(const VariableSymbolName& other) const noexcept = default;
		[[nodiscard]]std::string to_string() const;
	};
	class TypeSymbolName {
	public:
		RuleOfFive(TypeSymbolName)
			bool operator==(const TypeSymbolName& other) const noexcept = default;
			[[nodiscard]]std::string to_string() const;
	};
	class FunctionSymbolName {
		friend struct std::hash<FunctionSymbolName>;
		using ScopeList = std::vector<std::string >;
		std::vector<ScopeList> Parameters ;
		ScopeList ReturnType ;
	public:
		RuleOfFive(FunctionSymbolName)
			bool operator==(const FunctionSymbolName& other) const noexcept = default;
		[[nodiscard]] std::string to_string() const;
	};
	class AttributeSymbolName {
	public:
		RuleOfFive(AttributeSymbolName)
			bool operator==(const AttributeSymbolName& other) const noexcept = default;
		[[nodiscard]] std::string to_string() const;
	};
	/// <summary>
	/// represents the decorated name of a symbol in the USL language.
	/// the internally cached hash is used to speed up lookups in the symbol table.
	/// it is not included in any further hashing operations.
	/// </summary>
	class DecoratedName {
		friend struct std::hash<DecoratedName>;
		std::vector<std::string> scope ;
		size_t PrecomputedHash = 0;
		union {
			VariableSymbolName variable_symbol;
			TypeSymbolName type_symbol;
			FunctionSymbolName function_symbol;
			AttributeSymbolName attribute_symbol;
		};
		SymbolType symbol_type = SymbolType::invalid_type;

	public:
		DecoratedName() : function_symbol{} {}
		~DecoratedName() { return; }
		DecoratedName(const std::vector<std::string>& scopes, const VariableSymbolName& symbolKind);
		DecoratedName(const std::vector<std::string>& scopes, const TypeSymbolName& symbolKind);
		DecoratedName(const std::vector<std::string>& scopes, const FunctionSymbolName& symbolKind);
		DecoratedName(const std::vector<std::string>& scopes, const AttributeSymbolName& symbolKind);

		explicit DecoratedName(const std::string& mangled_name);
		DecoratedName(const DecoratedName& other);
		DecoratedName& operator=(const DecoratedName& other);

		DecoratedName(DecoratedName&& other);
		DecoratedName& operator=(DecoratedName&& other);
		bool operator==(const DecoratedName& other) const noexcept;
		void SetPrecomputedHash(size_t hash) noexcept {
			PrecomputedHash = hash;
		}
		[[nodiscard]]size_t GetPrecomputedHash() const noexcept {
			return PrecomputedHash;
		}
		[[nodiscard]] std::string to_string() const;
	};
} // namespace USL::FRONTEND


	size_t hash_combine(size_t lhs, size_t rhs) noexcept;

 namespace std {
	template<>
	struct hash<USL::FRONTEND::VariableSymbolName> {
	public:
		size_t operator()(const USL::FRONTEND::VariableSymbolName& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::TypeSymbolName> {
	public:
		size_t operator()(const USL::FRONTEND::TypeSymbolName& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::FunctionSymbolName> {
	public:
		size_t operator()(const USL::FRONTEND::FunctionSymbolName& symbol) const noexcept {

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
	struct hash<USL::FRONTEND::AttributeSymbolName> {
	public:
		size_t operator()(const USL::FRONTEND::AttributeSymbolName& symbol) const noexcept {

			return 0;
		}
	};
	template<>
	struct hash<USL::FRONTEND::DecoratedName> {
	public:
		size_t operator()(const USL::FRONTEND::DecoratedName& name) const;
	};

	

 }