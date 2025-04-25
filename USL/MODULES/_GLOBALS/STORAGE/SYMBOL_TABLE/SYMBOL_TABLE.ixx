module;
#include <corecrt_malloc.h>
#include "string"
export module SYMBOL_TABLE;
import std;
using String = std::string;
enum access { Public, Private, Protected };
enum funcType { Constructor, Destructor, MemberFunction, StaticFunction, VirtualFunction, PureVirtualFunction };
enum varType{Static,member};
class MemberVar {
public:
	Var var;
	access Access;
	varType Type;

};
class Var {
	std::string Type;
	std::string Name;
	unsigned long long typeID;

};
class Parameter {
public:
	unsigned long long typeID;
	std::string Type;
	std::string Name;
};
class memberFunction {
public:
	Function function;
	access Access;
	funcType Type;
	
};
class memmberEnum {
public:
	Enum Enum;
	access Access;
};
class Enum {
public:
	unsigned long long typeID;
	std::string Type;
	std::map<std::string, int> Values;
};
class Class;
class Struct;
class Function {
	public:
		unsigned long long returnTypeID;
		std::string returnType;
		std::map<std::string, Parameter> Parameters;
		std::string name;
  //  std::map<String, Struct> Structs;
  //  std::map<std::string, Class> Classes;
  //  std::map<std::string, Function> Functions;
  //  std::map<String, Enum> Enums;
	//std::map<std::string, Var> Vars;
};
class Class {
public:
	std::string Type;
	unsigned long long typeID;
	std::map<std::string, MemberVar> Vars;
	std::map<std::string, memberFunction> Functions;
	std::map<String, memmberEnum> Enums;
  //  std::map<String, Struct> Structs;
  //  std::map<std::string, Class> Classes;
	//std::map<std::string, Function> Functions;
   // std::map<String, Enum> Enums;
   // std::map<std::string, Var> Vars;
};
class Struct {
  //  std::map<String, Struct> Structs;
	//std::map<std::string, Class> Classes;
public:
	std::string Type;
	unsigned long long typeID;
	std::map<std::string, MemberVar> Vars;
	std::map<std::string, memberFunction> Functions;
	std::map<String, memmberEnum> Enums;
};
class Namespace {
public:
	std::string Name;
	unsigned long long namespaceID;
	std::map<String, Struct> Structs;
	std::map<std::string, Class> Classes;
   // std::map<std::string, Function> Functions;
	std::map<String, Enum> Enums;
	//std::map<std::string, Var> Vars;
};
class Symbol {
public:
	enum active { NS, ST, FN, EM, VR };
private:
	active ActiveMember;
public:
	union Sym{
		Namespace NS;
		Struct ST;
		Class CS;
		Function FN;
		Enum EM;
		Var VR;
	} sym;
	active getActive() {
		return ActiveMember;
	}
	Sym* getSym() {
		return &sym;
	}
};
export namespace GLOBAL {
	class SymbolTable {
	public:
		void addClass(const std::string& className) {
			classes.insert(className);
		}

		void addMember(const std::string& className, const std::string& member) {
			classMembers[className].insert(member);
		}

		void addVariable(const std::string& varName, const std::string& type) {
			variableTypes[varName] = type;
		}

		std::string getVariableType(const std::string& varName) const {
			auto it = variableTypes.find(varName);
			return (it != variableTypes.end()) ? it->second : "";
		}

		bool isValidMember(const std::string& className, const std::string& member) const {
			auto it = classMembers.find(className);
			if (it != classMembers.end()) {
				return it->second.find(member) != it->second.end();
			}
			return false;
		}

		bool classExists(const std::string& className) const {
			return classes.find(className) != classes.end();
		}

	private:
		std::unordered_set<std::string> classes;
		std::unordered_map<std::string, std::unordered_set<std::string>> classMembers;
		std::unordered_map<std::string, std::string> variableTypes;
	};

	class Symbol_Tabel {
	private:
		std::map<unsigned long long, std::string> typeids;
		std::map<unsigned long long, std::string> namespaceIDs;
		std::map<std::string, Namespace> symbols;
		std::map<std::string, Var>localSymbols;
		Namespace* currentNamespace;
		union { Struct* current_struct; Class* currnet_class; }current_classorstruct;
		enum currentType { _Struct, _Class } currentType;
	public:
		void tryAddNamespace(const std::string& name) {
			if (symbols.find(name) == symbols.end()) {
				Namespace s;
				if (!symbols.contains(name) ) {
					symbols[name] = s;
					currentNamespace = &symbols[name];
				}
			}
		}
		void tryAddStruct(const std::string& name) {
			if (currentNamespace != nullptr) {
				if (currentNamespace->Structs.find(name) == currentNamespace->Structs.end()) {
					Struct s;
					if (!currentNamespace->Structs.contains(name)) {
						currentNamespace->Structs[name] = s;
						current_classorstruct.current_struct = &currentNamespace->Structs[name];
						currentType = _Struct;
					}
				}
			}
		}
		void tryAddClass(const std::string& name) {
			if (currentNamespace != nullptr) {
				if (currentNamespace->Classes.find(name) == currentNamespace->Classes.end()) {
					Class s;
					if (!currentNamespace->Classes.contains(name)) {
						currentNamespace->Classes[name] = s;
						current_classorstruct.currnet_class = &currentNamespace->Classes[name];
						currentType = _Class;
					}
				}
			}
		}
		void tryAddFunction(const std::string& name) {
			if (currentNamespace != nullptr) {
				if (currentType == _Struct) {
					if (current_classorstruct.current_struct->Functions.find(name) == current_classorstruct.current_struct->Functions.end()) {
						memberFunction s;
						if (!current_classorstruct.current_struct->Functions.contains(name)) {
							current_classorstruct.current_struct->Functions[name] = s;
							s.function.name = name;
						}
					}
				}
				else if (currentType == _Class) {
					if (current_classorstruct.currnet_class->Functions.find(name) == current_classorstruct.currnet_class->Functions.end()) {
						memberFunction s;
						if (!current_classorstruct.currnet_class->Functions.contains(name)) {
							current_classorstruct.currnet_class->Functions[name] = s;
							s.function.name = name;
						}
					}
				}
			}
		}

	};
}
