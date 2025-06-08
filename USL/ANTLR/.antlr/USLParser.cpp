
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.1



#include "USLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct USLParserStaticData final {
  USLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  USLParserStaticData(const USLParserStaticData&) = delete;
  USLParserStaticData(USLParserStaticData&&) = delete;
  USLParserStaticData& operator=(const USLParserStaticData&) = delete;
  USLParserStaticData& operator=(USLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag uslParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
USLParserStaticData *uslParserStaticData = nullptr;

void uslParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (uslParserStaticData != nullptr) {
    return;
  }
#else
  assert(uslParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<USLParserStaticData>(
    std::vector<std::string>{
      "program", "global_statement", "statement", "basic_block", "class_delcaratiom"
    },
    std::vector<std::string>{
      "", "'{'", "'}'", "'namespace'", "'class'", "'enum'", "", "'null'", 
      "", "'template'", "'async'", "'sync'", "'_internal'", "'operator'", 
      "'unsafe'", "'stack_alloc'", "'reinterpret_cast'", "'static_cast'", 
      "'unsafe_cast'", "'def_operator'", "'def_keyword'", "'def_flow'", 
      "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", "'->'", "'++'", "'--'", 
      "'<<'", "'>>'", "'=='", "'<'", "'>'", "'!'", "", "", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "NAMESPACE", "CLASS", "ENUM", "PRIMITIVES", "NULL", "SIGNDNES", 
      "TEMPLATE", "ASYNC", "SYNC", "INTERNAL", "OPPERATOR", "UNSAFE", "STACK_ALLOC", 
      "REINTERPRET_CAST", "STATIC_CAST", "UNSAFE_CAST", "CUSTOM_OP", "CUSTOM_KEYWORD", 
      "CUSTOM_CONTROL", "ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "MOD", 
      "HASH", "DEREF", "INCREMENT", "DECREMENT", "B_LEFT", "B_RIGHT", "EQUALS", 
      "LESS", "LARGER", "NOT", "LESS_EQ", "LARGER_EQ", "SCOPE_RESSOLUTION_OP", 
      "INT", "FLOAT", "CHAR", "STRING", "BOOL", "COMMENT", "WS", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,43,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,4,0,12,8,0,11,0,
  	12,0,13,1,0,1,0,1,1,1,1,3,1,20,8,1,1,2,1,2,1,3,1,3,4,3,26,8,3,11,3,12,
  	3,27,1,3,1,3,1,4,1,4,1,4,1,4,5,4,36,8,4,10,4,12,4,39,9,4,1,4,1,4,1,4,
  	0,0,5,0,2,4,6,8,0,0,41,0,11,1,0,0,0,2,19,1,0,0,0,4,21,1,0,0,0,6,23,1,
  	0,0,0,8,31,1,0,0,0,10,12,3,2,1,0,11,10,1,0,0,0,12,13,1,0,0,0,13,11,1,
  	0,0,0,13,14,1,0,0,0,14,15,1,0,0,0,15,16,5,0,0,1,16,1,1,0,0,0,17,20,3,
  	4,2,0,18,20,3,8,4,0,19,17,1,0,0,0,19,18,1,0,0,0,20,3,1,0,0,0,21,22,3,
  	6,3,0,22,5,1,0,0,0,23,25,5,1,0,0,24,26,3,4,2,0,25,24,1,0,0,0,26,27,1,
  	0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,29,1,0,0,0,29,30,5,2,0,0,30,7,1,
  	0,0,0,31,32,5,4,0,0,32,33,5,48,0,0,33,37,5,1,0,0,34,36,3,4,2,0,35,34,
  	1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,37,
  	1,0,0,0,40,41,5,2,0,0,41,9,1,0,0,0,4,13,19,27,37
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uslParserStaticData = staticData.release();
}

}

USLParser::USLParser(TokenStream *input) : USLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

USLParser::USLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  USLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *uslParserStaticData->atn, uslParserStaticData->decisionToDFA, uslParserStaticData->sharedContextCache, options);
}

USLParser::~USLParser() {
  delete _interpreter;
}

const atn::ATN& USLParser::getATN() const {
  return *uslParserStaticData->atn;
}

std::string USLParser::getGrammarFileName() const {
  return "USL.g4";
}

const std::vector<std::string>& USLParser::getRuleNames() const {
  return uslParserStaticData->ruleNames;
}

const dfa::Vocabulary& USLParser::getVocabulary() const {
  return uslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView USLParser::getSerializedATN() const {
  return uslParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

USLParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::ProgramContext::EOF() {
  return getToken(USLParser::EOF, 0);
}

std::vector<USLParser::Global_statementContext *> USLParser::ProgramContext::global_statement() {
  return getRuleContexts<USLParser::Global_statementContext>();
}

USLParser::Global_statementContext* USLParser::ProgramContext::global_statement(size_t i) {
  return getRuleContext<USLParser::Global_statementContext>(i);
}


size_t USLParser::ProgramContext::getRuleIndex() const {
  return USLParser::RuleProgram;
}


USLParser::ProgramContext* USLParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, USLParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(11); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(10);
      global_statement();
      setState(13); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == USLParser::T__0

    || _la == USLParser::CLASS);
    setState(15);
    match(USLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Global_statementContext ------------------------------------------------------------------

USLParser::Global_statementContext::Global_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::StatementContext* USLParser::Global_statementContext::statement() {
  return getRuleContext<USLParser::StatementContext>(0);
}

USLParser::Class_delcaratiomContext* USLParser::Global_statementContext::class_delcaratiom() {
  return getRuleContext<USLParser::Class_delcaratiomContext>(0);
}


size_t USLParser::Global_statementContext::getRuleIndex() const {
  return USLParser::RuleGlobal_statement;
}


USLParser::Global_statementContext* USLParser::global_statement() {
  Global_statementContext *_localctx = _tracker.createInstance<Global_statementContext>(_ctx, getState());
  enterRule(_localctx, 2, USLParser::RuleGlobal_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(19);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(17);
        statement();
        break;
      }

      case USLParser::CLASS: {
        enterOuterAlt(_localctx, 2);
        setState(18);
        class_delcaratiom();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

USLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Basic_blockContext* USLParser::StatementContext::basic_block() {
  return getRuleContext<USLParser::Basic_blockContext>(0);
}


size_t USLParser::StatementContext::getRuleIndex() const {
  return USLParser::RuleStatement;
}


USLParser::StatementContext* USLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, USLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21);
    basic_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Basic_blockContext ------------------------------------------------------------------

USLParser::Basic_blockContext::Basic_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::StatementContext *> USLParser::Basic_blockContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Basic_blockContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Basic_blockContext::getRuleIndex() const {
  return USLParser::RuleBasic_block;
}


USLParser::Basic_blockContext* USLParser::basic_block() {
  Basic_blockContext *_localctx = _tracker.createInstance<Basic_blockContext>(_ctx, getState());
  enterRule(_localctx, 6, USLParser::RuleBasic_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    match(USLParser::T__0);
    setState(25); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(24);
      statement();
      setState(27); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == USLParser::T__0);
    setState(29);
    match(USLParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_delcaratiomContext ------------------------------------------------------------------

USLParser::Class_delcaratiomContext::Class_delcaratiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Class_delcaratiomContext::CLASS() {
  return getToken(USLParser::CLASS, 0);
}

tree::TerminalNode* USLParser::Class_delcaratiomContext::ID() {
  return getToken(USLParser::ID, 0);
}

std::vector<USLParser::StatementContext *> USLParser::Class_delcaratiomContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Class_delcaratiomContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Class_delcaratiomContext::getRuleIndex() const {
  return USLParser::RuleClass_delcaratiom;
}


USLParser::Class_delcaratiomContext* USLParser::class_delcaratiom() {
  Class_delcaratiomContext *_localctx = _tracker.createInstance<Class_delcaratiomContext>(_ctx, getState());
  enterRule(_localctx, 8, USLParser::RuleClass_delcaratiom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    match(USLParser::CLASS);
    setState(32);
    match(USLParser::ID);
    setState(33);
    match(USLParser::T__0);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__0) {
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(USLParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void USLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uslParserInitialize();
#else
  ::antlr4::internal::call_once(uslParserOnceFlag, uslParserInitialize);
#endif
}
