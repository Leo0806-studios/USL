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

//dereff
DEREF                   :'->';

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
//LS                      :'(';
//RS                      :')';
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
                                                    |funcCall
                                                    ;
                                                    
customKeyDeclaration                                : CUSTOM_KEYWORD ID block;
                                                    



customOperatorDeclaration                           :typeSpecifier CUSTOM_OPERATOR ID block;

customControlFlowDeclaration                        : CUSTOM_FLOW_CONTROL ID block;

namespaceDeclaration                                :NAMESPACE ID block;

classDeclaration                                    :templateDeclaration? CLASS ID '{' classMember* '}';

classMember                                         : varDeclaration
                                                    | functionDeclaration
                                                    ;
functionDeclaration                                 : (ASYNC | SYNC )? typeSpecifier ID '(' parameterList ')' block;
functionDeclarationWithAtr                          :attribute (ASYNC | SYNC )? typeSpecifier ID '(' parameterList ')' block;

varDeclaration                                      :(attribute)* typeSpecifier ID ('='expression)? ';';
varDeclarationWithAtr                               :attribute typeSpecifier ID ('='expression)? ';';

memberAcces                                         :ID DOT ID
                                                    |ID DEREF ID
                                                    
                                                    ;


funcCall                                            :ID '('expression? ')'SEMI
                                                    |memberAcces '('expression?')' SEMI
                                                    ;

parameterList                                       :parameter (COMMA parameter )*;

parameter                                           : typeSpecifier ID;

assignment                                          :(ID ASSIGN expression SEMI)
                                                    |(expression ASSIGN expression SEMI)
                                                    ;

templateDeclaration                                 :TEMPLATE'<'CLASS TEMPLATE_PARAM (COMMA TEMPLATE_PARAM)* '>'
                                                    ;

typeSpecifier                                       : INBUILD_TYPE
                                                    |ID
                                                    |TEMPLATE '<'CLASS typeSpecifier (COMMA (CLASS typeSpecifier))*'>'
                                                    ;

expression                                          :primary
                                                    |expression (PLUS|MINUS|MULT|DIV|MOD) expression
                                                    |ID '(' (expression (COMMA expression)*)? ')'
                                                    |ID INCREMENT
                                                    |ID DECREMENT
                                                    |memberAcces
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
