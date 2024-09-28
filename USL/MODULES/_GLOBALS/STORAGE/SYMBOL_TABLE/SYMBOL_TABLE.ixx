export module SYMBOL_TABLE;
import std;
using String = std::string;

class Var {

};
class Enum {

};
class Class;
class Struct;
class Function {
    std::map<String, Struct> Structs;
    std::map<std::string, Class> Classes;
    std::map<std::string, Function> Functions;
    std::map<String, Enum> Enums;
    std::map<std::string, Var> Vars;
};
class Class {
    std::map<String, Struct> Structs;
    std::map<std::string, Class> Classes;
    std::map<std::string, Function> Functions;
    std::map<String, Enum> Enums;
    std::map<std::string, Var> Vars;
};
class Struct {
    std::map<String, Struct> Structs;
    std::map<std::string, Class> Classes;
    std::map<std::string, Function> Functions;
    std::map<String, Enum> Enums;
    std::map<std::string, Var> Vars;
};
class Namespace {
    std::map<String, Struct> Structs;
    std::map<std::string, Class> Classes;
    std::map<std::string, Function> Functions;
    std::map<String, Enum> Enums;
    std::map<std::string, Var> Vars;
};
class Symbol {
    enum active{NS,ST,FN,EM,VR} ActiveMember;
    union Sym{
        Namespace NS;
        Struct ST;
        Class CS;
        Function FN;
        Enum EM;
        Var VR;
    };
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
        std::map<std::string, Symbol> Symbols;
    };
}
