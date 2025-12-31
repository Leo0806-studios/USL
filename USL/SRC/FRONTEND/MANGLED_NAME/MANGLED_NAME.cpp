#if   defined(__clang__)  || defined(__INTELLISENSE__)|| defined(TESTS_BUILD)
#include "FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#else
import<string>;
import<vector>;
import <utility>;
import<sstream>;
import <FRONTEND/MANGLED_NAME/MANGLED_NAME.h>;
#endif //  __clang__ || __INTELLISENSE__

namespace USL::FRONTEND
{
	std::string USL::FRONTEND::FunctionSymbolName::to_string() const {
		std::stringstream returnStream = {};
		returnStream << "$";
		for (const std::string_view param : ReturnType) {
			returnStream << param << '@';
		}

		returnStream << '@';
		for (const auto& paramList : Parameters) {
			returnStream << '$';
			for (const std::string_view param : paramList) {
				returnStream << param << '@';
			}
			returnStream << '@';
		}
		returnStream << '@';
		return returnStream.str();
	}
	std::string TypeSymbolName::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	std::string VariableSymbolName::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	std::string AttributeSymbolName::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const VariableSymbolName& symbolKind)
		: scope(scopes), variable_symbol(symbolKind), symbol_type(SymbolType::variable)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const TypeSymbolName& symbolKind) :
		scope(scopes), type_symbol(symbolKind), symbol_type(SymbolType::type)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const FunctionSymbolName& symbolKind) :
		scope(scopes), function_symbol(symbolKind), symbol_type(SymbolType::function)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const AttributeSymbolName& symbolKind) :
		scope(scopes),  attribute_symbol(symbolKind),symbol_type(SymbolType::attribute)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::string& mangled_name) :function_symbol()
	{
		std::vector<std::string> parts = {};
		parts.push_back(mangled_name.substr(0, mangled_name.find_first_of('$', 0ULL)));
	}
	DecoratedName::DecoratedName(const DecoratedName& other) :scope(other.scope), PrecomputedHash(other.PrecomputedHash), symbol_type(other.symbol_type)
	{
		switch (symbol_type)
		{
			using enum USL::FRONTEND::SymbolType;
		case SymbolType::variable: {
			variable_symbol = other.variable_symbol;
			break;
		}
		case SymbolType::type: {
			type_symbol = other.type_symbol;
			break;
		}
		case SymbolType::function: {
			function_symbol = other.function_symbol;
			break;
		}
		case SymbolType::attribute: {
			attribute_symbol = other.attribute_symbol;
			break;
		}
		case  SymbolType::invalid_type: {
			[[fallthrough]];
		}
		[[unlikely]] default:
			throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for copying");
			break;
		}

		this->scope = other.scope;
	}

	DecoratedName& DecoratedName::operator=(const DecoratedName& other)
	{
		if (this != &other) {
			this->symbol_type = other.symbol_type;

			this->scope = other.scope;
			this->PrecomputedHash = other.PrecomputedHash;
			switch (symbol_type)
			{
				using enum USL::FRONTEND::SymbolType;
			case SymbolType::variable: {
				variable_symbol = other.variable_symbol;
				break;
			}
			case SymbolType::type: {
				type_symbol = other.type_symbol;
				break;
			}
			case SymbolType::function: {
				function_symbol = other.function_symbol;
				break;
			}
			case SymbolType::attribute: {
				attribute_symbol = other.attribute_symbol;
				break;
			}
			case  SymbolType::invalid_type: {
				[[fallthrough]];
			}
			[[unlikely]] default:
				throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for assignment");
				break;
			}
		}
		return *this;
	}

	DecoratedName::DecoratedName(DecoratedName&& other) : scope(std::move(other.scope)), symbol_type(other.symbol_type)
	{
		this->PrecomputedHash = other.PrecomputedHash;
		other.PrecomputedHash = 0;
		switch (symbol_type)
		{
			using enum USL::FRONTEND::SymbolType;
		case SymbolType::variable: {
			variable_symbol = std::move(other.variable_symbol);
			break;
		}
		case SymbolType::type: {
			type_symbol = std::move(other.type_symbol);
			break;
		}
		case SymbolType::function: {
			function_symbol = std::move(other.function_symbol);
			break;
		}
		case SymbolType::attribute: {
			attribute_symbol = std::move(other.attribute_symbol);
			break;
		}
		case  SymbolType::invalid_type: {
			[[fallthrough]];
		}
		[[unlikely]] default:
			throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for moving");
			break;
		}
	}

	DecoratedName& DecoratedName::operator=(DecoratedName&& other)
	{
		if (this != &other) {
			this->symbol_type = other.symbol_type;

			this->scope = std::move(other.scope);
			this->PrecomputedHash = other.PrecomputedHash;
			other.PrecomputedHash = 0;
			switch (symbol_type)
			{
				using enum USL::FRONTEND::SymbolType;
			case SymbolType::variable: {
				variable_symbol = std::move(other.variable_symbol);
				break;
			}
			case SymbolType::type: {
				type_symbol = std::move(other.type_symbol);
				break;
			}
			case SymbolType::function: {
				function_symbol = std::move(other.function_symbol);
				break;
			}
			case SymbolType::attribute: {
				attribute_symbol = std::move(other.attribute_symbol);
				break;
			}
			case  SymbolType::invalid_type: {
				[[fallthrough]];
			}
			[[unlikely]] default:
				throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for moving assignment");
				break;
			}
		}
		return *this;
	}

	bool DecoratedName::operator==(const DecoratedName& other) const noexcept
	{
		if (this->PrecomputedHash != 0 && other.PrecomputedHash != 0)
		{
			if (this->PrecomputedHash == other.PrecomputedHash)
			{
				return  true;
			}
		}
		if (this->scope != other.scope)
		{
			return false;
		}

		if (this->symbol_type != other.symbol_type)
		{
			return false;
		}
		else {
			switch (symbol_type)
			{
				using enum USL::FRONTEND::SymbolType;
			case SymbolType::variable: {
				return this->variable_symbol == other.variable_symbol;
				break;
			}
			case SymbolType::type: {
				return this->type_symbol == other.type_symbol;
				break;
			}
			case SymbolType::function: {
				return this->function_symbol == other.function_symbol;
				break;
			}
			case SymbolType::attribute: {
				return this->attribute_symbol == other.attribute_symbol;
				break;
			}
			case  SymbolType::invalid_type: {
				[[fallthrough]];
			}
			[[unlikely]] default:
				return false;
			}
		}
	}

	std::string DecoratedName::to_string() const {
		std::stringstream ss = {};

		for (const std::string& str : scope) {
			ss << str << "@";
		}
		ss << '@';
		ss << '$';
		ss << std::to_underlying(symbol_type);

		switch (symbol_type)
		{
			using enum USL::FRONTEND::SymbolType;
			using SymbolType = USL::FRONTEND::SymbolType;
		case SymbolType::variable: {
			ss << variable_symbol.to_string();
			break;
		}
		case SymbolType::type: {
			ss << type_symbol.to_string();
			break;
		}
		case SymbolType::function: {
			ss << function_symbol.to_string();
			break;
		}
		case SymbolType::attribute: {
			ss << attribute_symbol.to_string();
			break;
		}
		case  SymbolType::invalid_type: {
			[[fallthrough]];
		}
		[[unlikely]] default:
			throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for hashing");
			break;
		}

		return ss.str();
	}
} // namespace USL::FRONTEND

namespace std {
	size_t hash<USL::FRONTEND::DecoratedName>::operator()(const USL::FRONTEND::DecoratedName& name) const
	{
		if (name.PrecomputedHash != 0)
		{
			return name.PrecomputedHash;
		}
		size_t hash = 0;
		for (const std::string& str : name.scope) {
			hash = hash_combine(hash, std::hash<std::string>{}(str));
		}
		hash = hash_combine(hash, std::hash<char>{}(static_cast<char>(name.symbol_type)));
		using SymbolType = USL::FRONTEND::SymbolType;
		switch (name.symbol_type)
		{
		case SymbolType::variable: {
			const std::hash<USL::FRONTEND::VariableSymbolName> hasher{};
			hash = hash_combine(hash, hasher.operator()((name.variable_symbol)));
			break;
		}
		case SymbolType::type: {
			const std::hash<USL::FRONTEND::TypeSymbolName>hasher{};
			hash = hash_combine(hash, hasher.operator()(name.type_symbol));
			break;
		}
		case SymbolType::function: {
			const std::hash<USL::FRONTEND::FunctionSymbolName>hasher{};
			hash = hash_combine(hash, hasher.operator() (name.function_symbol));
			break;
		}
		case SymbolType::attribute: {
			const std::hash<USL::FRONTEND::AttributeSymbolName>hasher{};
			hash = hash_combine(hash, hasher.operator()(name.attribute_symbol));
			break;
		}
		case  SymbolType::invalid_type: {
			[[fallthrough]];
		}
		[[unlikely]] default:
			throw USL::FRONTEND::InvalidDecoratedNameException("Invalid SymbolType for hashing");
			break;
		}
		return hash;
	}
} // namespace std

size_t hash_combine(size_t lhs, size_t rhs) noexcept {
	lhs ^= rhs + 0x9e3779b9 + (lhs << 6) + (lhs >> 2);//NOLINT
	return lhs;
}