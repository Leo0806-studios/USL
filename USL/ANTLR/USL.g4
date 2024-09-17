grammar USL;
//LEXER
//keywords
CLASS                   : 'class' ;
NAMESPACE               : 'namespace' ;
INBUILD_TYPE            : 'byte'|'short'|'int'|'long'|'d_long'|'float'|'double'|'bool'|'hash'|'uuid'|'char'|'string';
TEMPLATE                : 'template' ;
ASYNC                   : 'async' ;
SYNC                    : 'sync' ;
INTERNAL                :'_internal';
NULL                    :'null';
CUSTOM_KEYWORD          : 'keyword(DEF)' ;
CUSTOM_FLOW_CONTROL     : 'control_F(DEF)' ;
CUSTOM_OPERATOR         :'operator(DEF)';


//operators unary
ASSIGN                  : '=';
PLUS                    : '+';
MINUS                   :'-';
MULT                    :'*';
DIV                     :'/';
MOD                     :'%';
HASH                    :'#';


//operators Binary
INCREMENT               :'++';
DECREMENT               :'--';


//operators Bit
B_LEFT                  :'<<';
B_RIGHT                 :'>>';

//operator booean
EQUALS                  :'==';
LESS                    :'<';
LARGER                  :'>';
NOT                     :'!';
LESS_EQ                 :'<='|'=<';
LARGER_EQ               :'>='|'=>';


COMMA                   : ',';
DOT                     : '.';
SEMI                    :';';
LS                      :'(';
RS                      :')';
LC                      :'{';
RC                      :'}';
LA                      :'[';
RA                      :']';

//
ATRIBUTE                :'GENERIC';
//Litterals
INT                     : [0-9]+ ;
FLOAT                   : [0-9]+'.'[0-9]* ;
CHAR       : '\'' [^'] '\'';
STRING     : '"' (~["\\] | '\\' .)* '"' ;
BOOL       : 'true' | 'false' ;


COMMENT    : '//' ~[\r\n]* -> skip ;
WS         : [ \t\r\n]+ -> skip ;


ID         : [a-zA-Z_][a-zA-Z0-9_]* ;
TEMPLATE_PARAM :[a-zA-Z_][a-zA-Z0-9_]*;




//PARSER


//startpoint
program                                             :statement+ EOF;

//statement DEF
statement                                           : customControlFlowDeclaration
                                                    |customOperatorDeclaration
                                                    |customKeyDeclaration
                                                    |namespaceDeclaration
                                                    |classDeclaration
                                                    |functionDeclarationWithAtr
                                                    |functionDeclaration
                                                    |varDeclarationWithAtr
                                                    |varDeclaration
                                                    |assignment
                                                    |expressionStatement
                                                    |block
                                                    ;
                                                    
customKeyDeclaration                                : CUSTOM_KEYWORD ID block;
                                                    



customOperatorDeclaration                           :typeSpacifier CUSTOM_OPERATOR ID block;

customControlFlowDeclaration                        : CUSTOM_FLOW_CONTROL ID block;

namespaceDeclaration                                :NAMESPACE ID block;

classDeclaration                                    :CLASS ID '{' classMember* '}';

classMember                                         : varDeclaration
                                                    | functionDeclaration
                                                    ;
functionDeclaration                                 : (ASYNC | SYNC )? typeSpacifier ID LS parameterList RS block;
functionDeclarationWithAtr                          :attribute (ASYNC | SYNC )? typeSpacifier ID LS parameterList RS block;

varDeclaration                                      :(attribute)* typeSpacifier ID ('='expression)? ';';
varDeclarationWithAtr                               :attribute typeSpacifier ID ('='expression)? ';';


parameterList                                       :parameter (COMMA parameter )*;
parameter                                           : typeSpacifier ID;

assignment                                          :ID ASSIGN expression SEMI;

typeSpacifier                                       : INBUILD_TYPE
                                                    |ID
                                                    |TEMPLATE '<'CLASS typeSpacifier (COMMA (CLASS typeSpacifier))*'>'
                                                    ;

expression                                          :primary
                                                    |expression (PLUS|MINUS|MULT|DIV|MOD) expression
                                                    |ID LS (expression (COMMA expression)*)? RS
                                                    |ID INCREMENT
                                                    |ID DECREMENT
                                                    ;

primary                                             :INT
                                                    |FLOAT
                                                    |BOOL
                                                    |STRING
                                                    |CHAR
                                                    |ID
                                                    |'(' expression ')'
                                                    ;

expressionStatement                                 :expression SEMI;

attribute                                           :'[' ATRIBUTE '(' attributeParameterList ')' ']'
                                                    ;


attributeParameterList                              :attributeParameter (COMMA attributeParameter)*
                                                    |genericParameterList
                                                    ;

attributeParameter                                  :STRING
                                                    |ID
                                                    ;

genericParameterList                                :ID (COMMA ID)*;



block                                               :'{' statement* '}';
