#pragma once
#ifndef SYMBOLS_H
#define SYMBOLS_H
import std;
namespace llvm {
	class Type;
	class Function;
}
namespace USL_COMPILER {
	class Scope;
	enum class  ScopeType {
		ST_NAMESPACE,
		ST_CLASS,
		ST_FUNCTION,
		ST_ATTRIBUTE
	};
	enum class SymbolType {
		VARIABLE,
		FUNCTION,
		TYPE,
		ENUM,
		NAMESPACE,
		ATTRIBUTE
	};
	extern std::string ScopeTypeToString(ScopeType type);
	extern std::string SymbolTypeToString(SymbolType type);

	/// <summary>
	/// base class or symbols.
	///
	/// </summary>
	class Symbol {
		SymbolType type;
		std::string name;
	protected:
		std::atomic_bool isResolved = false;
		std::atomic_bool is_reading = false;
		std::atomic_bool is_writing = false;
	public:
		explicit constexpr  Symbol(SymbolType type) : type(type) {}
		explicit Symbol(SymbolType type, const std::string& name) : type(type), name(name) {}
		const std::string& Name() const { return name; }
		SymbolType SymbolType() const { return type; }
		Symbol(const Symbol& other);
		Symbol& operator=(const Symbol& other);
		virtual bool HasChildSymbols()const = 0;
		virtual std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() = 0;
		virtual void SetParent(std::shared_ptr<Symbol> parent) = 0;
		virtual std::shared_ptr<Symbol> GetParent()const = 0;
		virtual void addSymbol(std::shared_ptr<Symbol> symbol) {
			throw std::runtime_error("This symbol does not support adding child symbols.");
		}
		virtual ~Symbol() = default;
		virtual bool IsScope() const = 0;
		virtual std::shared_ptr<Scope> GetScope() const = 0;
	};

	using SymbolPtr = std::shared_ptr<Symbol>;

	class VariableSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		SymbolPtr type = nullptr;
	public:
		VariableSymbol() :Symbol(SymbolType::VARIABLE) {}
		VariableSymbol(const std::string& name, SymbolPtr parent = nullptr) : Symbol(SymbolType::VARIABLE, name), parent(parent) {}
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		void SetType(SymbolPtr variableType) { this->type = variableType; }
		SymbolPtr GetVariableType() const { return type; }
		std::shared_ptr<Symbol> GetParent() const override { return parent; }
	};

	class FunctionSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		llvm::Function* llvmFunction = nullptr;
	private:
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
		std::vector<SymbolPtr> parameters = {};
		SymbolPtr returnType;
	public:
		FunctionSymbol() :Symbol(SymbolType::FUNCTION) {}
		explicit	FunctionSymbol(const std::string& name, SymbolPtr parent = nullptr);
		void AddScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		void SetReturnType(SymbolPtr  ptr);
		void AddParameter(SymbolPtr parameter);
		const std::vector<SymbolPtr>& GetParameters() const { return parameters; }



		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;
		void SetParent(std::shared_ptr<Symbol> parent) override;
		void addSymbol(SymbolPtr symbol)override;
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		SymbolPtr GetReturnType();
		std::shared_ptr<Symbol> GetParent() const override { return parent; }

	};

	class TypeSymbol : public Symbol {
	private:
		SymbolPtr parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
		llvm::Type* llvmType = nullptr;

	public:
		TypeSymbol() :Symbol(SymbolType::TYPE) {}
		explicit TypeSymbol(const std::string& name, SymbolPtr parrent = nullptr);
		void AddScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		std::shared_ptr<TypeSymbol> getParent() const { return std::dynamic_pointer_cast<TypeSymbol>(parent); }
		const std::unordered_map<std::string, SymbolPtr>& getSymbols() { return symbols; }
		void addSymbol(SymbolPtr symbol);

		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		void SetLLVMType(llvm::Type* LLVMType) { this->llvmType = LLVMType; }
		std::shared_ptr<Symbol> GetParent() const override { return parent; }

	};


	class NamespaceSymbol :public Symbol {
	private:

		std::shared_ptr<NamespaceSymbol> parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols;
		std::shared_ptr<Scope> ownScope = nullptr;
	public:
		NamespaceSymbol() :Symbol(SymbolType::NAMESPACE) {};
		explicit NamespaceSymbol(const std::string& name, SymbolPtr parrent = nullptr);
		void addScope(std::shared_ptr<Scope> scope);
		std::shared_ptr<Scope> getScope() const { return ownScope; }
		std::shared_ptr<NamespaceSymbol> getParent() const { return parent; }
		const std::unordered_map<std::string, SymbolPtr>& getSymbols();
		void addSymbol(SymbolPtr symbol);
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;

		// Inherited via Symbol
		void SetParent(std::shared_ptr<Symbol> parent) override;

		// Inherited via Symbol
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;

		// Inherited via Symbol
		std::shared_ptr<Symbol> GetParent() const override;
	};
	class AttributeSymbol : public Symbol {
		SymbolPtr parent = nullptr;
		std::unordered_map<std::string, SymbolPtr> symbols = {};
		std::shared_ptr<Scope> ownScope = nullptr;
	public:
		explicit AttributeSymbol(const std::string& name, SymbolPtr parent = nullptr) : Symbol(SymbolType::ATTRIBUTE, name), parent(parent) {}
		// Inherited via Symbol
		bool HasChildSymbols() const override;
		std::unordered_map<std::string, std::shared_ptr<Symbol>>& GetChildSymbols() override;
		void SetParent(std::shared_ptr<Symbol> parent_) override;
		bool IsScope() const override;
		std::shared_ptr<Scope> GetScope() const override;
		std::shared_ptr<Symbol> GetParent() const override { return parent; }

	};


	class Scope {
	private:
		std::shared_ptr<Scope> parent = nullptr;
		SymbolPtr ownSymbol = nullptr;
		ScopeType type;

	public:
		Scope() = default;
		explicit Scope(ScopeType type) : type(type) {}
		explicit Scope(ScopeType type, SymbolPtr ownSymbol) : ownSymbol(ownSymbol), type(type) {}
		explicit Scope(ScopeType type, SymbolPtr ownSymbol, std::shared_ptr<Scope> parent = nullptr) : parent(parent), ownSymbol(ownSymbol), type(type) {}
		SymbolPtr getOwnSymbol() const { return ownSymbol; }
		ScopeType getType() const { return type; }
		std::shared_ptr<Scope> getParent() const { return parent; }
	};
	using ScopePtr = std::shared_ptr<Scope>;
}
#endif // !SYMBOLS_H
