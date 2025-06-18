
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  USLLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, NAMESPACE = 10, CLASS = 11, ENUM = 12, ATRIBUTE = 13, 
    BYTE = 14, UBYTE = 15, SHORT = 16, USHORT = 17, INT = 18, UINT = 19, 
    LONG = 20, ULONG = 21, FLOAT = 22, DOUBLE = 23, HASH = 24, STRING = 25, 
    CHAR = 26, VOID = 27, NULL_ = 28, BOOL = 29, TEMPLATE = 30, ASYNC = 31, 
    SYNC = 32, INTERNAL = 33, OPPERATOR = 34, UNSAFE = 35, STACK_ALLOC = 36, 
    REINTERPRET_CAST = 37, STATIC_CAST = 38, UNSAFE_CAST = 39, CUSTOM_OP = 40, 
    CUSTOM_KEYWORD = 41, CUSTOM_CONTROL = 42, TYPE_QUALIFYERS = 43, STATIC = 44, 
    VIRTUAL = 45, NOEXCEPT = 46, OVERRIDE = 47, NULLPTR = 48, RETURN = 49, 
    REQUIRES = 50, AUTO = 51, CALL = 52, EXTERN = 53, DECLSPEC = 54, DLLEXPORT = 55, 
    DLLIMPORT = 56, NEW = 57, UNSAFE_NEW = 58, UNSAFE_DELETE = 59, ASSIGN_OP = 60, 
    PLUS_OP = 61, MINUS_OP = 62, MULT_OP = 63, DIV_OP = 64, MOD_OP = 65, 
    HASH_OP = 66, DEREF = 67, INCREMENT = 68, DECREMENT = 69, B_LEFT = 70, 
    B_RIGHT = 71, EQUALS = 72, LESS = 73, LARGER = 74, NOT = 75, LESS_EQ = 76, 
    LARGER_EQ = 77, SCOPE_RESSOLUTION_OP = 78, INT_LITTERAL = 79, UINT_LITTERAL = 80, 
    FLOAT_LITTERAL = 81, CHAR_LITTERAL = 82, STRING_LITTERAL = 83, BOOL_LITTERAL = 84, 
    COMMENT = 85, WS = 86, ID = 87, CUSTOM_OP_SYMBOLS = 88
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

