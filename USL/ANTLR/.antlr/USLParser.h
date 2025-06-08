
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  USLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, NAMESPACE = 3, CLASS = 4, ENUM = 5, PRIMITIVES = 6, 
    NULL_ = 7, SIGNDNES = 8, TEMPLATE = 9, ASYNC = 10, SYNC = 11, INTERNAL = 12, 
    OPPERATOR = 13, UNSAFE = 14, STACK_ALLOC = 15, REINTERPRET_CAST = 16, 
    STATIC_CAST = 17, UNSAFE_CAST = 18, CUSTOM_OP = 19, CUSTOM_KEYWORD = 20, 
    CUSTOM_CONTROL = 21, ASSIGN = 22, PLUS = 23, MINUS = 24, MULT = 25, 
    DIV = 26, MOD = 27, HASH = 28, DEREF = 29, INCREMENT = 30, DECREMENT = 31, 
    B_LEFT = 32, B_RIGHT = 33, EQUALS = 34, LESS = 35, LARGER = 36, NOT = 37, 
    LESS_EQ = 38, LARGER_EQ = 39, SCOPE_RESSOLUTION_OP = 40, INT = 41, FLOAT = 42, 
    CHAR = 43, STRING = 44, BOOL = 45, COMMENT = 46, WS = 47, ID = 48
  };

  enum {
    RuleProgram = 0, RuleGlobal_statement = 1, RuleStatement = 2, RuleBasic_block = 3, 
    RuleClass_delcaratiom = 4
  };

  explicit USLParser(antlr4::TokenStream *input);

  USLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~USLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class Global_statementContext;
  class StatementContext;
  class Basic_blockContext;
  class Class_delcaratiomContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Global_statementContext *> global_statement();
    Global_statementContext* global_statement(size_t i);

   
  };

  ProgramContext* program();

  class  Global_statementContext : public antlr4::ParserRuleContext {
  public:
    Global_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    Class_delcaratiomContext *class_delcaratiom();

   
  };

  Global_statementContext* global_statement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Basic_blockContext *basic_block();

   
  };

  StatementContext* statement();

  class  Basic_blockContext : public antlr4::ParserRuleContext {
  public:
    Basic_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

   
  };

  Basic_blockContext* basic_block();

  class  Class_delcaratiomContext : public antlr4::ParserRuleContext {
  public:
    Class_delcaratiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    antlr4::tree::TerminalNode *ID();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

   
  };

  Class_delcaratiomContext* class_delcaratiom();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

