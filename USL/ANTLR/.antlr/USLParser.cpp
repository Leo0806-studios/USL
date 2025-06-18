
// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.2



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
      "program", "global_statement", "statement", "expression", "basic_block", 
      "class_delcaratiom", "namespace_declaration", "atribute_declaration", 
      "function_declaration", "enum_declaration", "var_declaration", "custom_opperator_sym", 
      "noexcept_specifyer", "assignment_expr", "equality_expr", "comparison_expr", 
      "bitshift_expr", "additive_expr", "multiplicative_expr", "unary_expr", 
      "primary_expr", "function_call", "atribute_constructor", "atrribute_requires", 
      "implements_function", "implements_Var", "primitives", "integral_type", 
      "litteral", "type", "parameter", "parameterList", "classmember_declaration", 
      "operator_symbols", "scope_ressolution"
    },
    std::vector<std::string>{
      "", "';'", "'{'", "'}'", "'('", "')'", "':'", "','", "'namespace'", 
      "'class'", "'enum'", "'atribute'", "'byte'", "'short'", "'int'", "'long'", 
      "'float'", "'double'", "'hash'", "'string'", "'char'", "'void'", "'null'", 
      "'bool'", "", "'template'", "'async'", "'sync'", "'_internal'", "'operator'", 
      "'unsafe'", "'stack_alloc'", "'reinterpret_cast'", "'static_cast'", 
      "'unsafe_cast'", "'def_operator'", "'def_keyword'", "'def_flow'", 
      "", "'static'", "'virtual'", "'noexcept'", "'override'", "'nullptr'", 
      "'return'", "'requires'", "'auto'", "'call'", "'='", "'+'", "'-'", 
      "'*'", "'/'", "'%'", "'#'", "'->'", "'++'", "'--'", "'<<'", "'>>'", 
      "'=='", "'<'", "'>'", "'!'", "", "", "'::'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "NAMESPACE", "CLASS", "ENUM", "ATRIBUTE", 
      "BYTE", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "HASH", "STRING", 
      "CHAR", "VOID", "NULL", "BOOL", "SIGNDNES", "TEMPLATE", "ASYNC", "SYNC", 
      "INTERNAL", "OPPERATOR", "UNSAFE", "STACK_ALLOC", "REINTERPRET_CAST", 
      "STATIC_CAST", "UNSAFE_CAST", "CUSTOM_OP", "CUSTOM_KEYWORD", "CUSTOM_CONTROL", 
      "TYPE_QUALIFYERS", "STATIC", "VIRTUAL", "NOEXCEPT", "OVERRIDE", "NULLPTR", 
      "RETURN", "REQUIRES", "AUTO", "CALL", "ASSIGN_OP", "PLUS_OP", "MINUS_OP", 
      "MULT_OP", "DIV_OP", "MOD_OP", "HASH_OP", "DEREF", "INCREMENT", "DECREMENT", 
      "B_LEFT", "B_RIGHT", "EQUALS", "LESS", "LARGER", "NOT", "LESS_EQ", 
      "LARGER_EQ", "SCOPE_RESSOLUTION_OP", "INT_LITTERAL", "FLOAT_LITTERAL", 
      "CHAR_LITTERAL", "STRING_LITTERAL", "BOOL_LITTERAL", "COMMENT", "WS", 
      "ID", "CUSTOM_OP_SYMBOLS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,75,390,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,4,
  	0,72,8,0,11,0,12,0,73,1,0,1,0,1,1,1,1,1,1,1,1,3,1,82,8,1,1,2,1,2,1,2,
  	3,2,87,8,2,1,2,1,2,1,3,1,3,1,4,1,4,5,4,95,8,4,10,4,12,4,98,9,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,5,5,106,8,5,10,5,12,5,109,9,5,1,5,1,5,1,6,1,6,1,6,1,
  	6,5,6,117,8,6,10,6,12,6,120,9,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,128,8,7,1,
  	7,3,7,131,8,7,1,7,1,7,1,8,3,8,136,8,8,1,8,5,8,139,8,8,10,8,12,8,142,9,
  	8,1,8,3,8,145,8,8,1,8,1,8,3,8,149,8,8,1,8,1,8,1,8,3,8,154,8,8,1,8,1,8,
  	3,8,158,8,8,1,8,3,8,161,8,8,1,8,1,8,5,8,165,8,8,10,8,12,8,168,9,8,1,8,
  	1,8,1,9,1,9,1,9,3,9,175,8,9,1,9,1,9,1,9,1,9,3,9,181,8,9,1,9,1,9,1,9,1,
  	9,3,9,187,8,9,5,9,189,8,9,10,9,12,9,192,9,9,1,9,1,9,1,10,3,10,197,8,10,
  	1,10,3,10,200,8,10,1,10,1,10,1,10,1,10,5,10,206,8,10,10,10,12,10,209,
  	9,10,1,10,1,10,1,10,3,10,214,8,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,
  	222,8,11,1,11,1,11,1,11,5,11,227,8,11,10,11,12,11,230,9,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,3,13,242,8,13,1,14,1,14,1,14,
  	5,14,247,8,14,10,14,12,14,250,9,14,1,15,1,15,1,15,5,15,255,8,15,10,15,
  	12,15,258,9,15,1,16,1,16,1,16,5,16,263,8,16,10,16,12,16,266,9,16,1,17,
  	1,17,1,17,5,17,271,8,17,10,17,12,17,274,9,17,1,18,1,18,1,18,5,18,279,
  	8,18,10,18,12,18,282,9,18,1,19,3,19,285,8,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,3,20,296,8,20,1,21,1,21,3,21,300,8,21,1,21,1,21,1,
  	21,1,21,1,21,5,21,307,8,21,10,21,12,21,310,9,21,3,21,312,8,21,1,21,1,
  	21,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,5,23,325,8,23,10,23,12,
  	23,328,9,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,
  	26,1,26,1,27,3,27,344,8,27,1,27,1,27,1,28,1,28,1,29,1,29,3,29,352,8,29,
  	1,29,3,29,355,8,29,1,30,5,30,358,8,30,10,30,12,30,361,9,30,1,30,1,30,
  	1,30,1,31,1,31,1,31,5,31,369,8,31,10,31,12,31,372,9,31,1,32,1,32,3,32,
  	376,8,32,1,33,1,33,1,34,1,34,1,34,5,34,383,8,34,10,34,12,34,386,9,34,
  	1,34,1,34,1,34,0,0,35,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,0,10,2,0,60,60,63,
  	63,2,0,61,62,64,65,1,0,58,59,1,0,49,50,1,0,51,53,2,0,49,50,63,63,2,0,
  	12,20,23,23,1,0,12,14,1,0,67,71,2,0,56,65,75,75,406,0,71,1,0,0,0,2,81,
  	1,0,0,0,4,86,1,0,0,0,6,90,1,0,0,0,8,92,1,0,0,0,10,101,1,0,0,0,12,112,
  	1,0,0,0,14,123,1,0,0,0,16,135,1,0,0,0,18,171,1,0,0,0,20,196,1,0,0,0,22,
  	215,1,0,0,0,24,233,1,0,0,0,26,238,1,0,0,0,28,243,1,0,0,0,30,251,1,0,0,
  	0,32,259,1,0,0,0,34,267,1,0,0,0,36,275,1,0,0,0,38,284,1,0,0,0,40,295,
  	1,0,0,0,42,297,1,0,0,0,44,315,1,0,0,0,46,320,1,0,0,0,48,331,1,0,0,0,50,
  	337,1,0,0,0,52,340,1,0,0,0,54,343,1,0,0,0,56,347,1,0,0,0,58,354,1,0,0,
  	0,60,359,1,0,0,0,62,365,1,0,0,0,64,375,1,0,0,0,66,377,1,0,0,0,68,379,
  	1,0,0,0,70,72,3,2,1,0,71,70,1,0,0,0,72,73,1,0,0,0,73,71,1,0,0,0,73,74,
  	1,0,0,0,74,75,1,0,0,0,75,76,5,0,0,1,76,1,1,0,0,0,77,82,3,10,5,0,78,82,
  	3,12,6,0,79,82,3,18,9,0,80,82,3,4,2,0,81,77,1,0,0,0,81,78,1,0,0,0,81,
  	79,1,0,0,0,81,80,1,0,0,0,82,3,1,0,0,0,83,87,3,20,10,0,84,87,3,16,8,0,
  	85,87,3,6,3,0,86,83,1,0,0,0,86,84,1,0,0,0,86,85,1,0,0,0,87,88,1,0,0,0,
  	88,89,5,1,0,0,89,5,1,0,0,0,90,91,3,26,13,0,91,7,1,0,0,0,92,96,5,2,0,0,
  	93,95,3,4,2,0,94,93,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,
  	97,99,1,0,0,0,98,96,1,0,0,0,99,100,5,3,0,0,100,9,1,0,0,0,101,102,5,9,
  	0,0,102,103,5,74,0,0,103,107,5,2,0,0,104,106,3,4,2,0,105,104,1,0,0,0,
  	106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,0,109,107,
  	1,0,0,0,110,111,5,3,0,0,111,11,1,0,0,0,112,113,5,8,0,0,113,114,5,74,0,
  	0,114,118,5,2,0,0,115,117,3,2,1,0,116,115,1,0,0,0,117,120,1,0,0,0,118,
  	116,1,0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,118,1,0,0,0,121,122,5,
  	3,0,0,122,13,1,0,0,0,123,124,5,11,0,0,124,125,5,74,0,0,125,127,5,2,0,
  	0,126,128,3,44,22,0,127,126,1,0,0,0,127,128,1,0,0,0,128,130,1,0,0,0,129,
  	131,3,46,23,0,130,129,1,0,0,0,130,131,1,0,0,0,131,132,1,0,0,0,132,133,
  	5,3,0,0,133,15,1,0,0,0,134,136,5,39,0,0,135,134,1,0,0,0,135,136,1,0,0,
  	0,136,140,1,0,0,0,137,139,5,38,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,
  	138,1,0,0,0,140,141,1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,143,145,5,
  	40,0,0,144,143,1,0,0,0,144,145,1,0,0,0,145,148,1,0,0,0,146,149,5,21,0,
  	0,147,149,3,58,29,0,148,146,1,0,0,0,148,147,1,0,0,0,149,150,1,0,0,0,150,
  	151,5,74,0,0,151,153,5,4,0,0,152,154,3,62,31,0,153,152,1,0,0,0,153,154,
  	1,0,0,0,154,155,1,0,0,0,155,157,5,5,0,0,156,158,3,24,12,0,157,156,1,0,
  	0,0,157,158,1,0,0,0,158,160,1,0,0,0,159,161,5,42,0,0,160,159,1,0,0,0,
  	160,161,1,0,0,0,161,162,1,0,0,0,162,166,5,2,0,0,163,165,3,4,2,0,164,163,
  	1,0,0,0,165,168,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,169,1,0,0,
  	0,168,166,1,0,0,0,169,170,5,3,0,0,170,17,1,0,0,0,171,174,5,10,0,0,172,
  	173,5,6,0,0,173,175,3,54,27,0,174,172,1,0,0,0,174,175,1,0,0,0,175,176,
  	1,0,0,0,176,177,5,2,0,0,177,180,5,74,0,0,178,179,5,48,0,0,179,181,5,67,
  	0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,190,1,0,0,0,182,183,5,7,0,0,183,
  	186,5,74,0,0,184,185,5,48,0,0,185,187,5,67,0,0,186,184,1,0,0,0,186,187,
  	1,0,0,0,187,189,1,0,0,0,188,182,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,
  	0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,194,5,3,0,0,194,
  	19,1,0,0,0,195,197,5,39,0,0,196,195,1,0,0,0,196,197,1,0,0,0,197,199,1,
  	0,0,0,198,200,5,38,0,0,199,198,1,0,0,0,199,200,1,0,0,0,200,201,1,0,0,
  	0,201,202,3,58,29,0,202,213,5,74,0,0,203,207,5,4,0,0,204,206,3,6,3,0,
  	205,204,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,210,
  	1,0,0,0,209,207,1,0,0,0,210,214,5,5,0,0,211,212,5,48,0,0,212,214,3,6,
  	3,0,213,203,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,21,1,0,0,0,215,
  	216,5,35,0,0,216,217,5,4,0,0,217,218,5,75,0,0,218,219,5,5,0,0,219,221,
  	5,4,0,0,220,222,3,62,31,0,221,220,1,0,0,0,221,222,1,0,0,0,222,223,1,0,
  	0,0,223,224,5,5,0,0,224,228,5,2,0,0,225,227,3,4,2,0,226,225,1,0,0,0,227,
  	230,1,0,0,0,228,226,1,0,0,0,228,229,1,0,0,0,229,231,1,0,0,0,230,228,1,
  	0,0,0,231,232,5,3,0,0,232,23,1,0,0,0,233,234,5,41,0,0,234,235,5,4,0,0,
  	235,236,5,71,0,0,236,237,5,5,0,0,237,25,1,0,0,0,238,241,3,28,14,0,239,
  	240,5,48,0,0,240,242,3,26,13,0,241,239,1,0,0,0,241,242,1,0,0,0,242,27,
  	1,0,0,0,243,248,3,30,15,0,244,245,7,0,0,0,245,247,3,30,15,0,246,244,1,
  	0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,1,0,0,0,249,29,1,0,0,0,
  	250,248,1,0,0,0,251,256,3,32,16,0,252,253,7,1,0,0,253,255,3,32,16,0,254,
  	252,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,31,1,
  	0,0,0,258,256,1,0,0,0,259,264,3,34,17,0,260,261,7,2,0,0,261,263,3,34,
  	17,0,262,260,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,
  	265,33,1,0,0,0,266,264,1,0,0,0,267,272,3,36,18,0,268,269,7,3,0,0,269,
  	271,3,36,18,0,270,268,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,
  	1,0,0,0,273,35,1,0,0,0,274,272,1,0,0,0,275,280,3,38,19,0,276,277,7,4,
  	0,0,277,279,3,38,19,0,278,276,1,0,0,0,279,282,1,0,0,0,280,278,1,0,0,0,
  	280,281,1,0,0,0,281,37,1,0,0,0,282,280,1,0,0,0,283,285,7,5,0,0,284,283,
  	1,0,0,0,284,285,1,0,0,0,285,286,1,0,0,0,286,287,3,40,20,0,287,39,1,0,
  	0,0,288,296,3,42,21,0,289,296,5,74,0,0,290,296,3,56,28,0,291,292,5,4,
  	0,0,292,293,3,6,3,0,293,294,5,5,0,0,294,296,1,0,0,0,295,288,1,0,0,0,295,
  	289,1,0,0,0,295,290,1,0,0,0,295,291,1,0,0,0,296,41,1,0,0,0,297,299,5,
  	47,0,0,298,300,3,68,34,0,299,298,1,0,0,0,299,300,1,0,0,0,300,301,1,0,
  	0,0,301,302,5,74,0,0,302,311,5,4,0,0,303,308,3,6,3,0,304,305,5,7,0,0,
  	305,307,3,6,3,0,306,304,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,308,309,
  	1,0,0,0,309,312,1,0,0,0,310,308,1,0,0,0,311,303,1,0,0,0,311,312,1,0,0,
  	0,312,313,1,0,0,0,313,314,5,5,0,0,314,43,1,0,0,0,315,316,3,58,29,0,316,
  	317,5,4,0,0,317,318,3,62,31,0,318,319,5,5,0,0,319,45,1,0,0,0,320,321,
  	5,45,0,0,321,326,5,2,0,0,322,325,3,48,24,0,323,325,3,50,25,0,324,322,
  	1,0,0,0,324,323,1,0,0,0,325,328,1,0,0,0,326,324,1,0,0,0,326,327,1,0,0,
  	0,327,329,1,0,0,0,328,326,1,0,0,0,329,330,5,3,0,0,330,47,1,0,0,0,331,
  	332,3,58,29,0,332,333,5,74,0,0,333,334,5,4,0,0,334,335,3,62,31,0,335,
  	336,5,5,0,0,336,49,1,0,0,0,337,338,3,58,29,0,338,339,5,74,0,0,339,51,
  	1,0,0,0,340,341,7,6,0,0,341,53,1,0,0,0,342,344,5,24,0,0,343,342,1,0,0,
  	0,343,344,1,0,0,0,344,345,1,0,0,0,345,346,7,7,0,0,346,55,1,0,0,0,347,
  	348,7,8,0,0,348,57,1,0,0,0,349,355,3,52,26,0,350,352,3,68,34,0,351,350,
  	1,0,0,0,351,352,1,0,0,0,352,353,1,0,0,0,353,355,5,74,0,0,354,349,1,0,
  	0,0,354,351,1,0,0,0,355,59,1,0,0,0,356,358,5,38,0,0,357,356,1,0,0,0,358,
  	361,1,0,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,362,1,0,0,0,361,359,1,
  	0,0,0,362,363,3,58,29,0,363,364,5,74,0,0,364,61,1,0,0,0,365,370,3,60,
  	30,0,366,367,5,7,0,0,367,369,3,60,30,0,368,366,1,0,0,0,369,372,1,0,0,
  	0,370,368,1,0,0,0,370,371,1,0,0,0,371,63,1,0,0,0,372,370,1,0,0,0,373,
  	376,3,16,8,0,374,376,3,20,10,0,375,373,1,0,0,0,375,374,1,0,0,0,376,65,
  	1,0,0,0,377,378,7,9,0,0,378,67,1,0,0,0,379,384,5,74,0,0,380,381,5,66,
  	0,0,381,383,5,74,0,0,382,380,1,0,0,0,383,386,1,0,0,0,384,382,1,0,0,0,
  	384,385,1,0,0,0,385,387,1,0,0,0,386,384,1,0,0,0,387,388,5,66,0,0,388,
  	69,1,0,0,0,46,73,81,86,96,107,118,127,130,135,140,144,148,153,157,160,
  	166,174,180,186,190,196,199,207,213,221,228,241,248,256,264,272,280,284,
  	295,299,308,311,324,326,343,351,354,359,370,375,384
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
    setState(71); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(70);
      global_statement();
      setState(73); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348227312) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0));
    setState(75);
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

USLParser::Class_delcaratiomContext* USLParser::Global_statementContext::class_delcaratiom() {
  return getRuleContext<USLParser::Class_delcaratiomContext>(0);
}

USLParser::Namespace_declarationContext* USLParser::Global_statementContext::namespace_declaration() {
  return getRuleContext<USLParser::Namespace_declarationContext>(0);
}

USLParser::Enum_declarationContext* USLParser::Global_statementContext::enum_declaration() {
  return getRuleContext<USLParser::Enum_declarationContext>(0);
}

USLParser::StatementContext* USLParser::Global_statementContext::statement() {
  return getRuleContext<USLParser::StatementContext>(0);
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
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::CLASS: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        class_delcaratiom();
        break;
      }

      case USLParser::NAMESPACE: {
        enterOuterAlt(_localctx, 2);
        setState(78);
        namespace_declaration();
        break;
      }

      case USLParser::ENUM: {
        enterOuterAlt(_localctx, 3);
        setState(79);
        enum_declaration();
        break;
      }

      case USLParser::T__3:
      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::VOID:
      case USLParser::BOOL:
      case USLParser::TYPE_QUALIFYERS:
      case USLParser::STATIC:
      case USLParser::VIRTUAL:
      case USLParser::CALL:
      case USLParser::PLUS_OP:
      case USLParser::MINUS_OP:
      case USLParser::NOT:
      case USLParser::INT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::BOOL_LITTERAL:
      case USLParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(80);
        statement();
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

USLParser::Var_declarationContext* USLParser::StatementContext::var_declaration() {
  return getRuleContext<USLParser::Var_declarationContext>(0);
}

USLParser::Function_declarationContext* USLParser::StatementContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::ExpressionContext* USLParser::StatementContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
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
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(83);
      var_declaration();
      break;
    }

    case 2: {
      setState(84);
      function_declaration();
      break;
    }

    case 3: {
      setState(85);
      expression();
      break;
    }

    default:
      break;
    }
    setState(88);
    match(USLParser::T__0);
   
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

USLParser::Assignment_exprContext* USLParser::ExpressionContext::assignment_expr() {
  return getRuleContext<USLParser::Assignment_exprContext>(0);
}


size_t USLParser::ExpressionContext::getRuleIndex() const {
  return USLParser::RuleExpression;
}


USLParser::ExpressionContext* USLParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, USLParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    assignment_expr();
   
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
  enterRule(_localctx, 8, USLParser::RuleBasic_block);
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
    setState(92);
    match(USLParser::T__1);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348229104) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(93);
      statement();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(USLParser::T__2);
   
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
  enterRule(_localctx, 10, USLParser::RuleClass_delcaratiom);
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
    setState(101);
    match(USLParser::CLASS);
    setState(102);
    match(USLParser::ID);
    setState(103);
    match(USLParser::T__1);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348229104) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(104);
      statement();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Namespace_declarationContext ------------------------------------------------------------------

USLParser::Namespace_declarationContext::Namespace_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Namespace_declarationContext::NAMESPACE() {
  return getToken(USLParser::NAMESPACE, 0);
}

tree::TerminalNode* USLParser::Namespace_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

std::vector<USLParser::Global_statementContext *> USLParser::Namespace_declarationContext::global_statement() {
  return getRuleContexts<USLParser::Global_statementContext>();
}

USLParser::Global_statementContext* USLParser::Namespace_declarationContext::global_statement(size_t i) {
  return getRuleContext<USLParser::Global_statementContext>(i);
}


size_t USLParser::Namespace_declarationContext::getRuleIndex() const {
  return USLParser::RuleNamespace_declaration;
}


USLParser::Namespace_declarationContext* USLParser::namespace_declaration() {
  Namespace_declarationContext *_localctx = _tracker.createInstance<Namespace_declarationContext>(_ctx, getState());
  enterRule(_localctx, 12, USLParser::RuleNamespace_declaration);
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
    match(USLParser::NAMESPACE);
    setState(113);
    match(USLParser::ID);
    setState(114);
    match(USLParser::T__1);
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348227312) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(115);
      global_statement();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(121);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atribute_declarationContext ------------------------------------------------------------------

USLParser::Atribute_declarationContext::Atribute_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Atribute_declarationContext::ATRIBUTE() {
  return getToken(USLParser::ATRIBUTE, 0);
}

tree::TerminalNode* USLParser::Atribute_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Atribute_constructorContext* USLParser::Atribute_declarationContext::atribute_constructor() {
  return getRuleContext<USLParser::Atribute_constructorContext>(0);
}

USLParser::Atrribute_requiresContext* USLParser::Atribute_declarationContext::atrribute_requires() {
  return getRuleContext<USLParser::Atrribute_requiresContext>(0);
}


size_t USLParser::Atribute_declarationContext::getRuleIndex() const {
  return USLParser::RuleAtribute_declaration;
}


USLParser::Atribute_declarationContext* USLParser::atribute_declaration() {
  Atribute_declarationContext *_localctx = _tracker.createInstance<Atribute_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, USLParser::RuleAtribute_declaration);
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
    setState(123);
    match(USLParser::ATRIBUTE);
    setState(124);
    match(USLParser::ID);
    setState(125);
    match(USLParser::T__1);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & 4611686018427390463) != 0)) {
      setState(126);
      atribute_constructor();
    }
    setState(130);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::REQUIRES) {
      setState(129);
      atrribute_requires();
    }
    setState(132);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declarationContext ------------------------------------------------------------------

USLParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Function_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Function_declarationContext::VOID() {
  return getToken(USLParser::VOID, 0);
}

USLParser::TypeContext* USLParser::Function_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::STATIC() {
  return getToken(USLParser::STATIC, 0);
}

std::vector<tree::TerminalNode *> USLParser::Function_declarationContext::TYPE_QUALIFYERS() {
  return getTokens(USLParser::TYPE_QUALIFYERS);
}

tree::TerminalNode* USLParser::Function_declarationContext::TYPE_QUALIFYERS(size_t i) {
  return getToken(USLParser::TYPE_QUALIFYERS, i);
}

tree::TerminalNode* USLParser::Function_declarationContext::VIRTUAL() {
  return getToken(USLParser::VIRTUAL, 0);
}

USLParser::ParameterListContext* USLParser::Function_declarationContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

USLParser::Noexcept_specifyerContext* USLParser::Function_declarationContext::noexcept_specifyer() {
  return getRuleContext<USLParser::Noexcept_specifyerContext>(0);
}

tree::TerminalNode* USLParser::Function_declarationContext::OVERRIDE() {
  return getToken(USLParser::OVERRIDE, 0);
}

std::vector<USLParser::StatementContext *> USLParser::Function_declarationContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Function_declarationContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Function_declarationContext::getRuleIndex() const {
  return USLParser::RuleFunction_declaration;
}


USLParser::Function_declarationContext* USLParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 16, USLParser::RuleFunction_declaration);
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
    if (_la == USLParser::STATIC) {
      setState(134);
      match(USLParser::STATIC);
    }
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(137);
      match(USLParser::TYPE_QUALIFYERS);
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::VIRTUAL) {
      setState(143);
      match(USLParser::VIRTUAL);
    }
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::VOID: {
        setState(146);
        match(USLParser::VOID);
        break;
      }

      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL:
      case USLParser::ID: {
        setState(147);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(150);
    match(USLParser::ID);
    setState(151);
    match(USLParser::T__3);
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & 4611686018494499327) != 0)) {
      setState(152);
      parameterList();
    }
    setState(155);
    match(USLParser::T__4);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::NOEXCEPT) {
      setState(156);
      noexcept_specifyer();
    }
    setState(160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::OVERRIDE) {
      setState(159);
      match(USLParser::OVERRIDE);
    }
    setState(162);
    match(USLParser::T__1);
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348229104) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(163);
      statement();
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(169);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Enum_declarationContext ------------------------------------------------------------------

USLParser::Enum_declarationContext::Enum_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Enum_declarationContext::ENUM() {
  return getToken(USLParser::ENUM, 0);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Enum_declarationContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

USLParser::Integral_typeContext* USLParser::Enum_declarationContext::integral_type() {
  return getRuleContext<USLParser::Integral_typeContext>(0);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::ASSIGN_OP() {
  return getTokens(USLParser::ASSIGN_OP);
}

tree::TerminalNode* USLParser::Enum_declarationContext::ASSIGN_OP(size_t i) {
  return getToken(USLParser::ASSIGN_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Enum_declarationContext::INT_LITTERAL() {
  return getTokens(USLParser::INT_LITTERAL);
}

tree::TerminalNode* USLParser::Enum_declarationContext::INT_LITTERAL(size_t i) {
  return getToken(USLParser::INT_LITTERAL, i);
}


size_t USLParser::Enum_declarationContext::getRuleIndex() const {
  return USLParser::RuleEnum_declaration;
}


USLParser::Enum_declarationContext* USLParser::enum_declaration() {
  Enum_declarationContext *_localctx = _tracker.createInstance<Enum_declarationContext>(_ctx, getState());
  enterRule(_localctx, 18, USLParser::RuleEnum_declaration);
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
    setState(171);
    match(USLParser::ENUM);
    setState(174);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::T__5) {
      setState(172);
      match(USLParser::T__5);
      setState(173);
      integral_type();
    }
    setState(176);
    match(USLParser::T__1);
    setState(177);
    match(USLParser::ID);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(178);
      match(USLParser::ASSIGN_OP);
      setState(179);
      match(USLParser::INT_LITTERAL);
    }
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(182);
      match(USLParser::T__6);
      setState(183);
      match(USLParser::ID);
      setState(186);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == USLParser::ASSIGN_OP) {
        setState(184);
        match(USLParser::ASSIGN_OP);
        setState(185);
        match(USLParser::INT_LITTERAL);
      }
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declarationContext ------------------------------------------------------------------

USLParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Var_declarationContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Var_declarationContext::ID() {
  return getToken(USLParser::ID, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::STATIC() {
  return getToken(USLParser::STATIC, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::TYPE_QUALIFYERS() {
  return getToken(USLParser::TYPE_QUALIFYERS, 0);
}

tree::TerminalNode* USLParser::Var_declarationContext::ASSIGN_OP() {
  return getToken(USLParser::ASSIGN_OP, 0);
}

std::vector<USLParser::ExpressionContext *> USLParser::Var_declarationContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Var_declarationContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Var_declarationContext::getRuleIndex() const {
  return USLParser::RuleVar_declaration;
}


USLParser::Var_declarationContext* USLParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 20, USLParser::RuleVar_declaration);
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
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::STATIC) {
      setState(195);
      match(USLParser::STATIC);
    }
    setState(199);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::TYPE_QUALIFYERS) {
      setState(198);
      match(USLParser::TYPE_QUALIFYERS);
    }
    setState(201);
    type();
    setState(202);
    match(USLParser::ID);
    setState(213);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::T__3: {
        setState(203);
        match(USLParser::T__3);
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -9221542449506156528) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 67)) & 159) != 0)) {
          setState(204);
          expression();
          setState(209);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(210);
        match(USLParser::T__4);
        break;
      }

      case USLParser::ASSIGN_OP: {
        setState(211);
        match(USLParser::ASSIGN_OP);
        setState(212);
        expression();
        break;
      }

      case USLParser::EOF:
      case USLParser::T__0: {
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

//----------------- Custom_opperator_symContext ------------------------------------------------------------------

USLParser::Custom_opperator_symContext::Custom_opperator_symContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Custom_opperator_symContext::CUSTOM_OP() {
  return getToken(USLParser::CUSTOM_OP, 0);
}

tree::TerminalNode* USLParser::Custom_opperator_symContext::CUSTOM_OP_SYMBOLS() {
  return getToken(USLParser::CUSTOM_OP_SYMBOLS, 0);
}

USLParser::ParameterListContext* USLParser::Custom_opperator_symContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}

std::vector<USLParser::StatementContext *> USLParser::Custom_opperator_symContext::statement() {
  return getRuleContexts<USLParser::StatementContext>();
}

USLParser::StatementContext* USLParser::Custom_opperator_symContext::statement(size_t i) {
  return getRuleContext<USLParser::StatementContext>(i);
}


size_t USLParser::Custom_opperator_symContext::getRuleIndex() const {
  return USLParser::RuleCustom_opperator_sym;
}


USLParser::Custom_opperator_symContext* USLParser::custom_opperator_sym() {
  Custom_opperator_symContext *_localctx = _tracker.createInstance<Custom_opperator_symContext>(_ctx, getState());
  enterRule(_localctx, 22, USLParser::RuleCustom_opperator_sym);
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
    setState(215);
    match(USLParser::CUSTOM_OP);
    setState(216);
    match(USLParser::T__3);
    setState(217);
    match(USLParser::CUSTOM_OP_SYMBOLS);
    setState(218);
    match(USLParser::T__4);
    setState(219);
    match(USLParser::T__3);
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & 4611686018494499327) != 0)) {
      setState(220);
      parameterList();
    }
    setState(223);
    match(USLParser::T__4);
    setState(224);
    match(USLParser::T__1);
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221540525348229104) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(225);
      statement();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(231);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Noexcept_specifyerContext ------------------------------------------------------------------

USLParser::Noexcept_specifyerContext::Noexcept_specifyerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Noexcept_specifyerContext::NOEXCEPT() {
  return getToken(USLParser::NOEXCEPT, 0);
}

tree::TerminalNode* USLParser::Noexcept_specifyerContext::BOOL_LITTERAL() {
  return getToken(USLParser::BOOL_LITTERAL, 0);
}


size_t USLParser::Noexcept_specifyerContext::getRuleIndex() const {
  return USLParser::RuleNoexcept_specifyer;
}


USLParser::Noexcept_specifyerContext* USLParser::noexcept_specifyer() {
  Noexcept_specifyerContext *_localctx = _tracker.createInstance<Noexcept_specifyerContext>(_ctx, getState());
  enterRule(_localctx, 24, USLParser::RuleNoexcept_specifyer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(USLParser::NOEXCEPT);
    setState(234);
    match(USLParser::T__3);
    setState(235);
    match(USLParser::BOOL_LITTERAL);
    setState(236);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_exprContext ------------------------------------------------------------------

USLParser::Assignment_exprContext::Assignment_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Equality_exprContext* USLParser::Assignment_exprContext::equality_expr() {
  return getRuleContext<USLParser::Equality_exprContext>(0);
}

tree::TerminalNode* USLParser::Assignment_exprContext::ASSIGN_OP() {
  return getToken(USLParser::ASSIGN_OP, 0);
}

USLParser::Assignment_exprContext* USLParser::Assignment_exprContext::assignment_expr() {
  return getRuleContext<USLParser::Assignment_exprContext>(0);
}


size_t USLParser::Assignment_exprContext::getRuleIndex() const {
  return USLParser::RuleAssignment_expr;
}


USLParser::Assignment_exprContext* USLParser::assignment_expr() {
  Assignment_exprContext *_localctx = _tracker.createInstance<Assignment_exprContext>(_ctx, getState());
  enterRule(_localctx, 26, USLParser::RuleAssignment_expr);
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
    setState(238);
    equality_expr();
    setState(241);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::ASSIGN_OP) {
      setState(239);
      match(USLParser::ASSIGN_OP);
      setState(240);
      assignment_expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equality_exprContext ------------------------------------------------------------------

USLParser::Equality_exprContext::Equality_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Comparison_exprContext *> USLParser::Equality_exprContext::comparison_expr() {
  return getRuleContexts<USLParser::Comparison_exprContext>();
}

USLParser::Comparison_exprContext* USLParser::Equality_exprContext::comparison_expr(size_t i) {
  return getRuleContext<USLParser::Comparison_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Equality_exprContext::EQUALS() {
  return getTokens(USLParser::EQUALS);
}

tree::TerminalNode* USLParser::Equality_exprContext::EQUALS(size_t i) {
  return getToken(USLParser::EQUALS, i);
}

std::vector<tree::TerminalNode *> USLParser::Equality_exprContext::NOT() {
  return getTokens(USLParser::NOT);
}

tree::TerminalNode* USLParser::Equality_exprContext::NOT(size_t i) {
  return getToken(USLParser::NOT, i);
}


size_t USLParser::Equality_exprContext::getRuleIndex() const {
  return USLParser::RuleEquality_expr;
}


USLParser::Equality_exprContext* USLParser::equality_expr() {
  Equality_exprContext *_localctx = _tracker.createInstance<Equality_exprContext>(_ctx, getState());
  enterRule(_localctx, 28, USLParser::RuleEquality_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    comparison_expr();
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(244);
        _la = _input->LA(1);
        if (!(_la == USLParser::EQUALS

        || _la == USLParser::NOT)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(245);
        comparison_expr(); 
      }
      setState(250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_exprContext ------------------------------------------------------------------

USLParser::Comparison_exprContext::Comparison_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Bitshift_exprContext *> USLParser::Comparison_exprContext::bitshift_expr() {
  return getRuleContexts<USLParser::Bitshift_exprContext>();
}

USLParser::Bitshift_exprContext* USLParser::Comparison_exprContext::bitshift_expr(size_t i) {
  return getRuleContext<USLParser::Bitshift_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LESS() {
  return getTokens(USLParser::LESS);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LESS(size_t i) {
  return getToken(USLParser::LESS, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LARGER() {
  return getTokens(USLParser::LARGER);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LARGER(size_t i) {
  return getToken(USLParser::LARGER, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LESS_EQ() {
  return getTokens(USLParser::LESS_EQ);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LESS_EQ(size_t i) {
  return getToken(USLParser::LESS_EQ, i);
}

std::vector<tree::TerminalNode *> USLParser::Comparison_exprContext::LARGER_EQ() {
  return getTokens(USLParser::LARGER_EQ);
}

tree::TerminalNode* USLParser::Comparison_exprContext::LARGER_EQ(size_t i) {
  return getToken(USLParser::LARGER_EQ, i);
}


size_t USLParser::Comparison_exprContext::getRuleIndex() const {
  return USLParser::RuleComparison_expr;
}


USLParser::Comparison_exprContext* USLParser::comparison_expr() {
  Comparison_exprContext *_localctx = _tracker.createInstance<Comparison_exprContext>(_ctx, getState());
  enterRule(_localctx, 30, USLParser::RuleComparison_expr);
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
    setState(251);
    bitshift_expr();
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & 27) != 0)) {
      setState(252);
      _la = _input->LA(1);
      if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 61)) & 27) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(253);
      bitshift_expr();
      setState(258);
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

//----------------- Bitshift_exprContext ------------------------------------------------------------------

USLParser::Bitshift_exprContext::Bitshift_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Additive_exprContext *> USLParser::Bitshift_exprContext::additive_expr() {
  return getRuleContexts<USLParser::Additive_exprContext>();
}

USLParser::Additive_exprContext* USLParser::Bitshift_exprContext::additive_expr(size_t i) {
  return getRuleContext<USLParser::Additive_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Bitshift_exprContext::B_LEFT() {
  return getTokens(USLParser::B_LEFT);
}

tree::TerminalNode* USLParser::Bitshift_exprContext::B_LEFT(size_t i) {
  return getToken(USLParser::B_LEFT, i);
}

std::vector<tree::TerminalNode *> USLParser::Bitshift_exprContext::B_RIGHT() {
  return getTokens(USLParser::B_RIGHT);
}

tree::TerminalNode* USLParser::Bitshift_exprContext::B_RIGHT(size_t i) {
  return getToken(USLParser::B_RIGHT, i);
}


size_t USLParser::Bitshift_exprContext::getRuleIndex() const {
  return USLParser::RuleBitshift_expr;
}


USLParser::Bitshift_exprContext* USLParser::bitshift_expr() {
  Bitshift_exprContext *_localctx = _tracker.createInstance<Bitshift_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, USLParser::RuleBitshift_expr);
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
    setState(259);
    additive_expr();
    setState(264);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::B_LEFT

    || _la == USLParser::B_RIGHT) {
      setState(260);
      _la = _input->LA(1);
      if (!(_la == USLParser::B_LEFT

      || _la == USLParser::B_RIGHT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(261);
      additive_expr();
      setState(266);
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

//----------------- Additive_exprContext ------------------------------------------------------------------

USLParser::Additive_exprContext::Additive_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Multiplicative_exprContext *> USLParser::Additive_exprContext::multiplicative_expr() {
  return getRuleContexts<USLParser::Multiplicative_exprContext>();
}

USLParser::Multiplicative_exprContext* USLParser::Additive_exprContext::multiplicative_expr(size_t i) {
  return getRuleContext<USLParser::Multiplicative_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Additive_exprContext::PLUS_OP() {
  return getTokens(USLParser::PLUS_OP);
}

tree::TerminalNode* USLParser::Additive_exprContext::PLUS_OP(size_t i) {
  return getToken(USLParser::PLUS_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Additive_exprContext::MINUS_OP() {
  return getTokens(USLParser::MINUS_OP);
}

tree::TerminalNode* USLParser::Additive_exprContext::MINUS_OP(size_t i) {
  return getToken(USLParser::MINUS_OP, i);
}


size_t USLParser::Additive_exprContext::getRuleIndex() const {
  return USLParser::RuleAdditive_expr;
}


USLParser::Additive_exprContext* USLParser::additive_expr() {
  Additive_exprContext *_localctx = _tracker.createInstance<Additive_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, USLParser::RuleAdditive_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(267);
    multiplicative_expr();
    setState(272);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(268);
        _la = _input->LA(1);
        if (!(_la == USLParser::PLUS_OP

        || _la == USLParser::MINUS_OP)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(269);
        multiplicative_expr(); 
      }
      setState(274);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multiplicative_exprContext ------------------------------------------------------------------

USLParser::Multiplicative_exprContext::Multiplicative_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<USLParser::Unary_exprContext *> USLParser::Multiplicative_exprContext::unary_expr() {
  return getRuleContexts<USLParser::Unary_exprContext>();
}

USLParser::Unary_exprContext* USLParser::Multiplicative_exprContext::unary_expr(size_t i) {
  return getRuleContext<USLParser::Unary_exprContext>(i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::MULT_OP() {
  return getTokens(USLParser::MULT_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::MULT_OP(size_t i) {
  return getToken(USLParser::MULT_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::DIV_OP() {
  return getTokens(USLParser::DIV_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::DIV_OP(size_t i) {
  return getToken(USLParser::DIV_OP, i);
}

std::vector<tree::TerminalNode *> USLParser::Multiplicative_exprContext::MOD_OP() {
  return getTokens(USLParser::MOD_OP);
}

tree::TerminalNode* USLParser::Multiplicative_exprContext::MOD_OP(size_t i) {
  return getToken(USLParser::MOD_OP, i);
}


size_t USLParser::Multiplicative_exprContext::getRuleIndex() const {
  return USLParser::RuleMultiplicative_expr;
}


USLParser::Multiplicative_exprContext* USLParser::multiplicative_expr() {
  Multiplicative_exprContext *_localctx = _tracker.createInstance<Multiplicative_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, USLParser::RuleMultiplicative_expr);
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
    setState(275);
    unary_expr();
    setState(280);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 15762598695796736) != 0)) {
      setState(276);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 15762598695796736) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(277);
      unary_expr();
      setState(282);
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

//----------------- Unary_exprContext ------------------------------------------------------------------

USLParser::Unary_exprContext::Unary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Primary_exprContext* USLParser::Unary_exprContext::primary_expr() {
  return getRuleContext<USLParser::Primary_exprContext>(0);
}

tree::TerminalNode* USLParser::Unary_exprContext::PLUS_OP() {
  return getToken(USLParser::PLUS_OP, 0);
}

tree::TerminalNode* USLParser::Unary_exprContext::MINUS_OP() {
  return getToken(USLParser::MINUS_OP, 0);
}

tree::TerminalNode* USLParser::Unary_exprContext::NOT() {
  return getToken(USLParser::NOT, 0);
}


size_t USLParser::Unary_exprContext::getRuleIndex() const {
  return USLParser::RuleUnary_expr;
}


USLParser::Unary_exprContext* USLParser::unary_expr() {
  Unary_exprContext *_localctx = _tracker.createInstance<Unary_exprContext>(_ctx, getState());
  enterRule(_localctx, 38, USLParser::RuleUnary_expr);
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
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221683186994511872) != 0)) {
      setState(283);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & -9221683186994511872) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(286);
    primary_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Primary_exprContext ------------------------------------------------------------------

USLParser::Primary_exprContext::Primary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Function_callContext* USLParser::Primary_exprContext::function_call() {
  return getRuleContext<USLParser::Function_callContext>(0);
}

tree::TerminalNode* USLParser::Primary_exprContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::LitteralContext* USLParser::Primary_exprContext::litteral() {
  return getRuleContext<USLParser::LitteralContext>(0);
}

USLParser::ExpressionContext* USLParser::Primary_exprContext::expression() {
  return getRuleContext<USLParser::ExpressionContext>(0);
}


size_t USLParser::Primary_exprContext::getRuleIndex() const {
  return USLParser::RulePrimary_expr;
}


USLParser::Primary_exprContext* USLParser::primary_expr() {
  Primary_exprContext *_localctx = _tracker.createInstance<Primary_exprContext>(_ctx, getState());
  enterRule(_localctx, 40, USLParser::RulePrimary_expr);

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
    switch (_input->LA(1)) {
      case USLParser::CALL: {
        enterOuterAlt(_localctx, 1);
        setState(288);
        function_call();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(289);
        match(USLParser::ID);
        break;
      }

      case USLParser::INT_LITTERAL:
      case USLParser::FLOAT_LITTERAL:
      case USLParser::CHAR_LITTERAL:
      case USLParser::STRING_LITTERAL:
      case USLParser::BOOL_LITTERAL: {
        enterOuterAlt(_localctx, 3);
        setState(290);
        litteral();
        break;
      }

      case USLParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(291);
        match(USLParser::T__3);
        setState(292);
        expression();
        setState(293);
        match(USLParser::T__4);
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

//----------------- Function_callContext ------------------------------------------------------------------

USLParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Function_callContext::CALL() {
  return getToken(USLParser::CALL, 0);
}

tree::TerminalNode* USLParser::Function_callContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Scope_ressolutionContext* USLParser::Function_callContext::scope_ressolution() {
  return getRuleContext<USLParser::Scope_ressolutionContext>(0);
}

std::vector<USLParser::ExpressionContext *> USLParser::Function_callContext::expression() {
  return getRuleContexts<USLParser::ExpressionContext>();
}

USLParser::ExpressionContext* USLParser::Function_callContext::expression(size_t i) {
  return getRuleContext<USLParser::ExpressionContext>(i);
}


size_t USLParser::Function_callContext::getRuleIndex() const {
  return USLParser::RuleFunction_call;
}


USLParser::Function_callContext* USLParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 42, USLParser::RuleFunction_call);
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
    match(USLParser::CALL);
    setState(299);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(298);
      scope_ressolution();
      break;
    }

    default:
      break;
    }
    setState(301);
    match(USLParser::ID);
    setState(302);
    match(USLParser::T__3);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -9221542449506156528) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 159) != 0)) {
      setState(303);
      expression();
      setState(308);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == USLParser::T__6) {
        setState(304);
        match(USLParser::T__6);
        setState(305);
        expression();
        setState(310);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(313);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atribute_constructorContext ------------------------------------------------------------------

USLParser::Atribute_constructorContext::Atribute_constructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Atribute_constructorContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

USLParser::ParameterListContext* USLParser::Atribute_constructorContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}


size_t USLParser::Atribute_constructorContext::getRuleIndex() const {
  return USLParser::RuleAtribute_constructor;
}


USLParser::Atribute_constructorContext* USLParser::atribute_constructor() {
  Atribute_constructorContext *_localctx = _tracker.createInstance<Atribute_constructorContext>(_ctx, getState());
  enterRule(_localctx, 44, USLParser::RuleAtribute_constructor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    type();
    setState(316);
    match(USLParser::T__3);
    setState(317);
    parameterList();
    setState(318);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Atrribute_requiresContext ------------------------------------------------------------------

USLParser::Atrribute_requiresContext::Atrribute_requiresContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Atrribute_requiresContext::REQUIRES() {
  return getToken(USLParser::REQUIRES, 0);
}

std::vector<USLParser::Implements_functionContext *> USLParser::Atrribute_requiresContext::implements_function() {
  return getRuleContexts<USLParser::Implements_functionContext>();
}

USLParser::Implements_functionContext* USLParser::Atrribute_requiresContext::implements_function(size_t i) {
  return getRuleContext<USLParser::Implements_functionContext>(i);
}

std::vector<USLParser::Implements_VarContext *> USLParser::Atrribute_requiresContext::implements_Var() {
  return getRuleContexts<USLParser::Implements_VarContext>();
}

USLParser::Implements_VarContext* USLParser::Atrribute_requiresContext::implements_Var(size_t i) {
  return getRuleContext<USLParser::Implements_VarContext>(i);
}


size_t USLParser::Atrribute_requiresContext::getRuleIndex() const {
  return USLParser::RuleAtrribute_requires;
}


USLParser::Atrribute_requiresContext* USLParser::atrribute_requires() {
  Atrribute_requiresContext *_localctx = _tracker.createInstance<Atrribute_requiresContext>(_ctx, getState());
  enterRule(_localctx, 46, USLParser::RuleAtrribute_requires);
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
    setState(320);
    match(USLParser::REQUIRES);
    setState(321);
    match(USLParser::T__1);
    setState(326);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 12) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 12)) & 4611686018427390463) != 0)) {
      setState(324);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
        setState(322);
        implements_function();
        break;
      }

      case 2: {
        setState(323);
        implements_Var();
        break;
      }

      default:
        break;
      }
      setState(328);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(329);
    match(USLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implements_functionContext ------------------------------------------------------------------

USLParser::Implements_functionContext::Implements_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Implements_functionContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Implements_functionContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::ParameterListContext* USLParser::Implements_functionContext::parameterList() {
  return getRuleContext<USLParser::ParameterListContext>(0);
}


size_t USLParser::Implements_functionContext::getRuleIndex() const {
  return USLParser::RuleImplements_function;
}


USLParser::Implements_functionContext* USLParser::implements_function() {
  Implements_functionContext *_localctx = _tracker.createInstance<Implements_functionContext>(_ctx, getState());
  enterRule(_localctx, 48, USLParser::RuleImplements_function);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    type();
    setState(332);
    match(USLParser::ID);
    setState(333);
    match(USLParser::T__3);
    setState(334);
    parameterList();
    setState(335);
    match(USLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Implements_VarContext ------------------------------------------------------------------

USLParser::Implements_VarContext::Implements_VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::Implements_VarContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::Implements_VarContext::ID() {
  return getToken(USLParser::ID, 0);
}


size_t USLParser::Implements_VarContext::getRuleIndex() const {
  return USLParser::RuleImplements_Var;
}


USLParser::Implements_VarContext* USLParser::implements_Var() {
  Implements_VarContext *_localctx = _tracker.createInstance<Implements_VarContext>(_ctx, getState());
  enterRule(_localctx, 50, USLParser::RuleImplements_Var);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    type();
    setState(338);
    match(USLParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimitivesContext ------------------------------------------------------------------

USLParser::PrimitivesContext::PrimitivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::PrimitivesContext::BOOL() {
  return getToken(USLParser::BOOL, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::BYTE() {
  return getToken(USLParser::BYTE, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::SHORT() {
  return getToken(USLParser::SHORT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::FLOAT() {
  return getToken(USLParser::FLOAT, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::DOUBLE() {
  return getToken(USLParser::DOUBLE, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::LONG() {
  return getToken(USLParser::LONG, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::HASH() {
  return getToken(USLParser::HASH, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::STRING() {
  return getToken(USLParser::STRING, 0);
}

tree::TerminalNode* USLParser::PrimitivesContext::CHAR() {
  return getToken(USLParser::CHAR, 0);
}


size_t USLParser::PrimitivesContext::getRuleIndex() const {
  return USLParser::RulePrimitives;
}


USLParser::PrimitivesContext* USLParser::primitives() {
  PrimitivesContext *_localctx = _tracker.createInstance<PrimitivesContext>(_ctx, getState());
  enterRule(_localctx, 52, USLParser::RulePrimitives);
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
    setState(340);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 10481664) != 0))) {
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

//----------------- Integral_typeContext ------------------------------------------------------------------

USLParser::Integral_typeContext::Integral_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Integral_typeContext::BYTE() {
  return getToken(USLParser::BYTE, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::SHORT() {
  return getToken(USLParser::SHORT, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::INT() {
  return getToken(USLParser::INT, 0);
}

tree::TerminalNode* USLParser::Integral_typeContext::SIGNDNES() {
  return getToken(USLParser::SIGNDNES, 0);
}


size_t USLParser::Integral_typeContext::getRuleIndex() const {
  return USLParser::RuleIntegral_type;
}


USLParser::Integral_typeContext* USLParser::integral_type() {
  Integral_typeContext *_localctx = _tracker.createInstance<Integral_typeContext>(_ctx, getState());
  enterRule(_localctx, 54, USLParser::RuleIntegral_type);
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
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == USLParser::SIGNDNES) {
      setState(342);
      match(USLParser::SIGNDNES);
    }
    setState(345);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28672) != 0))) {
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

//----------------- LitteralContext ------------------------------------------------------------------

USLParser::LitteralContext::LitteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::LitteralContext::STRING_LITTERAL() {
  return getToken(USLParser::STRING_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::INT_LITTERAL() {
  return getToken(USLParser::INT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::FLOAT_LITTERAL() {
  return getToken(USLParser::FLOAT_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::CHAR_LITTERAL() {
  return getToken(USLParser::CHAR_LITTERAL, 0);
}

tree::TerminalNode* USLParser::LitteralContext::BOOL_LITTERAL() {
  return getToken(USLParser::BOOL_LITTERAL, 0);
}


size_t USLParser::LitteralContext::getRuleIndex() const {
  return USLParser::RuleLitteral;
}


USLParser::LitteralContext* USLParser::litteral() {
  LitteralContext *_localctx = _tracker.createInstance<LitteralContext>(_ctx, getState());
  enterRule(_localctx, 56, USLParser::RuleLitteral);
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
    setState(347);
    _la = _input->LA(1);
    if (!(((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 31) != 0))) {
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

//----------------- TypeContext ------------------------------------------------------------------

USLParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::PrimitivesContext* USLParser::TypeContext::primitives() {
  return getRuleContext<USLParser::PrimitivesContext>(0);
}

tree::TerminalNode* USLParser::TypeContext::ID() {
  return getToken(USLParser::ID, 0);
}

USLParser::Scope_ressolutionContext* USLParser::TypeContext::scope_ressolution() {
  return getRuleContext<USLParser::Scope_ressolutionContext>(0);
}


size_t USLParser::TypeContext::getRuleIndex() const {
  return USLParser::RuleType;
}


USLParser::TypeContext* USLParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 58, USLParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case USLParser::BYTE:
      case USLParser::SHORT:
      case USLParser::INT:
      case USLParser::LONG:
      case USLParser::FLOAT:
      case USLParser::DOUBLE:
      case USLParser::HASH:
      case USLParser::STRING:
      case USLParser::CHAR:
      case USLParser::BOOL: {
        enterOuterAlt(_localctx, 1);
        setState(349);
        primitives();
        break;
      }

      case USLParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(351);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
        case 1: {
          setState(350);
          scope_ressolution();
          break;
        }

        default:
          break;
        }
        setState(353);
        match(USLParser::ID);
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

//----------------- ParameterContext ------------------------------------------------------------------

USLParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::TypeContext* USLParser::ParameterContext::type() {
  return getRuleContext<USLParser::TypeContext>(0);
}

tree::TerminalNode* USLParser::ParameterContext::ID() {
  return getToken(USLParser::ID, 0);
}

std::vector<tree::TerminalNode *> USLParser::ParameterContext::TYPE_QUALIFYERS() {
  return getTokens(USLParser::TYPE_QUALIFYERS);
}

tree::TerminalNode* USLParser::ParameterContext::TYPE_QUALIFYERS(size_t i) {
  return getToken(USLParser::TYPE_QUALIFYERS, i);
}


size_t USLParser::ParameterContext::getRuleIndex() const {
  return USLParser::RuleParameter;
}


USLParser::ParameterContext* USLParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 60, USLParser::RuleParameter);
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
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::TYPE_QUALIFYERS) {
      setState(356);
      match(USLParser::TYPE_QUALIFYERS);
      setState(361);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(362);
    type();
    setState(363);
    match(USLParser::ID);
   
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


size_t USLParser::ParameterListContext::getRuleIndex() const {
  return USLParser::RuleParameterList;
}


USLParser::ParameterListContext* USLParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 62, USLParser::RuleParameterList);
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
    setState(365);
    parameter();
    setState(370);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == USLParser::T__6) {
      setState(366);
      match(USLParser::T__6);
      setState(367);
      parameter();
      setState(372);
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

//----------------- Classmember_declarationContext ------------------------------------------------------------------

USLParser::Classmember_declarationContext::Classmember_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

USLParser::Function_declarationContext* USLParser::Classmember_declarationContext::function_declaration() {
  return getRuleContext<USLParser::Function_declarationContext>(0);
}

USLParser::Var_declarationContext* USLParser::Classmember_declarationContext::var_declaration() {
  return getRuleContext<USLParser::Var_declarationContext>(0);
}


size_t USLParser::Classmember_declarationContext::getRuleIndex() const {
  return USLParser::RuleClassmember_declaration;
}


USLParser::Classmember_declarationContext* USLParser::classmember_declaration() {
  Classmember_declarationContext *_localctx = _tracker.createInstance<Classmember_declarationContext>(_ctx, getState());
  enterRule(_localctx, 64, USLParser::RuleClassmember_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(375);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(373);
      function_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(374);
      var_declaration();
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

//----------------- Operator_symbolsContext ------------------------------------------------------------------

USLParser::Operator_symbolsContext::Operator_symbolsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* USLParser::Operator_symbolsContext::CUSTOM_OP_SYMBOLS() {
  return getToken(USLParser::CUSTOM_OP_SYMBOLS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::EQUALS() {
  return getToken(USLParser::EQUALS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LESS() {
  return getToken(USLParser::LESS, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LARGER() {
  return getToken(USLParser::LARGER, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::NOT() {
  return getToken(USLParser::NOT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LESS_EQ() {
  return getToken(USLParser::LESS_EQ, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::LARGER_EQ() {
  return getToken(USLParser::LARGER_EQ, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::B_LEFT() {
  return getToken(USLParser::B_LEFT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::B_RIGHT() {
  return getToken(USLParser::B_RIGHT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::INCREMENT() {
  return getToken(USLParser::INCREMENT, 0);
}

tree::TerminalNode* USLParser::Operator_symbolsContext::DECREMENT() {
  return getToken(USLParser::DECREMENT, 0);
}


size_t USLParser::Operator_symbolsContext::getRuleIndex() const {
  return USLParser::RuleOperator_symbols;
}


USLParser::Operator_symbolsContext* USLParser::operator_symbols() {
  Operator_symbolsContext *_localctx = _tracker.createInstance<Operator_symbolsContext>(_ctx, getState());
  enterRule(_localctx, 66, USLParser::RuleOperator_symbols);
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
    setState(377);
    _la = _input->LA(1);
    if (!(((((_la - 56) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 56)) & 525311) != 0))) {
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

//----------------- Scope_ressolutionContext ------------------------------------------------------------------

USLParser::Scope_ressolutionContext::Scope_ressolutionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> USLParser::Scope_ressolutionContext::ID() {
  return getTokens(USLParser::ID);
}

tree::TerminalNode* USLParser::Scope_ressolutionContext::ID(size_t i) {
  return getToken(USLParser::ID, i);
}

std::vector<tree::TerminalNode *> USLParser::Scope_ressolutionContext::SCOPE_RESSOLUTION_OP() {
  return getTokens(USLParser::SCOPE_RESSOLUTION_OP);
}

tree::TerminalNode* USLParser::Scope_ressolutionContext::SCOPE_RESSOLUTION_OP(size_t i) {
  return getToken(USLParser::SCOPE_RESSOLUTION_OP, i);
}


size_t USLParser::Scope_ressolutionContext::getRuleIndex() const {
  return USLParser::RuleScope_ressolution;
}


USLParser::Scope_ressolutionContext* USLParser::scope_ressolution() {
  Scope_ressolutionContext *_localctx = _tracker.createInstance<Scope_ressolutionContext>(_ctx, getState());
  enterRule(_localctx, 68, USLParser::RuleScope_ressolution);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(379);
    match(USLParser::ID);
    setState(384);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(380);
        match(USLParser::SCOPE_RESSOLUTION_OP);
        setState(381);
        match(USLParser::ID); 
      }
      setState(386);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(387);
    match(USLParser::SCOPE_RESSOLUTION_OP);
   
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
