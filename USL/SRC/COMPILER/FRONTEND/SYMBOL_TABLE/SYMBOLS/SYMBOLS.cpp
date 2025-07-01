#include "HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOLS/SYMBOLS.h"
namespace USL_COMPILER {


	std::string SymbolTypeToString(SymbolType type)
	{
		switch (type) {
		case SymbolType::ENUM: {
			return "ENUM";
			break;
		}
		case SymbolType::FUNCTION: {
			return "FUNCTION";
			break;
		}
		case SymbolType::VARIABLE: {
			return "VARIABLE";
			break;
		}
		case SymbolType::NAMESPACE: {
			return "NAMESPACE";
			break;
		}
		case SymbolType::TYPE: {
			return "TYPE";
			break;
		}
		case SymbolType::ATTRIBUTE: {
			return "ATTRIBUTE";
			break;
		}
		default: {
			return "UNKNOWN";
			break;
		}
		}
	}
	std::string ScopeTypeToString(ScopeType type)
	{
		switch (type) {
		case ScopeType::ST_CLASS: {
			return "ST_CLASS";
			break;
		}
		case ScopeType::ST_FUNCTION: {
			return "ST_FUNCTION";
			break;
		}
		case ScopeType::ST_NAMESPACE: {
			return "ST_NAMESPACE";
			break;
		}
		case ScopeType::ST_ATTRIBUTE: {
			return "ST_STTRIBUTE";
			break;
		
		}
		default: {
			return "";
			break;
		}
		}
	}

#pragma region Symbol
	Symbol::Symbol(const Symbol& other) :
		type(other.type),
		name(other.name),
		isResolved(other.isResolved.load()),
		is_reading(other.is_reading.load()),
		is_writing(other.is_writing.load()) {
	}
	Symbol& Symbol::operator=(const Symbol& other)
	{
		if (this != &other) {
			type = other.type;
			name = other.name;
			isResolved.store(other.isResolved.load());
			is_reading.store(other.is_reading.load());
			is_writing.store(other.is_writing.load());
		}
		return *this;
	}
#pragma endregion



#pragma region NamespaceSymbol
	NamespaceSymbol::NamespaceSymbol(const std::string& name, SymbolPtr parrent) : Symbol(SymbolType::NAMESPACE, name) {

	}
	void NamespaceSymbol::addScope(std::shared_ptr<Scope> scope) {
		ownScope = scope;

	}
	const std::unordered_map<std::string, SymbolPtr>& NamespaceSymbol::getSymbols() {
		return symbols;
	}

	void NamespaceSymbol::addSymbol(SymbolPtr symbol) {
		symbols[symbol->Name()] = symbol;
	}

	bool NamespaceSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& NamespaceSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void NamespaceSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = std::static_pointer_cast<NamespaceSymbol>(Parent);

	}
	bool NamespaceSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> NamespaceSymbol::GetScope() const
	{
		return ownScope;
	}
	std::shared_ptr<Symbol> NamespaceSymbol::GetParent() const
	{
		return parent;
	}
#pragma endregion


#pragma region TypeSymbol
	TypeSymbol::TypeSymbol(const std::string& name, SymbolPtr parrent) :Symbol(SymbolType::TYPE, name)
	{
	}

	void TypeSymbol::AddScope(std::shared_ptr<Scope> scope)
	{
		ownScope = scope;
	}

	void TypeSymbol::addSymbol(SymbolPtr symbol) { symbols[symbol->Name()] = symbol; }

	bool TypeSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& TypeSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void TypeSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;

	}
	bool TypeSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> TypeSymbol::GetScope() const
	{
		return ownScope;
	}
#pragma endregion



#pragma region FunctionSymbol
	bool FunctionSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& FunctionSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void FunctionSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;

	}

	void FunctionSymbol::addSymbol(SymbolPtr symbol)
	{
		symbols[symbol->Name()] = symbol;
	}
	void FunctionSymbol::SetReturnType(SymbolPtr ptr)
	{
		this->returnType = ptr;
	}
	void FunctionSymbol::AddParameter(SymbolPtr parameter)
	{
		if (parameter) {
			parameters.push_back(parameter);
		}
		else {
			throw std::invalid_argument("Parameter cannot be null");
		}
	}
	bool FunctionSymbol::IsScope() const
	{
		return true;
	}
	std::shared_ptr<Scope> FunctionSymbol::GetScope() const
	{
		return ownScope;
	}
	SymbolPtr FunctionSymbol::GetReturnType()
	{
		return returnType;
	}
	FunctionSymbol::FunctionSymbol(const std::string& name, SymbolPtr parent) : Symbol(SymbolType::FUNCTION, name)
	{
		// Initialize the function symbol with the given name and parent
	}

	void FunctionSymbol::AddScope(std::shared_ptr<Scope> scope)
	{
		ownScope = scope;
	}
#pragma endregion


#pragma region VariableSymbol
	bool VariableSymbol::HasChildSymbols() const
	{
		return false;
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& VariableSymbol::GetChildSymbols()
	{
		static std::unordered_map<std::string, std::shared_ptr<Symbol>> emptyMap;
		return emptyMap;
	}

	void VariableSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;
	}
	bool VariableSymbol::IsScope() const
	{
		return false;
	}
	std::shared_ptr<Scope> VariableSymbol::GetScope() const
	{
		return nullptr;
	}
#pragma endregion


#pragma region Attribute_Symbol

	bool AttributeSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>>& AttributeSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void AttributeSymbol::SetParent(std::shared_ptr<Symbol> parent_)
	{
	}

	bool AttributeSymbol::IsScope() const
	{
		return true;
	}

	std::shared_ptr<Scope> AttributeSymbol::GetScope() const
	{
		return ownScope;
	}
#pragma endregion


}