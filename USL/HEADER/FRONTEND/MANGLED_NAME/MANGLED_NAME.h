#pragma once
#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include <algorithm>
#include <exception>
#include <memory>
#include <string>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>
#else
import <algorithm>;
import <exception>;
import <memory>;
import<string>;
import <type_traits>;
import <utility>;
import <variant>;
import<vector>;
#endif //  __clang__ || __INTELLISENSE__
namespace USL::FRONTEND
{
	class DecoratedName;
	class InvalidDecoratedNameException : public std::exception {
		std::string message;
	public:
		InvalidDecoratedNameException() = default;
		explicit InvalidDecoratedNameException(std::string msg) : message(std::move(msg)) {}
		[[nodiscard]] const char* what() const noexcept override {
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
		friend struct std::hash<VariableSymbolName>;
		std::unique_ptr<DecoratedName> type;
	public:
		bool operator==(const VariableSymbolName& other) const noexcept;
		VariableSymbolName() = default;
		[[nodiscard]] std::string to_string() const;
		VariableSymbolName(const VariableSymbolName& other);
		VariableSymbolName(VariableSymbolName&& other)noexcept;
		VariableSymbolName& operator=(const VariableSymbolName& other);
		VariableSymbolName& operator=(VariableSymbolName&& other)noexcept;
		~VariableSymbolName() = default;
	};
	class TypeSymbolName {
		friend struct std::hash<TypeSymbolName>;
		std::string typeName;
	public:
		[[nodiscard]] explicit TypeSymbolName(std::string name) :typeName(std::move(name)) {}
		bool operator==(const TypeSymbolName& other) const noexcept = default;
		[[nodiscard]] std::string to_string() const;
	};
	class FunctionSymbolName {
		friend struct std::hash<FunctionSymbolName>;
		using ScopeList = std::vector<std::string >;
		std::vector<ScopeList> Parameters;
		ScopeList ReturnType;
	public:
		bool operator==(const FunctionSymbolName& other) const noexcept = default;
		[[nodiscard]] std::string to_string() const;
	};
	class AttributeSymbolName {
	public:
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
		std::vector<std::string> scope;
		size_t PrecomputedHash = 0;
		std::variant< VariableSymbolName, TypeSymbolName, FunctionSymbolName, AttributeSymbolName> Specalisations;

	public:
		DecoratedName();
		~DecoratedName();
		DecoratedName(const DecoratedName& other);
		DecoratedName& operator=(const DecoratedName& other);
		DecoratedName(DecoratedName&& other)noexcept;
		DecoratedName& operator=(DecoratedName&& other)noexcept;

		/// <summary>
		/// scopes excpects the global scope to be the laast element in the vector
		/// </summary>
		/// <param name="scopes">The scopes.</param>
		/// <param name="symbolKind">Kind of the symbol.</param>
		DecoratedName(const std::vector<std::string>& scopes, const VariableSymbolName& symbolKind);

		/// <summary>
		/// scopes excpects the global scope to be the laast element in the vector
		/// </summary>
		/// <param name="scopes">The scopes.</param>
		/// <param name="symbolKind">Kind of the symbol.</param>
		DecoratedName(const std::vector<std::string>& scopes, const TypeSymbolName& symbolKind);

		/// scopes excpects the global scope to be the laast element in the vector
		DecoratedName(const std::vector<std::string>& scopes, const FunctionSymbolName& symbolKind);

		/// scopes excpects the global scope to be the laast element in the vector
		DecoratedName(const std::vector<std::string>& scopes, const AttributeSymbolName& symbolKind);

		explicit DecoratedName(const std::string& mangled_name);
		bool operator==(const DecoratedName& other) const noexcept;
		void SetPrecomputedHash(size_t hash) noexcept {
			PrecomputedHash = hash;
		}
		[[nodiscard]] size_t GetPrecomputedHash() const noexcept {
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
		size_t operator()(const USL::FRONTEND::VariableSymbolName& symbol) const noexcept;
	};
	template<>
	struct hash<USL::FRONTEND::TypeSymbolName> {
	public:
		size_t operator()(const USL::FRONTEND::TypeSymbolName& symbol) const noexcept;
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
		size_t operator()(const USL::FRONTEND::DecoratedName& name) const noexcept;
	};

	template<>
	struct hash <std::variant<USL::FRONTEND::VariableSymbolName, USL::FRONTEND::TypeSymbolName, USL::FRONTEND::FunctionSymbolName, USL::FRONTEND::AttributeSymbolName>> {
	public:
		size_t operator()(const std::variant<USL::FRONTEND::VariableSymbolName, USL::FRONTEND::TypeSymbolName, USL::FRONTEND::FunctionSymbolName, USL::FRONTEND::AttributeSymbolName>& variant)const noexcept;
	};
}//namespace std