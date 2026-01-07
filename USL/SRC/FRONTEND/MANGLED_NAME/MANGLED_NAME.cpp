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
		return typeName;
	}
	bool VariableSymbolName::operator==(const VariableSymbolName& other) const noexcept
	{
		return this->type == other.type;
	}
	std::string VariableSymbolName::to_string() const {
		return ""; // Placeholder
	}
	VariableSymbolName::VariableSymbolName(const VariableSymbolName& other):type(std::make_unique<DecoratedName>(DecoratedName(*other.type)))
	{
	}
	VariableSymbolName::VariableSymbolName(VariableSymbolName&& other)noexcept :type(std::move(other.type))
	{
	}
	VariableSymbolName& VariableSymbolName::operator=(const VariableSymbolName& other)
	{
		if (this != &other) {
		this->type = std::make_unique<DecoratedName>(*other.type);

		}
		return *this;
	}
	VariableSymbolName& VariableSymbolName::operator=(VariableSymbolName&& other)noexcept
	{
		if(this!=&other){
			this->type = std::move(other.type);
		}
		return *this;
	}

	std::string AttributeSymbolName::to_string() const {
		return ""; // Placeholder
	}
	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const VariableSymbolName& symbolKind)
		: scope(scopes), Specalisations(symbolKind)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const TypeSymbolName& symbolKind) :
		scope(scopes), Specalisations(symbolKind)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const FunctionSymbolName& symbolKind) :
		scope(scopes), Specalisations(symbolKind)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::vector<std::string>& scopes, const AttributeSymbolName& symbolKind) :
		scope(scopes),  Specalisations(symbolKind)
	{
		PrecomputedHash = std::hash<DecoratedName>{}(*this);
	}

	DecoratedName::DecoratedName(const std::string& mangled_name)
	{
		std::vector<std::string> parts = {};
		parts.push_back(mangled_name.substr(0, mangled_name.find_first_of('$', 0ULL)));
	}
	DecoratedName::DecoratedName()
	{
	}
	DecoratedName::~DecoratedName()
	{
	}
	DecoratedName::DecoratedName(const DecoratedName& other) :scope(other.scope), PrecomputedHash(other.PrecomputedHash), Specalisations(other.Specalisations)
	{
		this->scope = other.scope;
	}

	DecoratedName& DecoratedName::operator=(const DecoratedName& other)
	{
		if (this != &other) {

			this->scope = other.scope;
			this->PrecomputedHash = other.PrecomputedHash;
			Specalisations = other.Specalisations;
		}
		return *this;
	}

	DecoratedName::DecoratedName(DecoratedName&& other)noexcept : scope(std::move(other.scope)), Specalisations(std::move(other.Specalisations))
	{
		this->PrecomputedHash = other.PrecomputedHash;
		other.PrecomputedHash = 0;

	}

	DecoratedName& DecoratedName::operator=(DecoratedName&& other)noexcept
	{
		if (this != &other) {

			this->scope = std::move(other.scope);
			this->PrecomputedHash = other.PrecomputedHash;
			other.PrecomputedHash = 0;
			Specalisations = std::move(other.Specalisations);

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
		if (Specalisations != other.Specalisations) {
			return false;
		}
		return true;
	
		
	}

	std::string DecoratedName::to_string() const {
		std::stringstream ss = {};


		for (size_t i = scope.size() ; i >= 1; i--) {
			ss << scope[i-1] << "@";

		}
		constexpr char table[] = {
			'T',
			'F',
			'V',
			'A',

		};
		ss << '@';
		ss << '$';
		ss << table[Specalisations.index()];//TODO : Make this safer by checking the index
		std::visit([&](auto&& arg) {
			ss << arg.to_string();
				   }, Specalisations);


		return ss.str();
	}
} // namespace USL::FRONTEND

namespace std {

	size_t hash<USL::FRONTEND::DecoratedName>::operator()(const USL::FRONTEND::DecoratedName& name) const noexcept
	{
		if (name.PrecomputedHash != 0)
		{
			return name.PrecomputedHash;
		}
		size_t hash = 0;
		for (const std::string& str : name.scope) {
			hash = hash_combine(hash, std::hash<std::string>{}(str));
		}
		hash = hash_combine(hash,
							std::hash<std::variant<USL::FRONTEND::VariableSymbolName,
							USL::FRONTEND::TypeSymbolName, USL::FRONTEND::FunctionSymbolName, USL::FRONTEND::AttributeSymbolName>>{}(name.Specalisations));
		return hash;
	}
	size_t hash<USL::FRONTEND::VariableSymbolName>::operator()(const USL::FRONTEND::VariableSymbolName& symbol) const noexcept {
		size_t hash = 0;
		hash = hash_combine(hash, std::hash<USL::FRONTEND::DecoratedName>{}(*symbol.type.get()));
		return hash;
	}
	size_t hash<std::variant<USL::FRONTEND::VariableSymbolName, USL::FRONTEND::TypeSymbolName, USL::FRONTEND::FunctionSymbolName, USL::FRONTEND::AttributeSymbolName>>::operator()(const std::variant<USL::FRONTEND::VariableSymbolName, USL::FRONTEND::TypeSymbolName, USL::FRONTEND::FunctionSymbolName, USL::FRONTEND::AttributeSymbolName>& variant) const noexcept
	{
		return std::visit([](auto&& arg)->size_t {
			using T = std::decay_t<decltype(arg)>; 
			return std::hash<T>{}(arg);},
						  variant);
	}
	size_t hash<USL::FRONTEND::TypeSymbolName>::operator()(const USL::FRONTEND::TypeSymbolName& symbol) const noexcept
	{
		size_t hash = 0;
		hash = hash_combine(hash, std::hash<std::string>{}(symbol.typeName));
		return hash;
	}
} // namespace std
size_t hash_combine(size_t lhs, size_t rhs) noexcept {
	lhs ^= rhs + 0x9e3779b9 + (lhs << 6) + (lhs >> 2);//NOLINT
	return lhs;
}
