
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    NAMESPACE = 8, CLASS = 9, ENUM = 10, ATRIBUTE = 11, BYTE = 12, SHORT = 13, 
    INT = 14, LONG = 15, FLOAT = 16, DOUBLE = 17, HASH = 18, STRING = 19, 
    CHAR = 20, VOID = 21, NULL_ = 22, BOOL = 23, SIGNDNES = 24, TEMPLATE = 25, 
    ASYNC = 26, SYNC = 27, INTERNAL = 28, OPPERATOR = 29, UNSAFE = 30, STACK_ALLOC = 31, 
    REINTERPRET_CAST = 32, STATIC_CAST = 33, UNSAFE_CAST = 34, CUSTOM_OP = 35, 
    CUSTOM_KEYWORD = 36, CUSTOM_CONTROL = 37, TYPE_QUALIFYERS = 38, STATIC = 39, 
    VIRTUAL = 40, NOEXCEPT = 41, OVERRIDE = 42, NULLPTR = 43, RETURN = 44, 
    REQUIRES = 45, AUTO = 46, CALL = 47, ASSIGN_OP = 48, PLUS_OP = 49, MINUS_OP = 50, 
    MULT_OP = 51, DIV_OP = 52, MOD_OP = 53, HASH_OP = 54, DEREF = 55, INCREMENT = 56, 
    DECREMENT = 57, B_LEFT = 58, B_RIGHT = 59, EQUALS = 60, LESS = 61, LARGER = 62, 
    NOT = 63, LESS_EQ = 64, LARGER_EQ = 65, SCOPE_RESSOLUTION_OP = 66, INT_LITTERAL = 67, 
    FLOAT_LITTERAL = 68, CHAR_LITTERAL = 69, STRING_LITTERAL = 70, BOOL_LITTERAL = 71, 
    COMMENT = 72, WS = 73, ID = 74, CUSTOM_OP_SYMBOLS = 75
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

