#include "HEADER/COMPILER/FRONTEND/SYMBOL_TABLE/SYMBOL_TABLE.h"
namespace USL_COMPILER {
	std::unordered_map<std::string, ScopePtr> SymbolTable::scopes{};
	std::stack<ScopePtr> SymbolTable::scopeStack{};
	ScopePtr SymbolTable::currentScope = nullptr;
	SymbolPtr SymbolTable::rootSymbol = nullptr;

	ScopePtr USL_COMPILER::SymbolTable::PushStack(ScopePtr scope)
	{
		scopeStack.push(scope);
		currentScope = scope;
		return scope;
	}

	ScopePtr USL_COMPILER::SymbolTable::PopStack()
	{
		if (scopeStack.empty()) return ScopePtr();
		ScopePtr topScope = ScopePtr(scopeStack.top());
		scopeStack.pop();
		return topScope;
	}

	SymbolPtr USL_COMPILER::SymbolTable::AddSymbolToCurrentScope(SymbolPtr symbol)
	{

		return SymbolPtr();
	}

	ScopePtr USL_COMPILER::SymbolTable::SetScope(ScopePtr Scope)
	{
		if (!Scope) { return nullptr; }

		currentScope = Scope;
		while (!scopeStack.empty()) {
			scopeStack.pop();
		}
		std::stack<ScopePtr> tempStack;
		while (Scope->getParent()) {
			tempStack.push(Scope);
			Scope = Scope->getParent();
		}
		tempStack.push(Scope); // Push the root scope (global scope) last
		while (!tempStack.empty()) {
			scopeStack.push(tempStack.top());
			tempStack.pop();
		}
		return currentScope;
	}



	bool USL_COMPILER::SymbolTable::ResolveSymbol(SymbolPtr Symbol)
	{
		return false;
	}

	bool USL_COMPILER::SymbolTable::ResolveSymbol(ScopePtr Scope, SymbolPtr Symbol)
	{
		return false;
	}
	SymbolPtr SymbolTable::AddRoot(SymbolPtr symbol)
	{
		if (!rootSymbol) {
			rootSymbol = symbol;
			return rootSymbol;
		}
		return nullptr; // Root symbol already exists, cannot add another
	}
	ScopePtr SymbolTable::PopScopeStack()
	{
		if (!scopeStack.empty()) {
			ScopePtr topScope = scopeStack.top();
			scopeStack.pop();
			std::cout << "poped a scope. new length is now " << scopeStack.size() << std::endl;
			currentScope = scopeStack.empty() ? nullptr : scopeStack.top();
			return topScope;
		}
		return nullptr;
	}
	void RecursiveSymbolTableWalker(std::string intendent, const SymbolPtr& Symbol,std::string& outText) {
		if (Symbol->Name() == "NotEmptyNamespace") {
			std::cout << "Found the namespace with namespace within" << std::endl;
		}
		outText += intendent + "Name: " + Symbol->Name() + " Type: " + SymbolTypeToString(Symbol->SymbolType()) + "\n";
		if (!Symbol->HasChildSymbols()) {
			
			return;
		}
		intendent += "  ";

		for (const auto& Symbols : Symbol->GetChildSymbols()) {
			 RecursiveSymbolTableWalker(intendent, Symbols.second,outText);
		}

	}
	std::string SymbolTable::SymbolTableToString()
	{
		auto root = std::static_pointer_cast<NamespaceSymbol>(rootSymbol);
		std::string text = "Name:";
		text += root->Name();
		text += " Type: ";
		text += SymbolTypeToString(root->SymbolType());
		text += "\n";
		std::string intendent = "  ";
		for (const auto& Symbols : root->getSymbols()) {
			 RecursiveSymbolTableWalker(intendent,Symbols.second,text);
		}
		return text;
	}
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

	std::unordered_map<std::string, std::shared_ptr<Symbol>> NamespaceSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void NamespaceSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = std::static_pointer_cast<NamespaceSymbol>(Parent);

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
		default: {
			return "";
			break;
		}
		}
	}

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
		default: {
			return "UNKNOWN";
			break;
		}
		}
	}

	bool VariableSymbol::HasChildSymbols() const
	{
		return false;
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>> VariableSymbol::GetChildSymbols()
	{
		return {};
	}

	void VariableSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;
	}

	bool FunctionSymbol::HasChildSymbols() const
	{
		return !symbols.empty();
	}

	std::unordered_map<std::string, std::shared_ptr<Symbol>> FunctionSymbol::GetChildSymbols()
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

	TypeSymbol::TypeSymbol(const std::string& name, SymbolPtr parrent):Symbol(SymbolType::TYPE, name)
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

	std::unordered_map<std::string, std::shared_ptr<Symbol>> TypeSymbol::GetChildSymbols()
	{
		return symbols;
	}

	void TypeSymbol::SetParent(std::shared_ptr<Symbol> Parent)
	{
		this->parent = Parent;

	}
	FunctionSymbol::FunctionSymbol(const std::string& name, SymbolPtr parent): Symbol(SymbolType::FUNCTION, name)
	{
		// Initialize the function symbol with the given name and parent
	}

	void FunctionSymbol::AddScope(std::shared_ptr<Scope> scope)
	{
		ownScope = scope;
	}
}