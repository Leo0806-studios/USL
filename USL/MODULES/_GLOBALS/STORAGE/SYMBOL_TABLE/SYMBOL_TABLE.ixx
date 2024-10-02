#include <corecrt_malloc.h>
export module SYMBOL_TABLE;
import std;
using String = std::string;

class Var {
    std::string Type;

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
    class NODE {
    public:
        enum type{Struct,Class,Namespace,Function,Global} Active;
        String Name;
    };
    class Stack {
         NODE* First;
         long long Lengt;
         long long cap;
        static Stack* stack;
        static Stack* _Backup;
        Stack() {
            First = (GLOBAL::NODE*)malloc(sizeof(NODE) * 10);
        }
        void Resize_and_Cpy() {
            NODE* tmp = (NODE*)malloc((sizeof(NODE) * stack->Lengt)*2);
            memcpy(tmp, stack->First, sizeof(NODE) * stack->Lengt);
            stack->First = tmp;
        }
    public:
        static void Backup() {
            _Backup = new Stack();
            *_Backup = *stack;
            _Backup->First = (GLOBAL::NODE*)malloc(sizeof(NODE) * (stack->Lengt));
            memcpy(_Backup->First, stack->First, sizeof(NODE) * (stack->Lengt));
        }
        static void Rstore() {
            free(stack->First);
            delete stack;
            stack = _Backup;
        }
        static Stack* Create() {
            stack = new Stack();
            return stack;
        }
        static void Push(NODE* node) {
            if (stack->Lengt == stack->cap-2) {
                stack->Resize_and_Cpy();
            }
            stack->First[stack->Lengt] = *node;
            stack->Lengt++;
        }
        static NODE* Pop() {
            NODE* ret= &stack->First[stack->Lengt - 1];
            stack->Lengt--;
            return ret;
        }
        static long long Length() {
            return stack->Lengt;
        }

    };
    class Symbol_Tabel {
    private:
        std::map<std::string, Symbol> Symbols;
        void reccursiveAdd(NODE* node) {
            switch (node->Active) {
            case NODE::Namespace: {

                break;
            }
            case NODE::Struct: {
                break;
            }
            case NODE::Class: {
                break;

            }
            case NODE::Function: {

            }
            case NODE::Global: {

            }
            }

        }
    public:
        enum Kind {
            var,
            func,
            cs,
            ns,
            st
        };
        void Add_Symbol(String Name,Kind kind) {
            std::string list = "";
            Stack::Backup();
            int l = Stack::Length();
            NODE* node;
            node = Stack::Pop();

#pragma region first node


            switch (node->Active) {
            case NODE::Namespace: {

                break;
            }
            case NODE::Struct: {
                break;
            }
            case NODE::Class: {
                break;

            }
            case NODE::Function: {

            }
            case NODE::Global: {
                //Symbols["Global"] = ;

            }
            }
#pragma endregion
            for (int i = 0; i < l; i++) {
                node = Stack::Pop();
              //  reccursiveAdd(node);

                Symbol sym;


            }
            Stack::Rstore();
        }
    };
}
