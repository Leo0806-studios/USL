
// Generated from USL.g4 by ANTLR 4.13.2


#include "USLListener.h"

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
std::unique_ptr<USLParserStaticData> uslParserStaticData = nullptr;

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
      "program", "statement", "customKeyDeclaration", "customOperatorDeclaration", 
      "customControlFlowDeclaration", "namespaceDeclaration", "classDeclaration", 
      "classMember", "functionDeclaration", "functionDeclarationWithAtr", 
      "varDeclaration", "varDeclarationWithAtr", "parameterList", "parameter", 
      "assignment", "typeSpacifier", "expression", "primary", "expressionStatement", 
      "attribute", "attributeParameterList", "attributeParameter", "genericParameterList", 
      "block"
    },
    std::vector<std::string>{
      "", "'class'", "'namespace'", "", "'template'", "'async'", "'sync'", 
      "'_internal'", "'null'", "'keyword(DEF)'", "'control_F(DEF)'", "'operator(DEF)'", 
      "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", "'++'", "'--'", "'<<'", 
      "'>>'", "'=='", "'<'", "'>'", "'!'", "", "", "','", "'.'", "';'", 
      "'('", "')'", "'{'", "'}'", "'['", "']'", "'GENERIC'"
    },
    std::vector<std::string>{
      "", "CLASS", "NAMESPACE", "INBUILD_TYPE", "TEMPLATE", "ASYNC", "SYNC", 
      "INTERNAL", "NULL", "CUSTOM_KEYWORD", "CUSTOM_FLOW_CONTROL", "CUSTOM_OPERATOR", 
      "ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "MOD", "HASH", "INCREMENT", 
      "DECREMENT", "B_LEFT", "B_RIGHT", "EQUALS", "LESS", "LARGER", "NOT", 
      "LESS_EQ", "LARGER_EQ", "COMMA", "DOT", "SEMI", "LS", "RS", "LC", 
      "RC", "LA", "RA", "ATRIBUTE", "INT", "FLOAT", "CHAR", "STRING", "BOOL", 
      "COMMENT", "WS", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,46,252,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,4,0,50,8,0,11,0,12,0,51,1,0,1,0,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,68,8,1,1,2,1,2,1,2,1,2,1,3,
  	1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,5,6,91,
  	8,6,10,6,12,6,94,9,6,1,6,1,6,1,7,1,7,3,7,100,8,7,1,8,3,8,103,8,8,1,8,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,3,9,114,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,10,5,10,124,8,10,10,10,12,10,127,9,10,1,10,1,10,1,10,1,10,3,10,133,
  	8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,3,11,142,8,11,1,11,1,11,1,12,
  	1,12,1,12,5,12,149,8,12,10,12,12,12,152,9,12,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,169,8,15,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,5,16,178,8,16,10,16,12,16,181,9,16,3,16,
  	183,8,16,1,16,1,16,1,16,1,16,1,16,3,16,190,8,16,1,16,1,16,1,16,5,16,195,
  	8,16,10,16,12,16,198,9,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,3,17,210,8,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,
  	1,20,1,20,1,20,5,20,225,8,20,10,20,12,20,228,9,20,1,20,3,20,231,8,20,
  	1,21,1,21,1,22,1,22,1,22,5,22,238,8,22,10,22,12,22,241,9,22,1,23,1,23,
  	5,23,245,8,23,10,23,12,23,248,9,23,1,23,1,23,1,23,0,1,32,24,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,0,3,1,0,5,6,
  	1,0,13,17,2,0,42,42,46,46,265,0,49,1,0,0,0,2,67,1,0,0,0,4,69,1,0,0,0,
  	6,73,1,0,0,0,8,78,1,0,0,0,10,82,1,0,0,0,12,86,1,0,0,0,14,99,1,0,0,0,16,
  	102,1,0,0,0,18,111,1,0,0,0,20,125,1,0,0,0,22,136,1,0,0,0,24,145,1,0,0,
  	0,26,153,1,0,0,0,28,156,1,0,0,0,30,168,1,0,0,0,32,189,1,0,0,0,34,209,
  	1,0,0,0,36,211,1,0,0,0,38,214,1,0,0,0,40,230,1,0,0,0,42,232,1,0,0,0,44,
  	234,1,0,0,0,46,242,1,0,0,0,48,50,3,2,1,0,49,48,1,0,0,0,50,51,1,0,0,0,
  	51,49,1,0,0,0,51,52,1,0,0,0,52,53,1,0,0,0,53,54,5,0,0,1,54,1,1,0,0,0,
  	55,68,3,8,4,0,56,68,3,6,3,0,57,68,3,4,2,0,58,68,3,10,5,0,59,68,3,12,6,
  	0,60,68,3,18,9,0,61,68,3,16,8,0,62,68,3,22,11,0,63,68,3,20,10,0,64,68,
  	3,28,14,0,65,68,3,36,18,0,66,68,3,46,23,0,67,55,1,0,0,0,67,56,1,0,0,0,
  	67,57,1,0,0,0,67,58,1,0,0,0,67,59,1,0,0,0,67,60,1,0,0,0,67,61,1,0,0,0,
  	67,62,1,0,0,0,67,63,1,0,0,0,67,64,1,0,0,0,67,65,1,0,0,0,67,66,1,0,0,0,
  	68,3,1,0,0,0,69,70,5,9,0,0,70,71,5,46,0,0,71,72,3,46,23,0,72,5,1,0,0,
  	0,73,74,3,30,15,0,74,75,5,11,0,0,75,76,5,46,0,0,76,77,3,46,23,0,77,7,
  	1,0,0,0,78,79,5,10,0,0,79,80,5,46,0,0,80,81,3,46,23,0,81,9,1,0,0,0,82,
  	83,5,2,0,0,83,84,5,46,0,0,84,85,3,46,23,0,85,11,1,0,0,0,86,87,5,1,0,0,
  	87,88,5,46,0,0,88,92,5,34,0,0,89,91,3,14,7,0,90,89,1,0,0,0,91,94,1,0,
  	0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,92,1,0,0,0,95,96,5,35,
  	0,0,96,13,1,0,0,0,97,100,3,20,10,0,98,100,3,16,8,0,99,97,1,0,0,0,99,98,
  	1,0,0,0,100,15,1,0,0,0,101,103,7,0,0,0,102,101,1,0,0,0,102,103,1,0,0,
  	0,103,104,1,0,0,0,104,105,3,30,15,0,105,106,5,46,0,0,106,107,5,32,0,0,
  	107,108,3,24,12,0,108,109,5,33,0,0,109,110,3,46,23,0,110,17,1,0,0,0,111,
  	113,3,38,19,0,112,114,7,0,0,0,113,112,1,0,0,0,113,114,1,0,0,0,114,115,
  	1,0,0,0,115,116,3,30,15,0,116,117,5,46,0,0,117,118,5,32,0,0,118,119,3,
  	24,12,0,119,120,5,33,0,0,120,121,3,46,23,0,121,19,1,0,0,0,122,124,3,38,
  	19,0,123,122,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,
  	126,128,1,0,0,0,127,125,1,0,0,0,128,129,3,30,15,0,129,132,5,46,0,0,130,
  	131,5,12,0,0,131,133,3,32,16,0,132,130,1,0,0,0,132,133,1,0,0,0,133,134,
  	1,0,0,0,134,135,5,31,0,0,135,21,1,0,0,0,136,137,3,38,19,0,137,138,3,30,
  	15,0,138,141,5,46,0,0,139,140,5,12,0,0,140,142,3,32,16,0,141,139,1,0,
  	0,0,141,142,1,0,0,0,142,143,1,0,0,0,143,144,5,31,0,0,144,23,1,0,0,0,145,
  	150,3,26,13,0,146,147,5,29,0,0,147,149,3,26,13,0,148,146,1,0,0,0,149,
  	152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,25,1,0,0,0,152,150,1,
  	0,0,0,153,154,3,30,15,0,154,155,5,46,0,0,155,27,1,0,0,0,156,157,5,46,
  	0,0,157,158,5,12,0,0,158,159,3,32,16,0,159,160,5,31,0,0,160,29,1,0,0,
  	0,161,169,5,3,0,0,162,169,5,46,0,0,163,164,5,4,0,0,164,165,5,24,0,0,165,
  	166,3,30,15,0,166,167,5,25,0,0,167,169,1,0,0,0,168,161,1,0,0,0,168,162,
  	1,0,0,0,168,163,1,0,0,0,169,31,1,0,0,0,170,171,6,16,-1,0,171,190,3,34,
  	17,0,172,173,5,46,0,0,173,182,5,32,0,0,174,179,3,32,16,0,175,176,5,29,
  	0,0,176,178,3,32,16,0,177,175,1,0,0,0,178,181,1,0,0,0,179,177,1,0,0,0,
  	179,180,1,0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,182,174,1,0,0,0,182,183,
  	1,0,0,0,183,184,1,0,0,0,184,190,5,33,0,0,185,186,5,46,0,0,186,190,5,19,
  	0,0,187,188,5,46,0,0,188,190,5,20,0,0,189,170,1,0,0,0,189,172,1,0,0,0,
  	189,185,1,0,0,0,189,187,1,0,0,0,190,196,1,0,0,0,191,192,10,4,0,0,192,
  	193,7,1,0,0,193,195,3,32,16,5,194,191,1,0,0,0,195,198,1,0,0,0,196,194,
  	1,0,0,0,196,197,1,0,0,0,197,33,1,0,0,0,198,196,1,0,0,0,199,210,5,39,0,
  	0,200,210,5,40,0,0,201,210,5,43,0,0,202,210,5,42,0,0,203,210,5,41,0,0,
  	204,210,5,46,0,0,205,206,5,32,0,0,206,207,3,32,16,0,207,208,5,33,0,0,
  	208,210,1,0,0,0,209,199,1,0,0,0,209,200,1,0,0,0,209,201,1,0,0,0,209,202,
  	1,0,0,0,209,203,1,0,0,0,209,204,1,0,0,0,209,205,1,0,0,0,210,35,1,0,0,
  	0,211,212,3,32,16,0,212,213,5,31,0,0,213,37,1,0,0,0,214,215,5,36,0,0,
  	215,216,5,38,0,0,216,217,5,32,0,0,217,218,3,40,20,0,218,219,5,33,0,0,
  	219,220,5,37,0,0,220,39,1,0,0,0,221,226,3,42,21,0,222,223,5,29,0,0,223,
  	225,3,42,21,0,224,222,1,0,0,0,225,228,1,0,0,0,226,224,1,0,0,0,226,227,
  	1,0,0,0,227,231,1,0,0,0,228,226,1,0,0,0,229,231,3,44,22,0,230,221,1,0,
  	0,0,230,229,1,0,0,0,231,41,1,0,0,0,232,233,7,2,0,0,233,43,1,0,0,0,234,
  	239,5,46,0,0,235,236,5,29,0,0,236,238,5,46,0,0,237,235,1,0,0,0,238,241,
  	1,0,0,0,239,237,1,0,0,0,239,240,1,0,0,0,240,45,1,0,0,0,241,239,1,0,0,
  	0,242,246,5,34,0,0,243,245,3,2,1,0,244,243,1,0,0,0,245,248,1,0,0,0,246,
  	244,1,0,0,0,246,247,1,0,0,0,247,249,1,0,0,0,248,246,1,0,0,0,249,250,5,
  	35,0,0,250,47,1,0,0,0,20,51,67,92,99,102,113,125,132,141,150,168,179,
  	182,189,196,209,226,230,239,246
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  uslParserStaticData = std::move(staticData);
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

std::vector<USLParser::StatementContext *> USLParser::ProgramContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::ProgramContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::ProgramContext::getRuleIndex() const {
  return USLParser::RuleProgram;
}

void USLParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void USLParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
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
    setState(49); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(48);
      statement();
      setState(51); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 87501368723070) != 0));
    setState(53);
    match(USLParser::EOF);
   
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

USLParser::CustomControlFlowDeclarationContext* USLParser::StatementContext::customControlFlowDeclaration() {
  return getRuleContext<USLParser::CustomControlFlowDeclarationContext>(0);
}

USLParser::CustomOperatorDeclarationContext* USLParser::StatementContext::customOperatorDeclaration() {
  return getRuleContext<USLParser::CustomOperatorDeclarationContext>(0);
}

USLParser::CustomKeyDeclarationContext* USLParser::StatementContext::customKeyDeclaration() {
  return getRuleContext<USLParser::CustomKeyDeclarationContext>(0);
}

USLParser::NamespaceDeclarationContext* USLParser::StatementContext::namespaceDeclaration() {
  return getRuleContext<USLParser::NamespaceDeclarationContext>(0);
}

USLParser::ClassDeclarationContext* USLParser::StatementContext::classDeclaration() {
  return getRuleContext<USLParser::ClassDeclarationContext>(0);
}

USLParser::FunctionDeclarationWithAtrContext* USLParser::StatementContext::functionDeclarationWithAtr() {
  return getRuleContext<USLParser::FunctionDeclarationWithAtrContext>(0);
}

USLParser::FunctionDeclarationContext* USLParser::StatementContext::functionDeclaration() {
  return getRuleContext<USLParser::FunctionDeclarationContext>(0);
}

USLParser::VarDeclarationWithAtrContext* USLParser::StatementContext::varDeclarationWithAtr() {
  return getRuleContext<USLParser::VarDeclarationWithAtrContext>(0);
}

USLParser::VarDeclarationContext* USLParser::StatementContext::varDeclaration() {
  return getRuleContext<USLParser::VarDeclarationContext>(0);
}

USLParser::AssignmentContext* USLParser::StatementContext::assignment() {
  return getRuleContext<USLParser::AssignmentContext>(0);
}

USLParser::ExpressionStatementContext* USLParser::StatementContext::expressionStatement() {
  return getRuleContext<USLParser::ExpressionStatementContext>(0);
}

USLParser::BlockContext* USLParser::StatementContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}


size_t USLParser::StatementContext::getRuleIndex() const {
  return USLParser::RuleStatement;
}

void USLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void USLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

USLParser::StatementContext* USLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, USLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      customControlFlowDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      customOperatorDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(57);
      customKeyDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(58);
      namespaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(59);
      classDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(60);
      functionDeclarationWithAtr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(61);
      functionDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(62);
      varDeclarationWithAtr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(63);
      varDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(64);
      assignment();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(65);
      expressionStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(66);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CustomKeyDeclarationContext ------------------------------------------------------------------

USLParser::CustomKeyDeclarationContext::CustomKeyDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::CustomKeyDeclarationContext::CUSTOM_KEYWORD() {
  return getToken(USLParser::CUSTOM_KEYWORD, 0);
}

tree::TerminalNode* USLParser::CustomKeyDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::BlockContext* USLParser::CustomKeyDeclarationContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}


size_t USLParser::CustomKeyDeclarationContext::getRuleIndex() const {
  return USLParser::RuleCustomKeyDeclaration;
}

void USLParser::CustomKeyDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustomKeyDeclaration(this);
}

void USLParser::CustomKeyDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustomKeyDeclaration(this);
}

USLParser::CustomKeyDeclarationContext* USLParser::customKeyDeclaration() {
  CustomKeyDeclarationContext *_localctx = _tracker.createInstance<CustomKeyDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, USLParser::RuleCustomKeyDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(USLParser::CUSTOM_KEYWORD);
    setState(70);
    match(USLParser::ID);
    setState(71);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CustomOperatorDeclarationContext ------------------------------------------------------------------

USLParser::CustomOperatorDeclarationContext::CustomOperatorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeSpacifierContext* USLParser::CustomOperatorDeclarationContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::CustomOperatorDeclarationContext::CUSTOM_OPERATOR() {
  return getToken(USLParser::CUSTOM_OPERATOR, 0);
}

tree::TerminalNode* USLParser::CustomOperatorDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::BlockContext* USLParser::CustomOperatorDeclarationContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}


size_t USLParser::CustomOperatorDeclarationContext::getRuleIndex() const {
  return USLParser::RuleCustomOperatorDeclaration;
}

void USLParser::CustomOperatorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustomOperatorDeclaration(this);
}

void USLParser::CustomOperatorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustomOperatorDeclaration(this);
}

USLParser::CustomOperatorDeclarationContext* USLParser::customOperatorDeclaration() {
  CustomOperatorDeclarationContext *_localctx = _tracker.createInstance<CustomOperatorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, USLParser::RuleCustomOperatorDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    typeSpacifier();
    setState(74);
    match(USLParser::CUSTOM_OPERATOR);
    setState(75);
    match(USLParser::ID);
    setState(76);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CustomControlFlowDeclarationContext ------------------------------------------------------------------

USLParser::CustomControlFlowDeclarationContext::CustomControlFlowDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::CustomControlFlowDeclarationContext::CUSTOM_FLOW_CONTROL() {
  return getToken(USLParser::CUSTOM_FLOW_CONTROL, 0);
}

tree::TerminalNode* USLParser::CustomControlFlowDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::BlockContext* USLParser::CustomControlFlowDeclarationContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}


size_t USLParser::CustomControlFlowDeclarationContext::getRuleIndex() const {
  return USLParser::RuleCustomControlFlowDeclaration;
}

void USLParser::CustomControlFlowDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCustomControlFlowDeclaration(this);
}

void USLParser::CustomControlFlowDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCustomControlFlowDeclaration(this);
}

USLParser::CustomControlFlowDeclarationContext* USLParser::customControlFlowDeclaration() {
  CustomControlFlowDeclarationContext *_localctx = _tracker.createInstance<CustomControlFlowDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, USLParser::RuleCustomControlFlowDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(USLParser::CUSTOM_FLOW_CONTROL);
    setState(79);
    match(USLParser::ID);
    setState(80);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDeclarationContext ------------------------------------------------------------------

USLParser::NamespaceDeclarationContext::NamespaceDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::NamespaceDeclarationContext::NAMESPACE() {
  return getToken(USLParser::NAMESPACE, 0);
}

tree::TerminalNode* USLParser::NamespaceDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::BlockContext* USLParser::NamespaceDeclarationContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}


size_t USLParser::NamespaceDeclarationContext::getRuleIndex() const {
  return USLParser::RuleNamespaceDeclaration;
}

void USLParser::NamespaceDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceDeclaration(this);
}

void USLParser::NamespaceDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceDeclaration(this);
}

USLParser::NamespaceDeclarationContext* USLParser::namespaceDeclaration() {
  NamespaceDeclarationContext *_localctx = _tracker.createInstance<NamespaceDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, USLParser::RuleNamespaceDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(USLParser::NAMESPACE);
    setState(83);
    match(USLParser::ID);
    setState(84);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclarationContext ------------------------------------------------------------------

USLParser::ClassDeclarationContext::ClassDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::ClassDeclarationContext::CLASS() {
  return getToken(USLParser::CLASS, 0);
}

tree::TerminalNode* USLParser::ClassDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::ClassDeclarationContext::LC() {
  return getToken(USLParser::LC, 0);
}

tree::TerminalNode* USLParser::ClassDeclarationContext::RC() {
  return getToken(USLParser::RC, 0);
}

std::vector<USLParser::ClassMemberContext *> USLParser::ClassDeclarationContext::classMember() {
  return getRuleContexts<USLParser::ClassMemberContext>();
}

USLParser::ClassMemberContext* USLParser::ClassDeclarationContext::classMember(size_t i) {
  return getRuleContext<USLParser::ClassMemberContext>(i);
}


size_t USLParser::ClassDeclarationContext::getRuleIndex() const {
  return USLParser::RuleClassDeclaration;
}

void USLParser::ClassDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDeclaration(this);
}

void USLParser::ClassDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDeclaration(this);
}

USLParser::ClassDeclarationContext* USLParser::classDeclaration() {
  ClassDeclarationContext *_localctx = _tracker.createInstance<ClassDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, USLParser::RuleClassDeclaration);
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
    setState(86);
    match(USLParser::CLASS);
    setState(87);
    match(USLParser::ID);
    setState(88);
    match(USLParser::LC);
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70437463654520) != 0)) {
      setState(89);
      classMember();
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    match(USLParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberContext ------------------------------------------------------------------

USLParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::VarDeclarationContext* USLParser::ClassMemberContext::varDeclaration() {
  return getRuleContext<USLParser::VarDeclarationContext>(0);
}

USLParser::FunctionDeclarationContext* USLParser::ClassMemberContext::functionDeclaration() {
  return getRuleContext<USLParser::FunctionDeclarationContext>(0);
}


size_t USLParser::ClassMemberContext::getRuleIndex() const {
  return USLParser::RuleClassMember;
}

void USLParser::ClassMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMember(this);
}

void USLParser::ClassMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMember(this);
}

USLParser::ClassMemberContext* USLParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 14, USLParser::RuleClassMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(97);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(98);
      functionDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

USLParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeSpacifierContext* USLParser::FunctionDeclarationContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::LS() {
  return getToken(USLParser::LS, 0);
}

USLParser::ParameterListContext* USLParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::RS() {
  return getToken(USLParser::RS, 0);
}

USLParser::BlockContext* USLParser::FunctionDeclarationContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::ASYNC() {
  return getToken(USLParser::ASYNC, 0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::SYNC() {
  return getToken(USLParser::SYNC, 0);
}


size_t USLParser::FunctionDeclarationContext::getRuleIndex() const {
  return USLParser::RuleFunctionDeclaration;
}

void USLParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void USLParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}

USLParser::FunctionDeclarationContext* USLParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, USLParser::RuleFunctionDeclaration);
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
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASYNC

    || _la == USLParser::SYNC) {
      setState(101);
      _la = _input->LA(1);
      if (!(_la == USLParser::ASYNC

      || _la == USLParser::SYNC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(104);
    typeSpacifier();
    setState(105);
    match(USLParser::ID);
    setState(106);
    match(USLParser::LS);
    setState(107);
    parameterList();
    setState(108);
    match(USLParser::RS);
    setState(109);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationWithAtrContext ------------------------------------------------------------------

USLParser::FunctionDeclarationWithAtrContext::FunctionDeclarationWithAtrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::AttributeContext* USLParser::FunctionDeclarationWithAtrContext::attribute() {
  return getRuleContext<USLParser::AttributeContext>(0);
}

USLParser::TypeSpacifierContext* USLParser::FunctionDeclarationWithAtrContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::LS() {
  return getToken(USLParser::LS, 0);
}

USLParser::ParameterListContext* USLParser::FunctionDeclarationWithAtrContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::RS() {
  return getToken(USLParser::RS, 0);
}

USLParser::BlockContext* USLParser::FunctionDeclarationWithAtrContext::block() {
  return getRuleContext<USLParser::BlockContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::ASYNC() {
  return getToken(USLParser::ASYNC, 0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::SYNC() {
  return getToken(USLParser::SYNC, 0);
}


size_t USLParser::FunctionDeclarationWithAtrContext::getRuleIndex() const {
  return USLParser::RuleFunctionDeclarationWithAtr;
}

void USLParser::FunctionDeclarationWithAtrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclarationWithAtr(this);
}

void USLParser::FunctionDeclarationWithAtrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclarationWithAtr(this);
}

USLParser::FunctionDeclarationWithAtrContext* USLParser::functionDeclarationWithAtr() {
  FunctionDeclarationWithAtrContext *_localctx = _tracker.createInstance<FunctionDeclarationWithAtrContext>(_ctx, getState());
  enterRule(_localctx, 18, USLParser::RuleFunctionDeclarationWithAtr);
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
    setState(111);
    attribute();
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASYNC

    || _la == USLParser::SYNC) {
      setState(112);
      _la = _input->LA(1);
      if (!(_la == USLParser::ASYNC

      || _la == USLParser::SYNC)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(115);
    typeSpacifier();
    setState(116);
    match(USLParser::ID);
    setState(117);
    match(USLParser::LS);
    setState(118);
    parameterList();
    setState(119);
    match(USLParser::RS);
    setState(120);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

USLParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeSpacifierContext* USLParser::VarDeclarationContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::VarDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::VarDeclarationContext::SEMI() {
  return getToken(USLParser::SEMI, 0);
}

std::vector<USLParser::AttributeContext *> USLParser::VarDeclarationContext::attribute() {
  return getRuleContexts<USLParser::AttributeContext>();
}

USLParser::AttributeContext* USLParser::VarDeclarationContext::attribute(size_t i) {
  return getRuleContext<USLParser::AttributeContext>(i);
}

tree::TerminalNode* USLParser::VarDeclarationContext::ASSIGN() {
  return getToken(USLParser::ASSIGN, 0);
}

USLParser::ExpressionContext* USLParser::VarDeclarationContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::VarDeclarationContext::getRuleIndex() const {
  return USLParser::RuleVarDeclaration;
}

void USLParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void USLParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}

USLParser::VarDeclarationContext* USLParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 20, USLParser::RuleVarDeclaration);
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
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::LA) {
      setState(122);
      attribute();
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
    typeSpacifier();
    setState(129);
    match(USLParser::ID);
    setState(132);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN) {
      setState(130);
      match(USLParser::ASSIGN);
      setState(131);
      expression(0);
    }
    setState(134);
    match(USLParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationWithAtrContext ------------------------------------------------------------------

USLParser::VarDeclarationWithAtrContext::VarDeclarationWithAtrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::AttributeContext* USLParser::VarDeclarationWithAtrContext::attribute() {
  return getRuleContext<USLParser::AttributeContext>(0);
}

USLParser::TypeSpacifierContext* USLParser::VarDeclarationWithAtrContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::VarDeclarationWithAtrContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::VarDeclarationWithAtrContext::SEMI() {
  return getToken(USLParser::SEMI, 0);
}

tree::TerminalNode* USLParser::VarDeclarationWithAtrContext::ASSIGN() {
  return getToken(USLParser::ASSIGN, 0);
}

USLParser::ExpressionContext* USLParser::VarDeclarationWithAtrContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::VarDeclarationWithAtrContext::getRuleIndex() const {
  return USLParser::RuleVarDeclarationWithAtr;
}

void USLParser::VarDeclarationWithAtrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclarationWithAtr(this);
}

void USLParser::VarDeclarationWithAtrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclarationWithAtr(this);
}

USLParser::VarDeclarationWithAtrContext* USLParser::varDeclarationWithAtr() {
  VarDeclarationWithAtrContext *_localctx = _tracker.createInstance<VarDeclarationWithAtrContext>(_ctx, getState());
  enterRule(_localctx, 22, USLParser::RuleVarDeclarationWithAtr);
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
    setState(136);
    attribute();
    setState(137);
    typeSpacifier();
    setState(138);
    match(USLParser::ID);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN) {
      setState(139);
      match(USLParser::ASSIGN);
      setState(140);
      expression(0);
    }
    setState(143);
    match(USLParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

USLParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::ParameterContext *> USLParser::ParameterListContext::parameter() {
  return getRuleContexts<USLParser::ParameterContext>();
}

USLParser::ParameterContext* USLParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<USLParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::ParameterListContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::ParameterListContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}


size_t USLParser::ParameterListContext::getRuleIndex() const {
  return USLParser::RuleParameterList;
}

void USLParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void USLParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

USLParser::ParameterListContext* USLParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 24, USLParser::RuleParameterList);
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
    setState(145);
    parameter();
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::COMMA) {
      setState(146);
      match(USLParser::COMMA);
      setState(147);
      parameter();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

USLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeSpacifierContext* USLParser::ParameterContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::ParameterContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::ParameterContext::getRuleIndex() const {
  return USLParser::RuleParameter;
}

void USLParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void USLParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

USLParser::ParameterContext* USLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 26, USLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    typeSpacifier();
    setState(154);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

USLParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::AssignmentContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::AssignmentContext::ASSIGN() {
  return getToken(USLParser::ASSIGN, 0);
}

USLParser::ExpressionContext* USLParser::AssignmentContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

tree::TerminalNode* USLParser::AssignmentContext::SEMI() {
  return getToken(USLParser::SEMI, 0);
}


size_t USLParser::AssignmentContext::getRuleIndex() const {
  return USLParser::RuleAssignment;
}

void USLParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void USLParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

USLParser::AssignmentContext* USLParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 28, USLParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(USLParser::ID);
    setState(157);
    match(USLParser::ASSIGN);
    setState(158);
    expression(0);
    setState(159);
    match(USLParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpacifierContext ------------------------------------------------------------------

USLParser::TypeSpacifierContext::TypeSpacifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::TypeSpacifierContext::INBUILD_TYPE() {
  return getToken(USLParser::INBUILD_TYPE, 0);
}

tree::TerminalNode* USLParser::TypeSpacifierContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::TypeSpacifierContext::TEMPLATE() {
  return getToken(USLParser::TEMPLATE, 0);
}

tree::TerminalNode* USLParser::TypeSpacifierContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

USLParser::TypeSpacifierContext* USLParser::TypeSpacifierContext::typeSpacifier() {
  return getRuleContext<USLParser::TypeSpacifierContext>(0);
}

tree::TerminalNode* USLParser::TypeSpacifierContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}


size_t USLParser::TypeSpacifierContext::getRuleIndex() const {
  return USLParser::RuleTypeSpacifier;
}

void USLParser::TypeSpacifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpacifier(this);
}

void USLParser::TypeSpacifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpacifier(this);
}

USLParser::TypeSpacifierContext* USLParser::typeSpacifier() {
  TypeSpacifierContext *_localctx = _tracker.createInstance<TypeSpacifierContext>(_ctx, getState());
  enterRule(_localctx, 30, USLParser::RuleTypeSpacifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INBUILD_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        match(USLParser::INBUILD_TYPE);
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(162);
        match(USLParser::ID);
        break;
      }

      case USLParser::TEMPLATE: {
        enterOuterAlt(_localctx, 3);
        setState(163);
        match(USLParser::TEMPLATE);
        setState(164);
        match(USLParser::LESS);
        setState(165);
        typeSpacifier();
        setState(166);
        match(USLParser::LARGER);
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

//----------------- ExpressionContext ------------------------------------------------------------------

USLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::PrimaryContext* USLParser::ExpressionContext::primary() {
  return getRuleContext<USLParser::PrimaryContext>(0);
}

tree::TerminalNode* USLParser::ExpressionContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::LS() {
  return getToken(USLParser::LS, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::RS() {
  return getToken(USLParser::RS, 0);
}

std::vector<USLParser::ExpressionContext *> USLParser::ExpressionContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::ExpressionContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::ExpressionContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}

tree::TerminalNode* USLParser::ExpressionContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::PLUS() {
  return getToken(USLParser::PLUS, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::MINUS() {
  return getToken(USLParser::MINUS, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::MULT() {
  return getToken(USLParser::MULT, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::DIV() {
  return getToken(USLParser::DIV, 0);
}

tree::TerminalNode* USLParser::ExpressionContext::MOD() {
  return getToken(USLParser::MOD, 0);
}


size_t USLParser::ExpressionContext::getRuleIndex() const {
  return USLParser::RuleExpression;
}

void USLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void USLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


USLParser::ExpressionContext* USLParser::expression() {
   return expression(0);
}

USLParser::ExpressionContext* USLParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  USLParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  USLParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, USLParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(171);
      primary();
      break;
    }

    case 2: {
      setState(172);
      match(USLParser::ID);
      setState(173);
      match(USLParser::LS);
      setState(182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 87415469375488) != 0)) {
        setState(174);
        expression(0);
        setState(179);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::COMMA) {
          setState(175);
          match(USLParser::COMMA);
          setState(176);
          expression(0);
          setState(181);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(184);
      match(USLParser::RS);
      break;
    }

    case 3: {
      setState(185);
      match(USLParser::ID);
      setState(186);
      match(USLParser::INCREMENT);
      break;
    }

    case 4: {
      setState(187);
      match(USLParser::ID);
      setState(188);
      match(USLParser::DECREMENT);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(196);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(191);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(192);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 253952) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(193);
        expression(5); 
      }
      setState(198);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

USLParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::PrimaryContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::FLOAT() {
  return getToken(USLParser::FLOAT, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::BOOL() {
  return getToken(USLParser::BOOL, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::STRING() {
  return getToken(USLParser::STRING, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::CHAR() {
  return getToken(USLParser::CHAR, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::PrimaryContext::LS() {
  return getToken(USLParser::LS, 0);
}

USLParser::ExpressionContext* USLParser::PrimaryContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

tree::TerminalNode* USLParser::PrimaryContext::RS() {
  return getToken(USLParser::RS, 0);
}


size_t USLParser::PrimaryContext::getRuleIndex() const {
  return USLParser::RulePrimary;
}

void USLParser::PrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimary(this);
}

void USLParser::PrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimary(this);
}

USLParser::PrimaryContext* USLParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 34, USLParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(199);
        match(USLParser::INT);
        break;
      }

      case USLParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(200);
        match(USLParser::FLOAT);
        break;
      }

      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 3);
        setState(201);
        match(USLParser::BOOL);
        break;
      }

      case USLParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(202);
        match(USLParser::STRING);
        break;
      }

      case USLParser::CHAR: {
        enterOuterAlt(_localctx, 5);
        setState(203);
        match(USLParser::CHAR);
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(204);
        match(USLParser::ID);
        break;
      }

      case USLParser::LS: {
        enterOuterAlt(_localctx, 7);
        setState(205);
        match(USLParser::LS);
        setState(206);
        expression(0);
        setState(207);
        match(USLParser::RS);
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

//----------------- ExpressionStatementContext ------------------------------------------------------------------

USLParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::ExpressionContext* USLParser::ExpressionStatementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

tree::TerminalNode* USLParser::ExpressionStatementContext::SEMI() {
  return getToken(USLParser::SEMI, 0);
}


size_t USLParser::ExpressionStatementContext::getRuleIndex() const {
  return USLParser::RuleExpressionStatement;
}

void USLParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void USLParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

USLParser::ExpressionStatementContext* USLParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, USLParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    expression(0);
    setState(212);
    match(USLParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

USLParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::AttributeContext::LA() {
  return getToken(USLParser::LA, 0);
}

tree::TerminalNode* USLParser::AttributeContext::ATRIBUTE() {
  return getToken(USLParser::ATRIBUTE, 0);
}

tree::TerminalNode* USLParser::AttributeContext::LS() {
  return getToken(USLParser::LS, 0);
}

USLParser::AttributeParameterListContext* USLParser::AttributeContext::attributeParameterList() {
  return getRuleContext<USLParser::AttributeParameterListContext>(0);
}

tree::TerminalNode* USLParser::AttributeContext::RS() {
  return getToken(USLParser::RS, 0);
}

tree::TerminalNode* USLParser::AttributeContext::RA() {
  return getToken(USLParser::RA, 0);
}


size_t USLParser::AttributeContext::getRuleIndex() const {
  return USLParser::RuleAttribute;
}

void USLParser::AttributeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttribute(this);
}

void USLParser::AttributeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttribute(this);
}

USLParser::AttributeContext* USLParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 38, USLParser::RuleAttribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    match(USLParser::LA);
    setState(215);
    match(USLParser::ATRIBUTE);
    setState(216);
    match(USLParser::LS);
    setState(217);
    attributeParameterList();
    setState(218);
    match(USLParser::RS);
    setState(219);
    match(USLParser::RA);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeParameterListContext ------------------------------------------------------------------

USLParser::AttributeParameterListContext::AttributeParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::AttributeParameterContext *> USLParser::AttributeParameterListContext::attributeParameter() {
  return getRuleContexts<USLParser::AttributeParameterContext>();
}

USLParser::AttributeParameterContext* USLParser::AttributeParameterListContext::attributeParameter(size_t i) {
  return getRuleContext<USLParser::AttributeParameterContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::AttributeParameterListContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::AttributeParameterListContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}

USLParser::GenericParameterListContext* USLParser::AttributeParameterListContext::genericParameterList() {
  return getRuleContext<USLParser::GenericParameterListContext>(0);
}


size_t USLParser::AttributeParameterListContext::getRuleIndex() const {
  return USLParser::RuleAttributeParameterList;
}

void USLParser::AttributeParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameterList(this);
}

void USLParser::AttributeParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameterList(this);
}

USLParser::AttributeParameterListContext* USLParser::attributeParameterList() {
  AttributeParameterListContext *_localctx = _tracker.createInstance<AttributeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 40, USLParser::RuleAttributeParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(221);
      attributeParameter();
      setState(226);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::COMMA) {
        setState(222);
        match(USLParser::COMMA);
        setState(223);
        attributeParameter();
        setState(228);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
      genericParameterList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeParameterContext ------------------------------------------------------------------

USLParser::AttributeParameterContext::AttributeParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::AttributeParameterContext::STRING() {
  return getToken(USLParser::STRING, 0);
}

tree::TerminalNode* USLParser::AttributeParameterContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::AttributeParameterContext::getRuleIndex() const {
  return USLParser::RuleAttributeParameter;
}

void USLParser::AttributeParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeParameter(this);
}

void USLParser::AttributeParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeParameter(this);
}

USLParser::AttributeParameterContext* USLParser::attributeParameter() {
  AttributeParameterContext *_localctx = _tracker.createInstance<AttributeParameterContext>(_ctx, getState());
  enterRule(_localctx, 42, USLParser::RuleAttributeParameter);
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
    setState(232);
    _la = _input->LA(1);
    if (!(_la == USLParser::STRING

    || _la == USLParser::ID)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericParameterListContext ------------------------------------------------------------------

USLParser::GenericParameterListContext::GenericParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::GenericParameterListContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::GenericParameterListContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

std::vector<tree::TerminalNode *> USLParser::GenericParameterListContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::GenericParameterListContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}


size_t USLParser::GenericParameterListContext::getRuleIndex() const {
  return USLParser::RuleGenericParameterList;
}

void USLParser::GenericParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericParameterList(this);
}

void USLParser::GenericParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericParameterList(this);
}

USLParser::GenericParameterListContext* USLParser::genericParameterList() {
  GenericParameterListContext *_localctx = _tracker.createInstance<GenericParameterListContext>(_ctx, getState());
  enterRule(_localctx, 44, USLParser::RuleGenericParameterList);
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
    setState(234);
    match(USLParser::ID);
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::COMMA) {
      setState(235);
      match(USLParser::COMMA);
      setState(236);
      match(USLParser::ID);
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

USLParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::BlockContext::LC() {
  return getToken(USLParser::LC, 0);
}

tree::TerminalNode* USLParser::BlockContext::RC() {
  return getToken(USLParser::RC, 0);
}

std::vector<USLParser::StatementContext *> USLParser::BlockContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::BlockContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::BlockContext::getRuleIndex() const {
  return USLParser::RuleBlock;
}

void USLParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void USLParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

USLParser::BlockContext* USLParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 46, USLParser::RuleBlock);
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
    setState(242);
    match(USLParser::LC);
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 87501368723070) != 0)) {
      setState(243);
      statement();
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(249);
    match(USLParser::RC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool USLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool USLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void USLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  uslParserInitialize();
#else
  ::antlr4::internal::call_once(uslParserOnceFlag, uslParserInitialize);
#endif
}
