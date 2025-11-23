#include "FRONTEND/MANGLED_NAME/MANGLED_NAME.h"
#if   defined(__clang__)  || defined(__INTELLISENSE__)
#include <vector>
#include <string>
#include <utility>
#include <sstream>
#else
import<string>;
import<vector>;
import <utility>;
import<sstream>;
#endif //  __clang__ || __INTELLISENSE__


namespace USL::FRONTEND 
{
	inline std::string USL::FRONTEND::FunctionSymbol::to_string() const {
		std::stringstream ss = {};
		ss << "$";
		for (const std::string_view param : ReturnType) {
			ss << param << '@';
		}
		ss << '@';
		for (auto& paramList : Parameters) {
			ss << '$';
			for (const std::string_view param : paramList) {
				ss << param << '@';
			}
			ss << '@';
		}
		ss << '@';
		return ss.str();
	}
	inline std::string TypeSymbol::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	inline std::string VariableSymbol::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	inline std::string AttributeSymbol::to_string() const {
		// Implement the logic to convert the AttributeSymbol to its string representation
		return ""; // Placeholder
	}
	DecoratedName::DecoratedName(const std::string& mangled_name)
	{
		std::vector<std::string> parts = {};
		parts.push_back(mangled_name.substr(0, mangled_name.find_first_of('$')));
	}
	inline DecoratedName::DecoratedName(const DecoratedName& other) :scope(other.scope), PrecomputedHash(other.PrecomputedHash), symbol_type(other.symbol_type)
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

	inline DecoratedName::DecoratedName(DecoratedName&& other) : scope(std::move(other.scope)),symbol_type(other.symbol_type)
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

	inline std::string DecoratedName::to_string() const {
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
		if(name.PrecomputedHash != 0)
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
			std::hash<USL::FRONTEND::VariableSymbol> hasher{};
			hash = hash_combine(hash, hasher.operator()((name.variable_symbol)));
			break;
		}
		case SymbolType::type: {
			std::hash<USL::FRONTEND::TypeSymbol>hasher{};
			hash = hash_combine(hash, hasher.operator()(name.type_symbol));
			break;
		}
		case SymbolType::function: {
			std::hash<USL::FRONTEND::FunctionSymbol>hasher{};
			hash = hash_combine(hash, hasher.operator() (name.function_symbol));
			break;
		}
		case SymbolType::attribute: {
			std::hash<USL::FRONTEND::AttributeSymbol>hasher{};
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