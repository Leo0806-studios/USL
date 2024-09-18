
// Generated from USL.g4 by ANTLR 4.13.2


#include "USLListener.h"
#include "USLVisitor.h"

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
      "varDeclaration", "varDeclarationWithAtr", "memberAcces", "funcCall", 
      "parameterList", "parameter", "assignment", "templateDeclaration", 
      "typeSpecifier", "expression", "primary", "expressionStatement", "attribute", 
      "attributeParameterList", "attributeParameter", "genericParameterList", 
      "block"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'class'", "'namespace'", "", "'template'", "'async'", 
      "'sync'", "'_internal'", "'null'", "'keyword(DEF)'", "'control_F(DEF)'", 
      "'operator(DEF)'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", 
      "'->'", "'++'", "'--'", "'<<'", "'>>'", "'=='", "'<'", "'>'", "'!'", 
      "", "", "','", "'.'", "';'", "'{'", "'}'", "'['", "']'", "'GENERIC'"
    },
    std::vector<std::string>{
      "", "", "", "CLASS", "NAMESPACE", "INBUILD_TYPE", "TEMPLATE", "ASYNC", 
      "SYNC", "INTERNAL", "NULL", "CUSTOM_KEYWORD", "CUSTOM_FLOW_CONTROL", 
      "CUSTOM_OPERATOR", "ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "MOD", 
      "HASH", "DEREF", "INCREMENT", "DECREMENT", "B_LEFT", "B_RIGHT", "EQUALS", 
      "LESS", "LARGER", "NOT", "LESS_EQ", "LARGER_EQ", "COMMA", "DOT", "SEMI", 
      "LC", "RC", "LA", "RA", "ATRIBUTE", "INT", "FLOAT", "CHAR", "STRING", 
      "BOOL", "COMMENT", "WS", "ID", "TEMPLATE_PARAM"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,317,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,4,0,56,8,0,11,
  	0,12,0,57,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	3,1,75,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,6,3,6,95,8,6,1,6,1,6,1,6,1,6,5,6,101,8,6,10,6,12,6,104,9,
  	6,1,6,1,6,1,7,1,7,3,7,110,8,7,1,8,3,8,113,8,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	1,8,1,9,1,9,3,9,124,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,5,10,134,8,10,
  	10,10,12,10,137,9,10,1,10,1,10,1,10,1,10,3,10,143,8,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,3,11,152,8,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,3,12,162,8,12,1,13,1,13,1,13,3,13,167,8,13,1,13,1,13,1,13,1,13,1,
  	13,3,13,174,8,13,1,13,1,13,1,13,3,13,179,8,13,1,14,1,14,1,14,5,14,184,
  	8,14,10,14,12,14,187,9,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,3,16,202,8,16,1,17,1,17,1,17,1,17,1,17,1,17,5,17,
  	210,8,17,10,17,12,17,213,9,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,5,18,226,8,18,10,18,12,18,229,9,18,1,18,1,18,3,18,233,
  	8,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,242,8,19,10,19,12,19,245,
  	9,19,3,19,247,8,19,1,19,1,19,1,19,1,19,1,19,1,19,3,19,255,8,19,1,19,1,
  	19,1,19,5,19,260,8,19,10,19,12,19,263,9,19,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,3,20,275,8,20,1,21,1,21,1,21,1,22,1,22,1,22,1,
  	22,1,22,1,22,1,22,1,23,1,23,1,23,5,23,290,8,23,10,23,12,23,293,9,23,1,
  	23,3,23,296,8,23,1,24,1,24,1,25,1,25,1,25,5,25,303,8,25,10,25,12,25,306,
  	9,25,1,26,1,26,5,26,310,8,26,10,26,12,26,313,9,26,1,26,1,26,1,26,0,1,
  	38,27,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,0,3,1,0,7,8,1,0,15,19,2,0,43,43,47,47,337,0,55,1,0,0,0,2,
  	74,1,0,0,0,4,76,1,0,0,0,6,80,1,0,0,0,8,85,1,0,0,0,10,89,1,0,0,0,12,94,
  	1,0,0,0,14,109,1,0,0,0,16,112,1,0,0,0,18,121,1,0,0,0,20,135,1,0,0,0,22,
  	146,1,0,0,0,24,161,1,0,0,0,26,178,1,0,0,0,28,180,1,0,0,0,30,188,1,0,0,
  	0,32,201,1,0,0,0,34,203,1,0,0,0,36,232,1,0,0,0,38,254,1,0,0,0,40,274,
  	1,0,0,0,42,276,1,0,0,0,44,279,1,0,0,0,46,295,1,0,0,0,48,297,1,0,0,0,50,
  	299,1,0,0,0,52,307,1,0,0,0,54,56,3,2,1,0,55,54,1,0,0,0,56,57,1,0,0,0,
  	57,55,1,0,0,0,57,58,1,0,0,0,58,59,1,0,0,0,59,60,5,0,0,1,60,1,1,0,0,0,
  	61,75,3,8,4,0,62,75,3,6,3,0,63,75,3,4,2,0,64,75,3,10,5,0,65,75,3,12,6,
  	0,66,75,3,18,9,0,67,75,3,16,8,0,68,75,3,22,11,0,69,75,3,20,10,0,70,75,
  	3,32,16,0,71,75,3,42,21,0,72,75,3,52,26,0,73,75,3,26,13,0,74,61,1,0,0,
  	0,74,62,1,0,0,0,74,63,1,0,0,0,74,64,1,0,0,0,74,65,1,0,0,0,74,66,1,0,0,
  	0,74,67,1,0,0,0,74,68,1,0,0,0,74,69,1,0,0,0,74,70,1,0,0,0,74,71,1,0,0,
  	0,74,72,1,0,0,0,74,73,1,0,0,0,75,3,1,0,0,0,76,77,5,11,0,0,77,78,5,47,
  	0,0,78,79,3,52,26,0,79,5,1,0,0,0,80,81,3,36,18,0,81,82,5,13,0,0,82,83,
  	5,47,0,0,83,84,3,52,26,0,84,7,1,0,0,0,85,86,5,12,0,0,86,87,5,47,0,0,87,
  	88,3,52,26,0,88,9,1,0,0,0,89,90,5,4,0,0,90,91,5,47,0,0,91,92,3,52,26,
  	0,92,11,1,0,0,0,93,95,3,34,17,0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,0,
  	0,0,96,97,5,3,0,0,97,98,5,47,0,0,98,102,5,35,0,0,99,101,3,14,7,0,100,
  	99,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,105,1,
  	0,0,0,104,102,1,0,0,0,105,106,5,36,0,0,106,13,1,0,0,0,107,110,3,20,10,
  	0,108,110,3,16,8,0,109,107,1,0,0,0,109,108,1,0,0,0,110,15,1,0,0,0,111,
  	113,7,0,0,0,112,111,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,115,3,
  	36,18,0,115,116,5,47,0,0,116,117,5,1,0,0,117,118,3,28,14,0,118,119,5,
  	2,0,0,119,120,3,52,26,0,120,17,1,0,0,0,121,123,3,44,22,0,122,124,7,0,
  	0,0,123,122,1,0,0,0,123,124,1,0,0,0,124,125,1,0,0,0,125,126,3,36,18,0,
  	126,127,5,47,0,0,127,128,5,1,0,0,128,129,3,28,14,0,129,130,5,2,0,0,130,
  	131,3,52,26,0,131,19,1,0,0,0,132,134,3,44,22,0,133,132,1,0,0,0,134,137,
  	1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,138,1,0,0,0,137,135,1,0,0,
  	0,138,139,3,36,18,0,139,142,5,47,0,0,140,141,5,14,0,0,141,143,3,38,19,
  	0,142,140,1,0,0,0,142,143,1,0,0,0,143,144,1,0,0,0,144,145,5,34,0,0,145,
  	21,1,0,0,0,146,147,3,44,22,0,147,148,3,36,18,0,148,151,5,47,0,0,149,150,
  	5,14,0,0,150,152,3,38,19,0,151,149,1,0,0,0,151,152,1,0,0,0,152,153,1,
  	0,0,0,153,154,5,34,0,0,154,23,1,0,0,0,155,156,5,47,0,0,156,157,5,33,0,
  	0,157,162,5,47,0,0,158,159,5,47,0,0,159,160,5,21,0,0,160,162,5,47,0,0,
  	161,155,1,0,0,0,161,158,1,0,0,0,162,25,1,0,0,0,163,164,5,47,0,0,164,166,
  	5,1,0,0,165,167,3,38,19,0,166,165,1,0,0,0,166,167,1,0,0,0,167,168,1,0,
  	0,0,168,169,5,2,0,0,169,179,5,34,0,0,170,171,3,24,12,0,171,173,5,1,0,
  	0,172,174,3,38,19,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,
  	176,5,2,0,0,176,177,5,34,0,0,177,179,1,0,0,0,178,163,1,0,0,0,178,170,
  	1,0,0,0,179,27,1,0,0,0,180,185,3,30,15,0,181,182,5,32,0,0,182,184,3,30,
  	15,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,0,
  	186,29,1,0,0,0,187,185,1,0,0,0,188,189,3,36,18,0,189,190,5,47,0,0,190,
  	31,1,0,0,0,191,192,5,47,0,0,192,193,5,14,0,0,193,194,3,38,19,0,194,195,
  	5,34,0,0,195,202,1,0,0,0,196,197,3,38,19,0,197,198,5,14,0,0,198,199,3,
  	38,19,0,199,200,5,34,0,0,200,202,1,0,0,0,201,191,1,0,0,0,201,196,1,0,
  	0,0,202,33,1,0,0,0,203,204,5,6,0,0,204,205,5,27,0,0,205,206,5,3,0,0,206,
  	211,5,48,0,0,207,208,5,32,0,0,208,210,5,48,0,0,209,207,1,0,0,0,210,213,
  	1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,214,1,0,0,0,213,211,1,0,0,
  	0,214,215,5,28,0,0,215,35,1,0,0,0,216,233,5,5,0,0,217,233,5,47,0,0,218,
  	219,5,6,0,0,219,220,5,27,0,0,220,221,5,3,0,0,221,227,3,36,18,0,222,223,
  	5,32,0,0,223,224,5,3,0,0,224,226,3,36,18,0,225,222,1,0,0,0,226,229,1,
  	0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,
  	230,231,5,28,0,0,231,233,1,0,0,0,232,216,1,0,0,0,232,217,1,0,0,0,232,
  	218,1,0,0,0,233,37,1,0,0,0,234,235,6,19,-1,0,235,255,3,40,20,0,236,237,
  	5,47,0,0,237,246,5,1,0,0,238,243,3,38,19,0,239,240,5,32,0,0,240,242,3,
  	38,19,0,241,239,1,0,0,0,242,245,1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,
  	0,244,247,1,0,0,0,245,243,1,0,0,0,246,238,1,0,0,0,246,247,1,0,0,0,247,
  	248,1,0,0,0,248,255,5,2,0,0,249,250,5,47,0,0,250,255,5,22,0,0,251,252,
  	5,47,0,0,252,255,5,23,0,0,253,255,3,24,12,0,254,234,1,0,0,0,254,236,1,
  	0,0,0,254,249,1,0,0,0,254,251,1,0,0,0,254,253,1,0,0,0,255,261,1,0,0,0,
  	256,257,10,5,0,0,257,258,7,1,0,0,258,260,3,38,19,6,259,256,1,0,0,0,260,
  	263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,39,1,0,0,0,263,261,1,
  	0,0,0,264,275,5,40,0,0,265,275,5,41,0,0,266,275,5,44,0,0,267,275,5,43,
  	0,0,268,275,5,42,0,0,269,275,5,47,0,0,270,271,5,1,0,0,271,272,3,38,19,
  	0,272,273,5,2,0,0,273,275,1,0,0,0,274,264,1,0,0,0,274,265,1,0,0,0,274,
  	266,1,0,0,0,274,267,1,0,0,0,274,268,1,0,0,0,274,269,1,0,0,0,274,270,1,
  	0,0,0,275,41,1,0,0,0,276,277,3,38,19,0,277,278,5,34,0,0,278,43,1,0,0,
  	0,279,280,5,37,0,0,280,281,5,39,0,0,281,282,5,1,0,0,282,283,3,46,23,0,
  	283,284,5,2,0,0,284,285,5,38,0,0,285,45,1,0,0,0,286,291,3,48,24,0,287,
  	288,5,32,0,0,288,290,3,48,24,0,289,287,1,0,0,0,290,293,1,0,0,0,291,289,
  	1,0,0,0,291,292,1,0,0,0,292,296,1,0,0,0,293,291,1,0,0,0,294,296,3,50,
  	25,0,295,286,1,0,0,0,295,294,1,0,0,0,296,47,1,0,0,0,297,298,7,2,0,0,298,
  	49,1,0,0,0,299,304,5,47,0,0,300,301,5,32,0,0,301,303,5,47,0,0,302,300,
  	1,0,0,0,303,306,1,0,0,0,304,302,1,0,0,0,304,305,1,0,0,0,305,51,1,0,0,
  	0,306,304,1,0,0,0,307,311,5,35,0,0,308,310,3,2,1,0,309,308,1,0,0,0,310,
  	313,1,0,0,0,311,309,1,0,0,0,311,312,1,0,0,0,312,314,1,0,0,0,313,311,1,
  	0,0,0,314,315,5,36,0,0,315,53,1,0,0,0,28,57,74,94,102,109,112,123,135,
  	142,151,161,166,173,178,185,201,211,227,232,243,246,254,261,274,291,295,
  	304,311
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


std::any USLParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
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
    setState(55); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(54);
      statement();
      setState(57); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 174994147514874) != 0));
    setState(59);
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

USLParser::FuncCallContext* USLParser::StatementContext::funcCall() {
  return getRuleContext<USLParser::FuncCallContext>(0);
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


std::any USLParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
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
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(61);
      customControlFlowDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(62);
      customOperatorDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(63);
      customKeyDeclaration();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(64);
      namespaceDeclaration();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(65);
      classDeclaration();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(66);
      functionDeclarationWithAtr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(67);
      functionDeclaration();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(68);
      varDeclarationWithAtr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(69);
      varDeclaration();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(70);
      assignment();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(71);
      expressionStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(72);
      block();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(73);
      funcCall();
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


std::any USLParser::CustomKeyDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCustomKeyDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(76);
    match(USLParser::CUSTOM_KEYWORD);
    setState(77);
    match(USLParser::ID);
    setState(78);
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

USLParser::TypeSpecifierContext* USLParser::CustomOperatorDeclarationContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
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


std::any USLParser::CustomOperatorDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCustomOperatorDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(80);
    typeSpecifier();
    setState(81);
    match(USLParser::CUSTOM_OPERATOR);
    setState(82);
    match(USLParser::ID);
    setState(83);
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


std::any USLParser::CustomControlFlowDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitCustomControlFlowDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(85);
    match(USLParser::CUSTOM_FLOW_CONTROL);
    setState(86);
    match(USLParser::ID);
    setState(87);
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


std::any USLParser::NamespaceDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitNamespaceDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(89);
    match(USLParser::NAMESPACE);
    setState(90);
    match(USLParser::ID);
    setState(91);
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

USLParser::TemplateDeclarationContext* USLParser::ClassDeclarationContext::templateDeclaration() {
  return getRuleContext<USLParser::TemplateDeclarationContext>(0);
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


std::any USLParser::ClassDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitClassDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TEMPLATE) {
      setState(93);
      templateDeclaration();
    }
    setState(96);
    match(USLParser::CLASS);
    setState(97);
    match(USLParser::ID);
    setState(98);
    match(USLParser::LC);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 140874927309280) != 0)) {
      setState(99);
      classMember();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
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


std::any USLParser::ClassMemberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitClassMember(this);
  else
    return visitor->visitChildren(this);
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
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      varDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
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

USLParser::TypeSpecifierContext* USLParser::FunctionDeclarationContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::ParameterListContext* USLParser::FunctionDeclarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
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


std::any USLParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASYNC

    || _la == USLParser::SYNC) {
      setState(111);
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
    setState(114);
    typeSpecifier();
    setState(115);
    match(USLParser::ID);
    setState(116);
    match(USLParser::T__0);
    setState(117);
    parameterList();
    setState(118);
    match(USLParser::T__1);
    setState(119);
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

USLParser::TypeSpecifierContext* USLParser::FunctionDeclarationWithAtrContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
}

tree::TerminalNode* USLParser::FunctionDeclarationWithAtrContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::ParameterListContext* USLParser::FunctionDeclarationWithAtrContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
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


std::any USLParser::FunctionDeclarationWithAtrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclarationWithAtr(this);
  else
    return visitor->visitChildren(this);
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
    setState(121);
    attribute();
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASYNC

    || _la == USLParser::SYNC) {
      setState(122);
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
    setState(125);
    typeSpecifier();
    setState(126);
    match(USLParser::ID);
    setState(127);
    match(USLParser::T__0);
    setState(128);
    parameterList();
    setState(129);
    match(USLParser::T__1);
    setState(130);
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

USLParser::TypeSpecifierContext* USLParser::VarDeclarationContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
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


std::any USLParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(135);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::LA) {
      setState(132);
      attribute();
      setState(137);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(138);
    typeSpecifier();
    setState(139);
    match(USLParser::ID);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN) {
      setState(140);
      match(USLParser::ASSIGN);
      setState(141);
      expression(0);
    }
    setState(144);
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

USLParser::TypeSpecifierContext* USLParser::VarDeclarationWithAtrContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
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


std::any USLParser::VarDeclarationWithAtrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitVarDeclarationWithAtr(this);
  else
    return visitor->visitChildren(this);
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
    setState(146);
    attribute();
    setState(147);
    typeSpecifier();
    setState(148);
    match(USLParser::ID);
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN) {
      setState(149);
      match(USLParser::ASSIGN);
      setState(150);
      expression(0);
    }
    setState(153);
    match(USLParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccesContext ------------------------------------------------------------------

USLParser::MemberAccesContext::MemberAccesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::MemberAccesContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::MemberAccesContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

tree::TerminalNode* USLParser::MemberAccesContext::DOT() {
  return getToken(USLParser::DOT, 0);
}

tree::TerminalNode* USLParser::MemberAccesContext::DEREF() {
  return getToken(USLParser::DEREF, 0);
}


size_t USLParser::MemberAccesContext::getRuleIndex() const {
  return USLParser::RuleMemberAcces;
}

void USLParser::MemberAccesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAcces(this);
}

void USLParser::MemberAccesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAcces(this);
}


std::any USLParser::MemberAccesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitMemberAcces(this);
  else
    return visitor->visitChildren(this);
}

USLParser::MemberAccesContext* USLParser::memberAcces() {
  MemberAccesContext *_localctx = _tracker.createInstance<MemberAccesContext>(_ctx, getState());
  enterRule(_localctx, 24, USLParser::RuleMemberAcces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(155);
      match(USLParser::ID);
      setState(156);
      match(USLParser::DOT);
      setState(157);
      match(USLParser::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(158);
      match(USLParser::ID);
      setState(159);
      match(USLParser::DEREF);
      setState(160);
      match(USLParser::ID);
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

//----------------- FuncCallContext ------------------------------------------------------------------

USLParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::FuncCallContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::FuncCallContext::SEMI() {
  return getToken(USLParser::SEMI, 0);
}

USLParser::ExpressionContext* USLParser::FuncCallContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}

USLParser::MemberAccesContext* USLParser::FuncCallContext::memberAcces() {
  return getRuleContext<USLParser::MemberAccesContext>(0);
}


size_t USLParser::FuncCallContext::getRuleIndex() const {
  return USLParser::RuleFuncCall;
}

void USLParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void USLParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}


std::any USLParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}

USLParser::FuncCallContext* USLParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 26, USLParser::RuleFuncCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      match(USLParser::ID);
      setState(164);
      match(USLParser::T__0);
      setState(166);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 174822348816386) != 0)) {
        setState(165);
        expression(0);
      }
      setState(168);
      match(USLParser::T__1);
      setState(169);
      match(USLParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      memberAcces();
      setState(171);
      match(USLParser::T__0);
      setState(173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 174822348816386) != 0)) {
        setState(172);
        expression(0);
      }
      setState(175);
      match(USLParser::T__1);
      setState(176);
      match(USLParser::SEMI);
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


std::any USLParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ParameterListContext* USLParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 28, USLParser::RuleParameterList);
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
    setState(180);
    parameter();
    setState(185);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::COMMA) {
      setState(181);
      match(USLParser::COMMA);
      setState(182);
      parameter();
      setState(187);
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

USLParser::TypeSpecifierContext* USLParser::ParameterContext::typeSpecifier() {
  return getRuleContext<USLParser::TypeSpecifierContext>(0);
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


std::any USLParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ParameterContext* USLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 30, USLParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    typeSpecifier();
    setState(189);
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

std::vector<USLParser::ExpressionContext *> USLParser::AssignmentContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::AssignmentContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
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


std::any USLParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

USLParser::AssignmentContext* USLParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 32, USLParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      match(USLParser::ID);
      setState(192);
      match(USLParser::ASSIGN);
      setState(193);
      expression(0);
      setState(194);
      match(USLParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
      expression(0);
      setState(197);
      match(USLParser::ASSIGN);
      setState(198);
      expression(0);
      setState(199);
      match(USLParser::SEMI);
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

//----------------- TemplateDeclarationContext ------------------------------------------------------------------

USLParser::TemplateDeclarationContext::TemplateDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::TEMPLATE() {
  return getToken(USLParser::TEMPLATE, 0);
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::CLASS() {
  return getToken(USLParser::CLASS, 0);
}

std::vector<tree::TerminalNode *> USLParser::TemplateDeclarationContext::TEMPLATE_PARAM() {
  return getTokens(USLParser::TEMPLATE_PARAM);
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::TEMPLATE_PARAM(size_t i) {
  return getToken(USLParser::TEMPLATE_PARAM, i);
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}

std::vector<tree::TerminalNode *> USLParser::TemplateDeclarationContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::TemplateDeclarationContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}


size_t USLParser::TemplateDeclarationContext::getRuleIndex() const {
  return USLParser::RuleTemplateDeclaration;
}

void USLParser::TemplateDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTemplateDeclaration(this);
}

void USLParser::TemplateDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTemplateDeclaration(this);
}


std::any USLParser::TemplateDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitTemplateDeclaration(this);
  else
    return visitor->visitChildren(this);
}

USLParser::TemplateDeclarationContext* USLParser::templateDeclaration() {
  TemplateDeclarationContext *_localctx = _tracker.createInstance<TemplateDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, USLParser::RuleTemplateDeclaration);
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
    setState(203);
    match(USLParser::TEMPLATE);
    setState(204);
    match(USLParser::LESS);
    setState(205);
    match(USLParser::CLASS);
    setState(206);
    match(USLParser::TEMPLATE_PARAM);
    setState(211);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::COMMA) {
      setState(207);
      match(USLParser::COMMA);
      setState(208);
      match(USLParser::TEMPLATE_PARAM);
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(214);
    match(USLParser::LARGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

USLParser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::TypeSpecifierContext::INBUILD_TYPE() {
  return getToken(USLParser::INBUILD_TYPE, 0);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::TEMPLATE() {
  return getToken(USLParser::TEMPLATE, 0);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

std::vector<tree::TerminalNode *> USLParser::TypeSpecifierContext::CLASS() {
  return getTokens(USLParser::CLASS);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::CLASS(size_t i) {
  return getToken(USLParser::CLASS, i);
}

std::vector<USLParser::TypeSpecifierContext *> USLParser::TypeSpecifierContext::typeSpecifier() {
  return getRuleContexts<USLParser::TypeSpecifierContext>();
}

USLParser::TypeSpecifierContext* USLParser::TypeSpecifierContext::typeSpecifier(size_t i) {
  return getRuleContext<USLParser::TypeSpecifierContext>(i);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}

std::vector<tree::TerminalNode *> USLParser::TypeSpecifierContext::COMMA() {
  return getTokens(USLParser::COMMA);
}

tree::TerminalNode* USLParser::TypeSpecifierContext::COMMA(size_t i) {
  return getToken(USLParser::COMMA, i);
}


size_t USLParser::TypeSpecifierContext::getRuleIndex() const {
  return USLParser::RuleTypeSpecifier;
}

void USLParser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void USLParser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<USLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


std::any USLParser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

USLParser::TypeSpecifierContext* USLParser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 36, USLParser::RuleTypeSpecifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INBUILD_TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(216);
        match(USLParser::INBUILD_TYPE);
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(217);
        match(USLParser::ID);
        break;
      }

      case USLParser::TEMPLATE: {
        enterOuterAlt(_localctx, 3);
        setState(218);
        match(USLParser::TEMPLATE);
        setState(219);
        match(USLParser::LESS);
        setState(220);
        match(USLParser::CLASS);
        setState(221);
        typeSpecifier();
        setState(227);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::COMMA) {
          setState(222);
          match(USLParser::COMMA);

          setState(223);
          match(USLParser::CLASS);
          setState(224);
          typeSpecifier();
          setState(229);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(230);
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

USLParser::MemberAccesContext* USLParser::ExpressionContext::memberAcces() {
  return getRuleContext<USLParser::MemberAccesContext>(0);
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


std::any USLParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, USLParser::RuleExpression, precedence);

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
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(235);
      primary();
      break;
    }

    case 2: {
      setState(236);
      match(USLParser::ID);
      setState(237);
      match(USLParser::T__0);
      setState(246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 174822348816386) != 0)) {
        setState(238);
        expression(0);
        setState(243);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == USLParser::COMMA) {
          setState(239);
          match(USLParser::COMMA);
          setState(240);
          expression(0);
          setState(245);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(248);
      match(USLParser::T__1);
      break;
    }

    case 3: {
      setState(249);
      match(USLParser::ID);
      setState(250);
      match(USLParser::INCREMENT);
      break;
    }

    case 4: {
      setState(251);
      match(USLParser::ID);
      setState(252);
      match(USLParser::DECREMENT);
      break;
    }

    case 5: {
      setState(253);
      memberAcces();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(256);

        if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
        setState(257);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1015808) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(258);
        expression(6); 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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

USLParser::ExpressionContext* USLParser::PrimaryContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
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


std::any USLParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

USLParser::PrimaryContext* USLParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 40, USLParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(264);
        match(USLParser::INT);
        break;
      }

      case USLParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(265);
        match(USLParser::FLOAT);
        break;
      }

      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 3);
        setState(266);
        match(USLParser::BOOL);
        break;
      }

      case USLParser::STRING: {
        enterOuterAlt(_localctx, 4);
        setState(267);
        match(USLParser::STRING);
        break;
      }

      case USLParser::CHAR: {
        enterOuterAlt(_localctx, 5);
        setState(268);
        match(USLParser::CHAR);
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 6);
        setState(269);
        match(USLParser::ID);
        break;
      }

      case USLParser::T__0: {
        enterOuterAlt(_localctx, 7);
        setState(270);
        match(USLParser::T__0);
        setState(271);
        expression(0);
        setState(272);
        match(USLParser::T__1);
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


std::any USLParser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

USLParser::ExpressionStatementContext* USLParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, USLParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    expression(0);
    setState(277);
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

USLParser::AttributeParameterListContext* USLParser::AttributeContext::attributeParameterList() {
  return getRuleContext<USLParser::AttributeParameterListContext>(0);
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


std::any USLParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

USLParser::AttributeContext* USLParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 44, USLParser::RuleAttribute);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(USLParser::LA);
    setState(280);
    match(USLParser::ATRIBUTE);
    setState(281);
    match(USLParser::T__0);
    setState(282);
    attributeParameterList();
    setState(283);
    match(USLParser::T__1);
    setState(284);
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


std::any USLParser::AttributeParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttributeParameterList(this);
  else
    return visitor->visitChildren(this);
}

USLParser::AttributeParameterListContext* USLParser::attributeParameterList() {
  AttributeParameterListContext *_localctx = _tracker.createInstance<AttributeParameterListContext>(_ctx, getState());
  enterRule(_localctx, 46, USLParser::RuleAttributeParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(286);
      attributeParameter();
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::COMMA) {
        setState(287);
        match(USLParser::COMMA);
        setState(288);
        attributeParameter();
        setState(293);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(294);
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


std::any USLParser::AttributeParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitAttributeParameter(this);
  else
    return visitor->visitChildren(this);
}

USLParser::AttributeParameterContext* USLParser::attributeParameter() {
  AttributeParameterContext *_localctx = _tracker.createInstance<AttributeParameterContext>(_ctx, getState());
  enterRule(_localctx, 48, USLParser::RuleAttributeParameter);
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
    setState(297);
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


std::any USLParser::GenericParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitGenericParameterList(this);
  else
    return visitor->visitChildren(this);
}

USLParser::GenericParameterListContext* USLParser::genericParameterList() {
  GenericParameterListContext *_localctx = _tracker.createInstance<GenericParameterListContext>(_ctx, getState());
  enterRule(_localctx, 50, USLParser::RuleGenericParameterList);
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
    setState(299);
    match(USLParser::ID);
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::COMMA) {
      setState(300);
      match(USLParser::COMMA);
      setState(301);
      match(USLParser::ID);
      setState(306);
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


std::any USLParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<USLVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

USLParser::BlockContext* USLParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 52, USLParser::RuleBlock);
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
    setState(307);
    match(USLParser::LC);
    setState(311);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 174994147514874) != 0)) {
      setState(308);
      statement();
      setState(313);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
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
    case 19: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool USLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);

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
