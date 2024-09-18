
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, CLASS = 3, NAMESPACE = 4, INBUILD_TYPE = 5, TEMPLATE = 6, 
    ASYNC = 7, SYNC = 8, INTERNAL = 9, NULL_ = 10, CUSTOM_KEYWORD = 11, 
    CUSTOM_FLOW_CONTROL = 12, CUSTOM_OPERATOR = 13, ASSIGN = 14, PLUS = 15, 
    MINUS = 16, MULT = 17, DIV = 18, MOD = 19, HASH = 20, DEREF = 21, INCREMENT = 22, 
    DECREMENT = 23, B_LEFT = 24, B_RIGHT = 25, EQUALS = 26, LESS = 27, LARGER = 28, 
    NOT = 29, LESS_EQ = 30, LARGER_EQ = 31, COMMA = 32, DOT = 33, SEMI = 34, 
    LC = 35, RC = 36, LA = 37, RA = 38, ATRIBUTE = 39, INT = 40, FLOAT = 41, 
    CHAR = 42, STRING = 43, BOOL = 44, COMMENT = 45, WS = 46, ID = 47, TEMPLATE_PARAM = 48
  };

  explicit USLLexer(antlr4::CharStream *input);

  ~USLLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

