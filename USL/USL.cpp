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
import std;
struct MyStruct {
    int a;
    double ww;
    const char* www = "wewaeawe";
    ~MyStruct(){}
};
USLParser* parser;
class t {
public:
    int i;
    t(){}
    t(t&& other) {
        this->i = other.i;
    }
    t(const t& other) {
        this->i = other.i;
    }
    t operator=(const t& other) {
      
        return other;
    }
    t operator=( t& other) {

        return other;
    }
};






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



int main(int argc, char** argv)
{

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

    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }
    USLParser prser(&tokens);
    parser = &prser;
    antlr4::tree::ParseTree* tree = parser->program();
    std::cout << tree->toStringTree(parser) << std::endl;



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
    std::cout << "Hello World!\n";
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
