grammar USL;

//Lexer
//Keywords
NAMESPACE                           :'namespace';
CLASS                               :'class';
ENUM                                :'enum';
ATRIBUTE                            :'atribute';
//
BYTE                          :'byte';
SHORT                           :'short';
INT                                 :'int';
LONG                                :'long';
FLOAT                               :'float';
DOUBLE                              :'double';
HASH                                :'hash';
STRING                               :'string';
CHAR                                :'char';
VOID                                :'void';
NULL                                :'null';
BOOL                                :'bool';
SIGNDNES                            :'signed'|'unsigned';
TEMPLATE                            :'template';
ASYNC                               :'async';
SYNC                                :'sync';
INTERNAL                            :'_internal';
OPPERATOR                           :'operator';
UNSAFE                              :'unsafe';
STACK_ALLOC                         :'stack_alloc';
REINTERPRET_CAST                    :'reinterpret_cast';
STATIC_CAST                         :'static_cast';
UNSAFE_CAST                         :'unsafe_cast';
CUSTOM_OP                           :'def_operator';
CUSTOM_KEYWORD                      :'def_keyword';
CUSTOM_CONTROL                      :'def_flow';
TYPE_QUALIFYERS                     :'volatile'|'const';
STATIC                              :'static';
VIRTUAL                             :'virtual';
NOEXCEPT                            :'noexcept';
OVERRIDE                            :'override';
NULLPTR                             :'nullptr';
RETURN                              :'return';
REQUIRES                            :'requires';
AUTO                                :'auto';
CALL                                :'call';
//operators unary
ASSIGN_OP                              :'=';
PLUS_OP                                :'+';
MINUS_OP                               :'-';
MULT_OP                                :'*';
DIV_OP                                 :'/';
MOD_OP                                 :'%';
HASH_OP                                :'#';

//dereff
DEREF                               :'->';

//operators Binary
INCREMENT                           :'++';
DECREMENT                           :'--';
//operators Bit
B_LEFT                              :'<<';
B_RIGHT                             :'>>';

//operator booean
EQUALS                              :'==';
LESS                                :'<';
LARGER                              :'>';
NOT                                 :'!';
LESS_EQ                             :'<='|'=<';
LARGER_EQ                           :'>='|'=>';

SCOPE_RESSOLUTION_OP                :'::';
//litterals

INT_LITTERAL                        : [0-9]+ ;
FLOAT_LITTERAL                      : [0-9]+'.'[0-9]* ;
CHAR_LITTERAL                       : '\'' [^'] '\'';
STRING_LITTERAL                     : '"' (~["\\] | '\\' .)* '"' ;
BOOL_LITTERAL                       : 'true' | 'false' ;
        
        
COMMENT                             : '//' ~[\r\n]* -> skip ;
WS                                  : [ \t\r\n]+ -> skip ;


ID                                  : [a-zA-Z_][a-zA-Z0-9_]* ;
CUSTOM_OP_SYMBOLS                   :[~^?$§@€];

//Global Rules
program                             :global_statement+ EOF;
global_statement                    :   class_delcaratiom|
                                        namespace_declaration|
                                        enum_declaration|
                                        statement;
statement                           :(var_declaration|function_declaration|
                                    expression)';';


expression                          :assignment_expr;


basic_block                         :'{' statement* '}';

//statements
class_delcaratiom                   :CLASS ID '{'statement*'}';

namespace_declaration               :NAMESPACE ID '{'global_statement*'}';
atribute_declaration                :ATRIBUTE ID '{'atribute_constructor? atrribute_requires?'}';

function_declaration                :STATIC? TYPE_QUALIFYERS* VIRTUAL? (VOID|type) ID'('parameterList?')' noexcept_specifyer? OVERRIDE? '{'statement*'}' ;

enum_declaration                    :ENUM (':' integral_type)?'{' ID ('=' INT_LITTERAL)? (','ID ('='INT_LITTERAL)?)*'}';

var_declaration                     :STATIC? TYPE_QUALIFYERS? type ID(('('expression*')')|(ASSIGN_OP expression))?;

custom_opperator_sym                : CUSTOM_OP '('CUSTOM_OP_SYMBOLS')' '('parameterList?')''{'statement*'}';

noexcept_specifyer                            :NOEXCEPT '('BOOL_LITTERAL')';

//expressions


assignment_expr          : equality_expr (ASSIGN_OP assignment_expr)? ;

equality_expr            : comparison_expr ((EQUALS | NOT) comparison_expr)* ;

comparison_expr          : bitshift_expr ((LESS | LARGER | LESS_EQ | LARGER_EQ) bitshift_expr)* ;

bitshift_expr            : additive_expr ((B_LEFT | B_RIGHT) additive_expr)* ;

additive_expr            : multiplicative_expr ((PLUS_OP | MINUS_OP) multiplicative_expr)* ;

multiplicative_expr      : unary_expr ((MULT_OP | DIV_OP | MOD_OP) unary_expr)* ;

unary_expr               : (PLUS_OP | MINUS_OP | NOT)? primary_expr ;

primary_expr             : function_call
                         | ID
                         | litteral
                         | '(' expression ')';
function_call                       :CALL scope_ressolution?ID'('(expression(','expression)*)?')';






//rules for attribute declarations
atribute_constructor                :type '('parameterList')';
atrribute_requires                  :REQUIRES '{'(implements_function|implements_Var)*'}';
implements_function                 :(type ID'('parameterList')');
implements_Var                      :type ID;

//helper rules
primitives                          :BOOL|BYTE|SHORT|INT|FLOAT|DOUBLE|LONG|HASH|STRING|CHAR;
integral_type                       :(SIGNDNES)?(BYTE|SHORT|INT);
litteral                            :STRING_LITTERAL|INT_LITTERAL|FLOAT_LITTERAL|CHAR_LITTERAL|BOOL_LITTERAL ;
type                                :primitives|(scope_ressolution?ID);
parameter                           :TYPE_QUALIFYERS* type ID;
parameterList                       :parameter(','parameter)*; 
classmember_declaration             :function_declaration|var_declaration;
operator_symbols                    :CUSTOM_OP_SYMBOLS|EQUALS|LESS|LARGER|NOT|LESS_EQ|LARGER_EQ|B_LEFT|B_RIGHT|INCREMENT|DECREMENT;
scope_ressolution                   :ID (SCOPE_RESSOLUTION_OP ID)* SCOPE_RESSOLUTION_OP ;
