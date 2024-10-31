// USL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
import DYNAMIC_ARRAY;
import SMART_POINTER;
import SYMBOL_TABLE;
import SYMBOL;
#include "antlr4-runtime.h"
#include "USLLexer.h"
#include "USLParser.h"
#include "Windows.h"
#include "USLBaseListener.h"
#include "USLBaseVisitor.h"
#include "HEADER/GLOBAL_STORAGE.h"
#include "HEADER/BENCHMARK/BENCHMARK.h"
import std;
struct MyStruct {
    int a;
    double ww;
    const char* www = "wewaeawe";
    ~MyStruct(){}
};
USLParser* parser;







class ForwardDeclarationExtractor : public USLBaseListener {
public:
    std::map<std::string, std::vector<std::string>> namespaceToDeclarations;
    std::vector<std::string> namespaceStack;

    // Enter a namespace and push it to the stack
    void enterNamespaceDeclaration(USLParser::NamespaceDeclarationContext* ctx) override {
        std::string namespaceName = ctx->ID()->getText();
        namespaceStack.push_back(namespaceName);
    }

    // Exit a namespace and pop it from the stack
    void exitNamespaceDeclaration(USLParser::NamespaceDeclarationContext* ctx) override {
        namespaceStack.pop_back();
    }

    // Enter a class declaration and store the forward declaration under the appropriate namespace
    void enterClassDeclaration(USLParser::ClassDeclarationContext* ctx) override {
        std::string className = ctx->ID()->getText();
        std::string forwardDeclaration = "class " + className + ";";

        // Determine the current namespace
        std::string currentNamespace = getCurrentNamespace();

        // Group the forward declaration under the current namespace
        namespaceToDeclarations[currentNamespace].push_back(forwardDeclaration);
    }

    // Helper to get the current namespace, returns an empty string if no namespace is active
    std::string getCurrentNamespace() {
        if (namespaceStack.empty()) {
            return ""; // Global namespace
        }

        std::string fullNamespace;
        for (const auto& ns : namespaceStack) {
            if (!fullNamespace.empty()) {
                fullNamespace += "::";
            }
            fullNamespace += ns;
        }
        return fullNamespace;
    }
};

void printAST(antlr4::tree::ParseTree* tree, const std::string& indent = "", bool last = true) {
    // Print the current node
    std::string nodeText = antlr4::tree::Trees::getNodeText(tree, parser);
    std::cout << indent;

    if (last) {
        std::cout << "|__";  // Indicate this is the last child
    }
    else {
        std::cout << "|--";  // Indicate this is not the last child
    }

    std::cout << nodeText << std::endl;

    // Prepare the indentation for children
    std::string newIndent = indent + (last ? "    " : "|   ");

    // Recursively print children of this node
    for (size_t i = 0; i < tree->children.size(); i++) {
        printAST(tree->children[i], newIndent, i == tree->children.size() - 1);
    }
}





class Type_Base {

};

namespace Reflection {
    class Type_TypeName :public Type_Base {
    public:
        // bytes 0,1:length of type;
        // bytes 2,3,4,5: Type ID;  
        // bytes 6,7: Member_Var_count;
        // bytes 8,Member_Var_count*ver_Length: Member Vars
        //		member var: length 13 bytes
        //		byte 0:protection level and static(highest bit if static rest is rest)
        //		bytes 1,2,3,4: type_Id;
        //		bytes 5,6,7,8: offset. if static address;
        //		bytes 9,10,11,12: name Hash;
        // bytes Member_Var_count*ver_Length+1,+2:Method_Count;
        // bytes +3,+Method_Count*Method_Sig_Length;
        //		Method_Sig:
        //		byte 0:protection level and static(highest bit if static rest is rest)
        //		byte 1,2,3,4: return type id;
        //      byte 5,6,7,8: name hash;
        //      
        // 
        // 
        // 
        //
        char* typeInfo = new char[10] ;
        Type_TypeName() {
            std::cout << "constructed";
        }
          void t(){
             std::cout << "what have i done\n";
         }
        typedef void(Reflection::Type_TypeName::* e)(void);
        typedef void(* ee)(void);

        //constexpr std::uintptr_t functionPointerToInt(e func) {
        //	return reinterpret_cast<std::uintptr_t>(func);
        //}
        //unsigned long long ptr = functionPointerToInt(t);




    };
}







//class SymbolTable {
//public:
//    void addClass(const std::string& className) {
//        classes.insert(className);
//    }
//
//    void addMember(const std::string& className, const std::string& member) {
//        classMembers[className].insert(member);
//    }
//
//    bool isValidMember(const std::string& className, const std::string& member) const {
//        auto it = classMembers.find(className);
//        if (it != classMembers.end()) {
//            return it->second.find(member) != it->second.end();
//        }
//        return false;
//    }
//
//    bool classExists(const std::string& className) const {
//        return classes.find(className) != classes.end();
//    }
//
//private:
//    std::unordered_set<std::string> classes;
//    std::unordered_map<std::string, std::unordered_set<std::string>> classMembers;
//};
//
//
//
//
//
//class MyCustomVisitor : public USLBaseVisitor {
//public:
//    MyCustomVisitor(SymbolTable* symbolTable) : symbolTable(symbolTable) {}
//
//    antlrcpp::Any visitClassDeclaration(USLParser::ClassDeclarationContext* ctx) override {
//        std::string className = ctx->ID()->getText();
//        symbolTable->addClass(className);
//
//        for (auto* member : ctx->classMember()) {
//            if (auto* varDecl = dynamic_cast<USLParser::VarDeclarationContext*>(member)) {
//                std::string memberName = varDecl->ID()->getText();
//                symbolTable->addMember(className, memberName);
//            }
//            else if (auto* funcDecl = dynamic_cast<USLParser::FunctionDeclarationContext*>(member)) {
//                std::string memberName = funcDecl->ID()->getText();
//                symbolTable->addMember(className, memberName);
//            }
//        }
//
//        return visitChildren(ctx);
//    }
//
//private:
//    SymbolTable* symbolTable;
//};
//class SemanticAnalyzer : public USLBaseVisitor {
//public:
//    SemanticAnalyzer(SymbolTable* symbolTable) : symbolTable(symbolTable) {}
//
//    antlrcpp::Any visitMemberAcces(USLParser::MemberAccesContext* ctx) override {
//        std::string objectName = ctx->ID(0)->getText(); // Object or class name
//        std::string memberName = ctx->ID(1)->getText(); // Member name
//
//        std::string className = resolveClassName(objectName); // Implement this function
//
//        if (!symbolTable->isValidMember(className, memberName)) {
//            std::cerr << "Error: Member '" << memberName << "' does not exist in class/struct '" << className << "'." << std::endl;
//        }
//
//        return visitChildren(ctx);
//    }
//
//private:
//    SymbolTable* symbolTable;
//};

//antlrcpp::Any MyCustomVisitor::visitMemberAcces(USLParser::MemberAccesContext* ctx) {
//    std::string objectName = ctx->ID(0)->getText(); // Object or class name
//    std::string memberName = ctx->ID(1)->getText(); // Member name
//
//    // Resolve class name from object name if needed
//    std::string className = resolveClassName(objectName);
//
//    if (!symbolTable.isValidMember(className, memberName)) {
//        std::cerr << "Error: Member '" << memberName << "' does not exist in class/struct '" << className << "'." << std::endl;
//    }
//
//    return visitChildren(ctx);
//}

//void MyCustomVisitor::visitClassDeclaration(USLParser::ClassDeclarationContext* ctx) {
//    std::string className = ctx->ID()->getText();
//    symbolTable.addClass(className);
//
//    for (auto* member : ctx->classMember()) {
//        if (auto* varDecl = dynamic_cast<USLParser::VarDeclarationContext*>(member)) {
//            std::string memberName = varDecl->ID()->getText();
//            symbolTable.addMember(className, memberName);
//        }
//        else if (auto* funcDecl = dynamic_cast<USLParser::FunctionDeclarationContext*>(member)) {
//            std::string memberName = funcDecl->ID()->getText();
//            symbolTable.addMember(className, memberName);
//        }
//    }
//}








class MyCustomVisitor : public USLBaseVisitor {
public:
    MyCustomVisitor(GLOBAL::SymbolTable* symbolTable) : symbolTable(symbolTable) {}

    antlrcpp::Any visitClassDeclaration(USLParser::ClassDeclarationContext* ctx) override {
        std::string className = ctx->ID()->getText();
        symbolTable->addClass(className);
       std ::cout << "Class added: " << className << std::endl;
        for (auto* member : ctx->classMember()) {
            std::cout << member->getText() << "\n";
            if (member->varDeclaration()) {
                std::cout << member << "AAAAAAAAAAAAA\n";

            }
            if (member->functionDeclaration()) {
                std::cout << member << "BBBBBBBBBBBBBBBBBBB\n";

            }

            if (auto* varDecl = member->varDeclaration()) {
                std::string memberName = varDecl->ID()->getText();
                symbolTable->addMember(className, memberName);
                std::cout << "Member added: " << memberName << " to class " << className << std::endl;

            }
            else if (auto* funcDecl = member->functionDeclaration()) {
                std::string memberName = funcDecl->ID()->getText();
                symbolTable->addMember(className, memberName);
                std::cout << "Member added: " << memberName << " to class " << className << std::endl;

            }
        }

        return visitChildren(ctx);
    }

    antlrcpp::Any visitVarDeclaration(USLParser::VarDeclarationContext* ctx) override {
        std::string varName = ctx->ID()->getText();
        std::string varType = ctx->typeSpecifier()->getText();
        symbolTable->addVariable(varName, varType);
        std::cout << "Variable added: " << varName << " with type " << varType << std::endl;

        return visitChildren(ctx);
    }

private:
    GLOBAL::SymbolTable* symbolTable;
};






class SemanticAnalyzer : public USLBaseVisitor {
public:
    SemanticAnalyzer(GLOBAL::SymbolTable* symbolTable) : symbolTable(symbolTable) {}

    antlrcpp::Any visitMemberAcces(USLParser::MemberAccesContext* ctx) override {
        std::string objectName = ctx->ID(0)->getText(); // Object or variable name
        std::string memberName = ctx->ID(1)->getText(); // Member name

        // Resolve the class name from the variable name
        std::string className = resolveClassName(objectName);

        if (!symbolTable->isValidMember(className, memberName)) {
            std::cerr << "Error: Member '" << memberName << "' does not exist in class/struct '" << className << "'." << std::endl;
        }

        return visitChildren(ctx);
    }

private:
    std::string resolveClassName(const std::string& varName) {
        return symbolTable->getVariableType(varName); // Assumes class name is the same as the type
    }

    GLOBAL::SymbolTable* symbolTable;
};




class TEST_CALL {
public:
    int i;
    void R() {
        std::cout << "i is: " << i << "\n";
    }
};

#pragma region ee

class aliasingHELL {
public :
    typedef void(Reflection::Type_TypeName::* e)(void);

    union {
        e prt;
        unsigned long long aslong;
    };
};
template<typename Func>
constexpr std::uintptr_t functionPointerToInt(Func* func) {
    return reinterpret_cast<std::uintptr_t>(func);
}

void* allocandasing(size_t size, unsigned long long ptrval) {
    static void* ptwr = malloc(sizeof(unsigned long long));
    ptwr = new(ptwr) unsigned long long;
    memcpy(ptwr, &ptrval, sizeof(unsigned long long));
    return ptwr;
}

typedef void(Reflection::Type_TypeName::*eee)(void);
void* memvunc (eee erer){

    aliasingHELL hell;
    hell.prt = erer;
    void* ret = allocandasing(sizeof(unsigned long long), hell.aslong);
    return ret;
}
extern "C" void someCfunction() { std::cout << "called form asm\n"; }

//static std::uintptr_t funcPtrAsInt = functionPointerToInt(Reflection::Type_TypeName::t);
//static void* ptr = allocandasing(sizeof(unsigned long long), funcPtrAsInt);
//static void* ptr = Reflection::Type_TypeName::t;//allocandasing(sizeof(unsigned long long), funcPtrAsInt);
static eee ptr = &Reflection::Type_TypeName::t;
//static eee ptr = &Reflection::Type_TypeName::t;
//static void* ptr =  memvunc(&Reflection::Type_TypeName::t);
typedef void(*r)();
extern "C" void JUMPTO(void* address,void* obj_base);
extern "C" void TEST();
#pragma endregion

//template <class T>
//class Ref_Wrapper {
//private:
//    T* Obj;
//        Ref_Wrapper(int i) {
//            Obj = new T();
//    }
//public:
//
//
//   Ref_Wrapper<T> operator new(Ref_Wrapper<T>& other) {
//       return Ref_Wrapper<T>(1);
//
//    }
//};
void TEST_BM() {
    std::cout << "testing with globals\n";
    int i = 1233;
    i = i * 123;
    i = sqrt(i);
}
int main(int argc, char** argv)
{
    t rrr;

    BENCHMARK_CM(t, et, ddd(), 1);
    BENCHMARK_G(eeeeer, TEST_BM(), 1);
    
#pragma region MyRegion 
    //constexpr  std::uintptr_t funcPtrAsIntww= functionPointerToInt(Reflection::Type_TypeName::t);
   // std::cout << (unsigned long long)ptr<<"\n";
   // std::cout << (unsigned long long)Reflection::Type_TypeName::t << "\n";
   // std::cout << (unsigned long long)Reflection::Type_TypeName::t << "\n";
    aliasingHELL hell;
    hell.prt = ptr;
    //eee w =hell.prt;
    //__asm(R"(mov eax, functionPointer
    //    jmp eax)");
    //r func;
    //func =(r) ptr;
    //func();



    TEST();
    TEST_CALL tttttt;
  /*  Ref_Wrapper<TEST_CALL> refwrp();*/

    struct ttcon {
    public:
        typedef void(TEST_CALL::* e)(void);
        union {
            e prt;
            unsigned long long aslong;
        };
    };
    ttcon con;
    con.prt = &TEST_CALL::R;
    tttttt.i = 80085;
    JUMPTO((void*)& tttttt, (void*)con.aslong);
#pragma endregion
    char buffer[MAX_PATH];
    DWORD length = GetModuleFileNameA(NULL, buffer, MAX_PATH);
    std::string path= std::string(buffer, length - 7);
    path = path + std::string(argv[1]);
    std::fstream stream;
    char* arg = argv[1];
    std::ifstream file(path);

    if (!file.is_open()) {
        throw std::runtime_error("Could not open config file.");
    } 
    std::stringstream strm;
    strm<< file.rdbuf();
    std::string content = strm.str();
    stream.open("C:\\Users\\leo08\\source\\repos\\USL\\x64\\Debug\\test.txt");
    antlr4::ANTLRInputStream input(stream);
    USLLexer lexer(&input);
    STORARE::lexer = &lexer;
    antlr4::CommonTokenStream tokens(&lexer);
    STORARE::tokens = &tokens;
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }
    USLParser prser(&tokens);
    STORARE::parser = &prser;
    parser = &prser;
    antlr4::tree::ParseTree* tree = parser->program();
    std::cout << tree->toStringTree(parser) << std::endl;
    GLOBAL::SymbolTable symbolTable;
    STORARE::symbol_table = &symbolTable;


    printAST(tree);

    ForwardDeclarationExtractor extractor;

    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&extractor, tree);



    for (const auto& entry : extractor.namespaceToDeclarations) {
        if (!entry.first.empty()) {
            std::cout << "namespace " << entry.first << " {" << std::endl;
        }

        for (const auto& declaration : entry.second) {
            std::cout << "    " << declaration << std::endl;
        }

        if (!entry.first.empty()) {
            std::cout << "}" << std::endl;
        }
    }
    MyCustomVisitor visitor(&symbolTable);
    visitor.visit(tree);
    SemanticAnalyzer semanticAnalyzer(&symbolTable);
    semanticAnalyzer.visit(tree);
    std::cout << "Hello World!\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
