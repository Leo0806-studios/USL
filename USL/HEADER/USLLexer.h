
// Generated from USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    CLASS = 1, NAMESPACE = 2, INBUILD_TYPE = 3, TEMPLATE = 4, ASYNC = 5, 
    SYNC = 6, INTERNAL = 7, NULL_ = 8, CUSTOM_KEYWORD = 9, CUSTOM_FLOW_CONTROL = 10, 
    CUSTOM_OPERATOR = 11, ASSIGN = 12, PLUS = 13, MINUS = 14, MULT = 15, 
    DIV = 16, MOD = 17, HASH = 18, INCREMENT = 19, DECREMENT = 20, B_LEFT = 21, 
    B_RIGHT = 22, EQUALS = 23, LESS = 24, LARGER = 25, NOT = 26, LESS_EQ = 27, 
    LARGER_EQ = 28, COMMA = 29, DOT = 30, SEMI = 31, LS = 32, RS = 33, LC = 34, 
    RC = 35, LA = 36, RA = 37, ATRIBUTE = 38, INT = 39, FLOAT = 40, CHAR = 41, 
    STRING = 42, BOOL = 43, COMMENT = 44, WS = 45, ID = 46
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

