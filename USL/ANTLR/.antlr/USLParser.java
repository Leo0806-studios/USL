// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class USLParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, CLASS=3, NAMESPACE=4, INBUILD_TYPE=5, TEMPLATE=6, ASYNC=7, 
		SYNC=8, INTERNAL=9, NULL=10, CUSTOM_KEYWORD=11, CUSTOM_FLOW_CONTROL=12, 
		CUSTOM_OPERATOR=13, ASSIGN=14, PLUS=15, MINUS=16, MULT=17, DIV=18, MOD=19, 
		HASH=20, DEREF=21, INCREMENT=22, DECREMENT=23, B_LEFT=24, B_RIGHT=25, 
		EQUALS=26, LESS=27, LARGER=28, NOT=29, LESS_EQ=30, LARGER_EQ=31, COMMA=32, 
		DOT=33, SEMI=34, LC=35, RC=36, LA=37, RA=38, ATRIBUTE=39, INT=40, FLOAT=41, 
		CHAR=42, STRING=43, BOOL=44, COMMENT=45, WS=46, ID=47, TEMPLATE_PARAM=48;
	public static final int
		RULE_program = 0, RULE_statement = 1, RULE_customKeyDeclaration = 2, RULE_customOperatorDeclaration = 3, 
		RULE_customControlFlowDeclaration = 4, RULE_namespaceDeclaration = 5, 
		RULE_classDeclaration = 6, RULE_classMember = 7, RULE_functionDeclaration = 8, 
		RULE_functionDeclarationWithAtr = 9, RULE_varDeclaration = 10, RULE_varDeclarationWithAtr = 11, 
		RULE_memberAcces = 12, RULE_funcCall = 13, RULE_parameterList = 14, RULE_parameter = 15, 
		RULE_assignment = 16, RULE_templateDeclaration = 17, RULE_typeSpecifier = 18, 
		RULE_expression = 19, RULE_primary = 20, RULE_expressionStatement = 21, 
		RULE_attribute = 22, RULE_attributeParameterList = 23, RULE_attributeParameter = 24, 
		RULE_genericParameterList = 25, RULE_block = 26;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "statement", "customKeyDeclaration", "customOperatorDeclaration", 
			"customControlFlowDeclaration", "namespaceDeclaration", "classDeclaration", 
			"classMember", "functionDeclaration", "functionDeclarationWithAtr", "varDeclaration", 
			"varDeclarationWithAtr", "memberAcces", "funcCall", "parameterList", 
			"parameter", "assignment", "templateDeclaration", "typeSpecifier", "expression", 
			"primary", "expressionStatement", "attribute", "attributeParameterList", 
			"attributeParameter", "genericParameterList", "block"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "'class'", "'namespace'", null, "'template'", "'async'", 
			"'sync'", "'_internal'", "'null'", "'keyword(DEF)'", "'control_F(DEF)'", 
			"'operator(DEF)'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'#'", "'->'", 
			"'++'", "'--'", "'<<'", "'>>'", "'=='", "'<'", "'>'", "'!'", null, null, 
			"','", "'.'", "';'", "'{'", "'}'", "'['", "']'", "'GENERIC'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, "CLASS", "NAMESPACE", "INBUILD_TYPE", "TEMPLATE", "ASYNC", 
			"SYNC", "INTERNAL", "NULL", "CUSTOM_KEYWORD", "CUSTOM_FLOW_CONTROL", 
			"CUSTOM_OPERATOR", "ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "MOD", "HASH", 
			"DEREF", "INCREMENT", "DECREMENT", "B_LEFT", "B_RIGHT", "EQUALS", "LESS", 
			"LARGER", "NOT", "LESS_EQ", "LARGER_EQ", "COMMA", "DOT", "SEMI", "LC", 
			"RC", "LA", "RA", "ATRIBUTE", "INT", "FLOAT", "CHAR", "STRING", "BOOL", 
			"COMMENT", "WS", "ID", "TEMPLATE_PARAM"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "USL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public USLParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(USLParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(54);
				statement();
				}
				}
				setState(57); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 174994147514874L) != 0) );
			setState(59);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public CustomControlFlowDeclarationContext customControlFlowDeclaration() {
			return getRuleContext(CustomControlFlowDeclarationContext.class,0);
		}
		public CustomOperatorDeclarationContext customOperatorDeclaration() {
			return getRuleContext(CustomOperatorDeclarationContext.class,0);
		}
		public CustomKeyDeclarationContext customKeyDeclaration() {
			return getRuleContext(CustomKeyDeclarationContext.class,0);
		}
		public NamespaceDeclarationContext namespaceDeclaration() {
			return getRuleContext(NamespaceDeclarationContext.class,0);
		}
		public ClassDeclarationContext classDeclaration() {
			return getRuleContext(ClassDeclarationContext.class,0);
		}
		public FunctionDeclarationWithAtrContext functionDeclarationWithAtr() {
			return getRuleContext(FunctionDeclarationWithAtrContext.class,0);
		}
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public VarDeclarationWithAtrContext varDeclarationWithAtr() {
			return getRuleContext(VarDeclarationWithAtrContext.class,0);
		}
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public ExpressionStatementContext expressionStatement() {
			return getRuleContext(ExpressionStatementContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public FuncCallContext funcCall() {
			return getRuleContext(FuncCallContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(74);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(61);
				customControlFlowDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(62);
				customOperatorDeclaration();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(63);
				customKeyDeclaration();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(64);
				namespaceDeclaration();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(65);
				classDeclaration();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(66);
				functionDeclarationWithAtr();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(67);
				functionDeclaration();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(68);
				varDeclarationWithAtr();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(69);
				varDeclaration();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(70);
				assignment();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(71);
				expressionStatement();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(72);
				block();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(73);
				funcCall();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CustomKeyDeclarationContext extends ParserRuleContext {
		public TerminalNode CUSTOM_KEYWORD() { return getToken(USLParser.CUSTOM_KEYWORD, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public CustomKeyDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_customKeyDeclaration; }
	}

	public final CustomKeyDeclarationContext customKeyDeclaration() throws RecognitionException {
		CustomKeyDeclarationContext _localctx = new CustomKeyDeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_customKeyDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			match(CUSTOM_KEYWORD);
			setState(77);
			match(ID);
			setState(78);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CustomOperatorDeclarationContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode CUSTOM_OPERATOR() { return getToken(USLParser.CUSTOM_OPERATOR, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public CustomOperatorDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_customOperatorDeclaration; }
	}

	public final CustomOperatorDeclarationContext customOperatorDeclaration() throws RecognitionException {
		CustomOperatorDeclarationContext _localctx = new CustomOperatorDeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_customOperatorDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(80);
			typeSpecifier();
			setState(81);
			match(CUSTOM_OPERATOR);
			setState(82);
			match(ID);
			setState(83);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CustomControlFlowDeclarationContext extends ParserRuleContext {
		public TerminalNode CUSTOM_FLOW_CONTROL() { return getToken(USLParser.CUSTOM_FLOW_CONTROL, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public CustomControlFlowDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_customControlFlowDeclaration; }
	}

	public final CustomControlFlowDeclarationContext customControlFlowDeclaration() throws RecognitionException {
		CustomControlFlowDeclarationContext _localctx = new CustomControlFlowDeclarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_customControlFlowDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(85);
			match(CUSTOM_FLOW_CONTROL);
			setState(86);
			match(ID);
			setState(87);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NamespaceDeclarationContext extends ParserRuleContext {
		public TerminalNode NAMESPACE() { return getToken(USLParser.NAMESPACE, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public NamespaceDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceDeclaration; }
	}

	public final NamespaceDeclarationContext namespaceDeclaration() throws RecognitionException {
		NamespaceDeclarationContext _localctx = new NamespaceDeclarationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_namespaceDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(NAMESPACE);
			setState(90);
			match(ID);
			setState(91);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ClassDeclarationContext extends ParserRuleContext {
		public TerminalNode CLASS() { return getToken(USLParser.CLASS, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode LC() { return getToken(USLParser.LC, 0); }
		public TerminalNode RC() { return getToken(USLParser.RC, 0); }
		public TemplateDeclarationContext templateDeclaration() {
			return getRuleContext(TemplateDeclarationContext.class,0);
		}
		public List<ClassMemberContext> classMember() {
			return getRuleContexts(ClassMemberContext.class);
		}
		public ClassMemberContext classMember(int i) {
			return getRuleContext(ClassMemberContext.class,i);
		}
		public ClassDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classDeclaration; }
	}

	public final ClassDeclarationContext classDeclaration() throws RecognitionException {
		ClassDeclarationContext _localctx = new ClassDeclarationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_classDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TEMPLATE) {
				{
				setState(93);
				templateDeclaration();
				}
			}

			setState(96);
			match(CLASS);
			setState(97);
			match(ID);
			setState(98);
			match(LC);
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 140874927309280L) != 0)) {
				{
				{
				setState(99);
				classMember();
				}
				}
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(105);
			match(RC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ClassMemberContext extends ParserRuleContext {
		public VarDeclarationContext varDeclaration() {
			return getRuleContext(VarDeclarationContext.class,0);
		}
		public FunctionDeclarationContext functionDeclaration() {
			return getRuleContext(FunctionDeclarationContext.class,0);
		}
		public ClassMemberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_classMember; }
	}

	public final ClassMemberContext classMember() throws RecognitionException {
		ClassMemberContext _localctx = new ClassMemberContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_classMember);
		try {
			setState(109);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(107);
				varDeclaration();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(108);
				functionDeclaration();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionDeclarationContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public TerminalNode ASYNC() { return getToken(USLParser.ASYNC, 0); }
		public TerminalNode SYNC() { return getToken(USLParser.SYNC, 0); }
		public FunctionDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclaration; }
	}

	public final FunctionDeclarationContext functionDeclaration() throws RecognitionException {
		FunctionDeclarationContext _localctx = new FunctionDeclarationContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_functionDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASYNC || _la==SYNC) {
				{
				setState(111);
				_la = _input.LA(1);
				if ( !(_la==ASYNC || _la==SYNC) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(114);
			typeSpecifier();
			setState(115);
			match(ID);
			setState(116);
			match(T__0);
			setState(117);
			parameterList();
			setState(118);
			match(T__1);
			setState(119);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunctionDeclarationWithAtrContext extends ParserRuleContext {
		public AttributeContext attribute() {
			return getRuleContext(AttributeContext.class,0);
		}
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public ParameterListContext parameterList() {
			return getRuleContext(ParameterListContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public TerminalNode ASYNC() { return getToken(USLParser.ASYNC, 0); }
		public TerminalNode SYNC() { return getToken(USLParser.SYNC, 0); }
		public FunctionDeclarationWithAtrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionDeclarationWithAtr; }
	}

	public final FunctionDeclarationWithAtrContext functionDeclarationWithAtr() throws RecognitionException {
		FunctionDeclarationWithAtrContext _localctx = new FunctionDeclarationWithAtrContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_functionDeclarationWithAtr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(121);
			attribute();
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASYNC || _la==SYNC) {
				{
				setState(122);
				_la = _input.LA(1);
				if ( !(_la==ASYNC || _la==SYNC) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
			}

			setState(125);
			typeSpecifier();
			setState(126);
			match(ID);
			setState(127);
			match(T__0);
			setState(128);
			parameterList();
			setState(129);
			match(T__1);
			setState(130);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarDeclarationContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode SEMI() { return getToken(USLParser.SEMI, 0); }
		public List<AttributeContext> attribute() {
			return getRuleContexts(AttributeContext.class);
		}
		public AttributeContext attribute(int i) {
			return getRuleContext(AttributeContext.class,i);
		}
		public TerminalNode ASSIGN() { return getToken(USLParser.ASSIGN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public VarDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclaration; }
	}

	public final VarDeclarationContext varDeclaration() throws RecognitionException {
		VarDeclarationContext _localctx = new VarDeclarationContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_varDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==LA) {
				{
				{
				setState(132);
				attribute();
				}
				}
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(138);
			typeSpecifier();
			setState(139);
			match(ID);
			setState(142);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASSIGN) {
				{
				setState(140);
				match(ASSIGN);
				setState(141);
				expression(0);
				}
			}

			setState(144);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VarDeclarationWithAtrContext extends ParserRuleContext {
		public AttributeContext attribute() {
			return getRuleContext(AttributeContext.class,0);
		}
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode SEMI() { return getToken(USLParser.SEMI, 0); }
		public TerminalNode ASSIGN() { return getToken(USLParser.ASSIGN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public VarDeclarationWithAtrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varDeclarationWithAtr; }
	}

	public final VarDeclarationWithAtrContext varDeclarationWithAtr() throws RecognitionException {
		VarDeclarationWithAtrContext _localctx = new VarDeclarationWithAtrContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_varDeclarationWithAtr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			attribute();
			setState(147);
			typeSpecifier();
			setState(148);
			match(ID);
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ASSIGN) {
				{
				setState(149);
				match(ASSIGN);
				setState(150);
				expression(0);
				}
			}

			setState(153);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MemberAccesContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(USLParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(USLParser.ID, i);
		}
		public TerminalNode DOT() { return getToken(USLParser.DOT, 0); }
		public TerminalNode DEREF() { return getToken(USLParser.DEREF, 0); }
		public MemberAccesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_memberAcces; }
	}

	public final MemberAccesContext memberAcces() throws RecognitionException {
		MemberAccesContext _localctx = new MemberAccesContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_memberAcces);
		try {
			setState(161);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(155);
				match(ID);
				setState(156);
				match(DOT);
				setState(157);
				match(ID);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(158);
				match(ID);
				setState(159);
				match(DEREF);
				setState(160);
				match(ID);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FuncCallContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode SEMI() { return getToken(USLParser.SEMI, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public MemberAccesContext memberAcces() {
			return getRuleContext(MemberAccesContext.class,0);
		}
		public FuncCallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funcCall; }
	}

	public final FuncCallContext funcCall() throws RecognitionException {
		FuncCallContext _localctx = new FuncCallContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_funcCall);
		int _la;
		try {
			setState(178);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(163);
				match(ID);
				setState(164);
				match(T__0);
				setState(166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 174822348816386L) != 0)) {
					{
					setState(165);
					expression(0);
					}
				}

				setState(168);
				match(T__1);
				setState(169);
				match(SEMI);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(170);
				memberAcces();
				setState(171);
				match(T__0);
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 174822348816386L) != 0)) {
					{
					setState(172);
					expression(0);
					}
				}

				setState(175);
				match(T__1);
				setState(176);
				match(SEMI);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterListContext extends ParserRuleContext {
		public List<ParameterContext> parameter() {
			return getRuleContexts(ParameterContext.class);
		}
		public ParameterContext parameter(int i) {
			return getRuleContext(ParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public ParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameterList; }
	}

	public final ParameterListContext parameterList() throws RecognitionException {
		ParameterListContext _localctx = new ParameterListContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_parameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			parameter();
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(181);
				match(COMMA);
				setState(182);
				parameter();
				}
				}
				setState(187);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParameterContext extends ParserRuleContext {
		public TypeSpecifierContext typeSpecifier() {
			return getRuleContext(TypeSpecifierContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public ParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameter; }
	}

	public final ParameterContext parameter() throws RecognitionException {
		ParameterContext _localctx = new ParameterContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_parameter);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			typeSpecifier();
			setState(189);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignmentContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode ASSIGN() { return getToken(USLParser.ASSIGN, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode SEMI() { return getToken(USLParser.SEMI, 0); }
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_assignment);
		try {
			setState(201);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(191);
				match(ID);
				setState(192);
				match(ASSIGN);
				setState(193);
				expression(0);
				setState(194);
				match(SEMI);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(196);
				expression(0);
				setState(197);
				match(ASSIGN);
				setState(198);
				expression(0);
				setState(199);
				match(SEMI);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TemplateDeclarationContext extends ParserRuleContext {
		public TerminalNode TEMPLATE() { return getToken(USLParser.TEMPLATE, 0); }
		public TerminalNode LESS() { return getToken(USLParser.LESS, 0); }
		public TerminalNode CLASS() { return getToken(USLParser.CLASS, 0); }
		public List<TerminalNode> TEMPLATE_PARAM() { return getTokens(USLParser.TEMPLATE_PARAM); }
		public TerminalNode TEMPLATE_PARAM(int i) {
			return getToken(USLParser.TEMPLATE_PARAM, i);
		}
		public TerminalNode LARGER() { return getToken(USLParser.LARGER, 0); }
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public TemplateDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_templateDeclaration; }
	}

	public final TemplateDeclarationContext templateDeclaration() throws RecognitionException {
		TemplateDeclarationContext _localctx = new TemplateDeclarationContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_templateDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(203);
			match(TEMPLATE);
			setState(204);
			match(LESS);
			setState(205);
			match(CLASS);
			setState(206);
			match(TEMPLATE_PARAM);
			setState(211);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(207);
				match(COMMA);
				setState(208);
				match(TEMPLATE_PARAM);
				}
				}
				setState(213);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(214);
			match(LARGER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeSpecifierContext extends ParserRuleContext {
		public TerminalNode INBUILD_TYPE() { return getToken(USLParser.INBUILD_TYPE, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public TerminalNode TEMPLATE() { return getToken(USLParser.TEMPLATE, 0); }
		public TerminalNode LESS() { return getToken(USLParser.LESS, 0); }
		public List<TerminalNode> CLASS() { return getTokens(USLParser.CLASS); }
		public TerminalNode CLASS(int i) {
			return getToken(USLParser.CLASS, i);
		}
		public List<TypeSpecifierContext> typeSpecifier() {
			return getRuleContexts(TypeSpecifierContext.class);
		}
		public TypeSpecifierContext typeSpecifier(int i) {
			return getRuleContext(TypeSpecifierContext.class,i);
		}
		public TerminalNode LARGER() { return getToken(USLParser.LARGER, 0); }
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public TypeSpecifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typeSpecifier; }
	}

	public final TypeSpecifierContext typeSpecifier() throws RecognitionException {
		TypeSpecifierContext _localctx = new TypeSpecifierContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_typeSpecifier);
		int _la;
		try {
			setState(232);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INBUILD_TYPE:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				match(INBUILD_TYPE);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 2);
				{
				setState(217);
				match(ID);
				}
				break;
			case TEMPLATE:
				enterOuterAlt(_localctx, 3);
				{
				setState(218);
				match(TEMPLATE);
				setState(219);
				match(LESS);
				setState(220);
				match(CLASS);
				setState(221);
				typeSpecifier();
				setState(227);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(222);
					match(COMMA);
					{
					setState(223);
					match(CLASS);
					setState(224);
					typeSpecifier();
					}
					}
					}
					setState(229);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(230);
				match(LARGER);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionContext extends ParserRuleContext {
		public PrimaryContext primary() {
			return getRuleContext(PrimaryContext.class,0);
		}
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public TerminalNode INCREMENT() { return getToken(USLParser.INCREMENT, 0); }
		public TerminalNode DECREMENT() { return getToken(USLParser.DECREMENT, 0); }
		public MemberAccesContext memberAcces() {
			return getRuleContext(MemberAccesContext.class,0);
		}
		public TerminalNode PLUS() { return getToken(USLParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(USLParser.MINUS, 0); }
		public TerminalNode MULT() { return getToken(USLParser.MULT, 0); }
		public TerminalNode DIV() { return getToken(USLParser.DIV, 0); }
		public TerminalNode MOD() { return getToken(USLParser.MOD, 0); }
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 38;
		enterRecursionRule(_localctx, 38, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(254);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(235);
				primary();
				}
				break;
			case 2:
				{
				setState(236);
				match(ID);
				setState(237);
				match(T__0);
				setState(246);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 174822348816386L) != 0)) {
					{
					setState(238);
					expression(0);
					setState(243);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==COMMA) {
						{
						{
						setState(239);
						match(COMMA);
						setState(240);
						expression(0);
						}
						}
						setState(245);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
				}

				setState(248);
				match(T__1);
				}
				break;
			case 3:
				{
				setState(249);
				match(ID);
				setState(250);
				match(INCREMENT);
				}
				break;
			case 4:
				{
				setState(251);
				match(ID);
				setState(252);
				match(DECREMENT);
				}
				break;
			case 5:
				{
				setState(253);
				memberAcces();
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(261);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					pushNewRecursionContext(_localctx, _startState, RULE_expression);
					setState(256);
					if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
					setState(257);
					_la = _input.LA(1);
					if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 1015808L) != 0)) ) {
					_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(258);
					expression(6);
					}
					} 
				}
				setState(263);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrimaryContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(USLParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(USLParser.FLOAT, 0); }
		public TerminalNode BOOL() { return getToken(USLParser.BOOL, 0); }
		public TerminalNode STRING() { return getToken(USLParser.STRING, 0); }
		public TerminalNode CHAR() { return getToken(USLParser.CHAR, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public PrimaryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primary; }
	}

	public final PrimaryContext primary() throws RecognitionException {
		PrimaryContext _localctx = new PrimaryContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_primary);
		try {
			setState(274);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				enterOuterAlt(_localctx, 1);
				{
				setState(264);
				match(INT);
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 2);
				{
				setState(265);
				match(FLOAT);
				}
				break;
			case BOOL:
				enterOuterAlt(_localctx, 3);
				{
				setState(266);
				match(BOOL);
				}
				break;
			case STRING:
				enterOuterAlt(_localctx, 4);
				{
				setState(267);
				match(STRING);
				}
				break;
			case CHAR:
				enterOuterAlt(_localctx, 5);
				{
				setState(268);
				match(CHAR);
				}
				break;
			case ID:
				enterOuterAlt(_localctx, 6);
				{
				setState(269);
				match(ID);
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 7);
				{
				setState(270);
				match(T__0);
				setState(271);
				expression(0);
				setState(272);
				match(T__1);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionStatementContext extends ParserRuleContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMI() { return getToken(USLParser.SEMI, 0); }
		public ExpressionStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStatement; }
	}

	public final ExpressionStatementContext expressionStatement() throws RecognitionException {
		ExpressionStatementContext _localctx = new ExpressionStatementContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_expressionStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(276);
			expression(0);
			setState(277);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttributeContext extends ParserRuleContext {
		public TerminalNode LA() { return getToken(USLParser.LA, 0); }
		public TerminalNode ATRIBUTE() { return getToken(USLParser.ATRIBUTE, 0); }
		public AttributeParameterListContext attributeParameterList() {
			return getRuleContext(AttributeParameterListContext.class,0);
		}
		public TerminalNode RA() { return getToken(USLParser.RA, 0); }
		public AttributeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attribute; }
	}

	public final AttributeContext attribute() throws RecognitionException {
		AttributeContext _localctx = new AttributeContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_attribute);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(279);
			match(LA);
			setState(280);
			match(ATRIBUTE);
			setState(281);
			match(T__0);
			setState(282);
			attributeParameterList();
			setState(283);
			match(T__1);
			setState(284);
			match(RA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttributeParameterListContext extends ParserRuleContext {
		public List<AttributeParameterContext> attributeParameter() {
			return getRuleContexts(AttributeParameterContext.class);
		}
		public AttributeParameterContext attributeParameter(int i) {
			return getRuleContext(AttributeParameterContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public GenericParameterListContext genericParameterList() {
			return getRuleContext(GenericParameterListContext.class,0);
		}
		public AttributeParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeParameterList; }
	}

	public final AttributeParameterListContext attributeParameterList() throws RecognitionException {
		AttributeParameterListContext _localctx = new AttributeParameterListContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_attributeParameterList);
		int _la;
		try {
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(286);
				attributeParameter();
				setState(291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==COMMA) {
					{
					{
					setState(287);
					match(COMMA);
					setState(288);
					attributeParameter();
					}
					}
					setState(293);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(294);
				genericParameterList();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AttributeParameterContext extends ParserRuleContext {
		public TerminalNode STRING() { return getToken(USLParser.STRING, 0); }
		public TerminalNode ID() { return getToken(USLParser.ID, 0); }
		public AttributeParameterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeParameter; }
	}

	public final AttributeParameterContext attributeParameter() throws RecognitionException {
		AttributeParameterContext _localctx = new AttributeParameterContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_attributeParameter);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(297);
			_la = _input.LA(1);
			if ( !(_la==STRING || _la==ID) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class GenericParameterListContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(USLParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(USLParser.ID, i);
		}
		public List<TerminalNode> COMMA() { return getTokens(USLParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(USLParser.COMMA, i);
		}
		public GenericParameterListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_genericParameterList; }
	}

	public final GenericParameterListContext genericParameterList() throws RecognitionException {
		GenericParameterListContext _localctx = new GenericParameterListContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_genericParameterList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(299);
			match(ID);
			setState(304);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(300);
				match(COMMA);
				setState(301);
				match(ID);
				}
				}
				setState(306);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlockContext extends ParserRuleContext {
		public TerminalNode LC() { return getToken(USLParser.LC, 0); }
		public TerminalNode RC() { return getToken(USLParser.RC, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(307);
			match(LC);
			setState(311);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 174994147514874L) != 0)) {
				{
				{
				setState(308);
				statement();
				}
				}
				setState(313);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(314);
			match(RC);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 19:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 5);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u00010\u013d\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007\u0018"+
		"\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0001\u0000\u0004\u0000"+
		"8\b\u0000\u000b\u0000\f\u00009\u0001\u0000\u0001\u0000\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003"+
		"\u0001K\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0003\u0006_\b\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0005\u0006e\b\u0006\n\u0006\f\u0006h\t\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0003\u0007n\b\u0007\u0001"+
		"\b\u0003\bq\b\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\t\u0001\t\u0003\t|\b\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\n\u0005\n\u0086\b\n\n\n\f\n\u0089\t\n\u0001\n"+
		"\u0001\n\u0001\n\u0001\n\u0003\n\u008f\b\n\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u0098\b\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0003\f\u00a2\b\f\u0001\r\u0001\r\u0001\r\u0003\r\u00a7\b\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00ae\b\r\u0001\r\u0001\r\u0001"+
		"\r\u0003\r\u00b3\b\r\u0001\u000e\u0001\u000e\u0001\u000e\u0005\u000e\u00b8"+
		"\b\u000e\n\u000e\f\u000e\u00bb\t\u000e\u0001\u000f\u0001\u000f\u0001\u000f"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0010\u0001\u0010\u0003\u0010\u00ca\b\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011\u0001\u0011"+
		"\u0005\u0011\u00d2\b\u0011\n\u0011\f\u0011\u00d5\t\u0011\u0001\u0011\u0001"+
		"\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0005\u0012\u00e2\b\u0012\n"+
		"\u0012\f\u0012\u00e5\t\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u00e9"+
		"\b\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0005\u0013\u00f2\b\u0013\n\u0013\f\u0013\u00f5\t\u0013"+
		"\u0003\u0013\u00f7\b\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0001\u0013\u0003\u0013\u00ff\b\u0013\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0005\u0013\u0104\b\u0013\n\u0013\f\u0013\u0107\t\u0013\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0003\u0014\u0113\b\u0014\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0005\u0017\u0122\b\u0017\n\u0017\f\u0017\u0125\t\u0017\u0001\u0017"+
		"\u0003\u0017\u0128\b\u0017\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019"+
		"\u0001\u0019\u0005\u0019\u012f\b\u0019\n\u0019\f\u0019\u0132\t\u0019\u0001"+
		"\u001a\u0001\u001a\u0005\u001a\u0136\b\u001a\n\u001a\f\u001a\u0139\t\u001a"+
		"\u0001\u001a\u0001\u001a\u0001\u001a\u0000\u0001&\u001b\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \""+
		"$&(*,.024\u0000\u0003\u0001\u0000\u0007\b\u0001\u0000\u000f\u0013\u0002"+
		"\u0000++//\u0151\u00007\u0001\u0000\u0000\u0000\u0002J\u0001\u0000\u0000"+
		"\u0000\u0004L\u0001\u0000\u0000\u0000\u0006P\u0001\u0000\u0000\u0000\b"+
		"U\u0001\u0000\u0000\u0000\nY\u0001\u0000\u0000\u0000\f^\u0001\u0000\u0000"+
		"\u0000\u000em\u0001\u0000\u0000\u0000\u0010p\u0001\u0000\u0000\u0000\u0012"+
		"y\u0001\u0000\u0000\u0000\u0014\u0087\u0001\u0000\u0000\u0000\u0016\u0092"+
		"\u0001\u0000\u0000\u0000\u0018\u00a1\u0001\u0000\u0000\u0000\u001a\u00b2"+
		"\u0001\u0000\u0000\u0000\u001c\u00b4\u0001\u0000\u0000\u0000\u001e\u00bc"+
		"\u0001\u0000\u0000\u0000 \u00c9\u0001\u0000\u0000\u0000\"\u00cb\u0001"+
		"\u0000\u0000\u0000$\u00e8\u0001\u0000\u0000\u0000&\u00fe\u0001\u0000\u0000"+
		"\u0000(\u0112\u0001\u0000\u0000\u0000*\u0114\u0001\u0000\u0000\u0000,"+
		"\u0117\u0001\u0000\u0000\u0000.\u0127\u0001\u0000\u0000\u00000\u0129\u0001"+
		"\u0000\u0000\u00002\u012b\u0001\u0000\u0000\u00004\u0133\u0001\u0000\u0000"+
		"\u000068\u0003\u0002\u0001\u000076\u0001\u0000\u0000\u000089\u0001\u0000"+
		"\u0000\u000097\u0001\u0000\u0000\u00009:\u0001\u0000\u0000\u0000:;\u0001"+
		"\u0000\u0000\u0000;<\u0005\u0000\u0000\u0001<\u0001\u0001\u0000\u0000"+
		"\u0000=K\u0003\b\u0004\u0000>K\u0003\u0006\u0003\u0000?K\u0003\u0004\u0002"+
		"\u0000@K\u0003\n\u0005\u0000AK\u0003\f\u0006\u0000BK\u0003\u0012\t\u0000"+
		"CK\u0003\u0010\b\u0000DK\u0003\u0016\u000b\u0000EK\u0003\u0014\n\u0000"+
		"FK\u0003 \u0010\u0000GK\u0003*\u0015\u0000HK\u00034\u001a\u0000IK\u0003"+
		"\u001a\r\u0000J=\u0001\u0000\u0000\u0000J>\u0001\u0000\u0000\u0000J?\u0001"+
		"\u0000\u0000\u0000J@\u0001\u0000\u0000\u0000JA\u0001\u0000\u0000\u0000"+
		"JB\u0001\u0000\u0000\u0000JC\u0001\u0000\u0000\u0000JD\u0001\u0000\u0000"+
		"\u0000JE\u0001\u0000\u0000\u0000JF\u0001\u0000\u0000\u0000JG\u0001\u0000"+
		"\u0000\u0000JH\u0001\u0000\u0000\u0000JI\u0001\u0000\u0000\u0000K\u0003"+
		"\u0001\u0000\u0000\u0000LM\u0005\u000b\u0000\u0000MN\u0005/\u0000\u0000"+
		"NO\u00034\u001a\u0000O\u0005\u0001\u0000\u0000\u0000PQ\u0003$\u0012\u0000"+
		"QR\u0005\r\u0000\u0000RS\u0005/\u0000\u0000ST\u00034\u001a\u0000T\u0007"+
		"\u0001\u0000\u0000\u0000UV\u0005\f\u0000\u0000VW\u0005/\u0000\u0000WX"+
		"\u00034\u001a\u0000X\t\u0001\u0000\u0000\u0000YZ\u0005\u0004\u0000\u0000"+
		"Z[\u0005/\u0000\u0000[\\\u00034\u001a\u0000\\\u000b\u0001\u0000\u0000"+
		"\u0000]_\u0003\"\u0011\u0000^]\u0001\u0000\u0000\u0000^_\u0001\u0000\u0000"+
		"\u0000_`\u0001\u0000\u0000\u0000`a\u0005\u0003\u0000\u0000ab\u0005/\u0000"+
		"\u0000bf\u0005#\u0000\u0000ce\u0003\u000e\u0007\u0000dc\u0001\u0000\u0000"+
		"\u0000eh\u0001\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000fg\u0001\u0000"+
		"\u0000\u0000gi\u0001\u0000\u0000\u0000hf\u0001\u0000\u0000\u0000ij\u0005"+
		"$\u0000\u0000j\r\u0001\u0000\u0000\u0000kn\u0003\u0014\n\u0000ln\u0003"+
		"\u0010\b\u0000mk\u0001\u0000\u0000\u0000ml\u0001\u0000\u0000\u0000n\u000f"+
		"\u0001\u0000\u0000\u0000oq\u0007\u0000\u0000\u0000po\u0001\u0000\u0000"+
		"\u0000pq\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000\u0000rs\u0003$\u0012"+
		"\u0000st\u0005/\u0000\u0000tu\u0005\u0001\u0000\u0000uv\u0003\u001c\u000e"+
		"\u0000vw\u0005\u0002\u0000\u0000wx\u00034\u001a\u0000x\u0011\u0001\u0000"+
		"\u0000\u0000y{\u0003,\u0016\u0000z|\u0007\u0000\u0000\u0000{z\u0001\u0000"+
		"\u0000\u0000{|\u0001\u0000\u0000\u0000|}\u0001\u0000\u0000\u0000}~\u0003"+
		"$\u0012\u0000~\u007f\u0005/\u0000\u0000\u007f\u0080\u0005\u0001\u0000"+
		"\u0000\u0080\u0081\u0003\u001c\u000e\u0000\u0081\u0082\u0005\u0002\u0000"+
		"\u0000\u0082\u0083\u00034\u001a\u0000\u0083\u0013\u0001\u0000\u0000\u0000"+
		"\u0084\u0086\u0003,\u0016\u0000\u0085\u0084\u0001\u0000\u0000\u0000\u0086"+
		"\u0089\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0087"+
		"\u0088\u0001\u0000\u0000\u0000\u0088\u008a\u0001\u0000\u0000\u0000\u0089"+
		"\u0087\u0001\u0000\u0000\u0000\u008a\u008b\u0003$\u0012\u0000\u008b\u008e"+
		"\u0005/\u0000\u0000\u008c\u008d\u0005\u000e\u0000\u0000\u008d\u008f\u0003"+
		"&\u0013\u0000\u008e\u008c\u0001\u0000\u0000\u0000\u008e\u008f\u0001\u0000"+
		"\u0000\u0000\u008f\u0090\u0001\u0000\u0000\u0000\u0090\u0091\u0005\"\u0000"+
		"\u0000\u0091\u0015\u0001\u0000\u0000\u0000\u0092\u0093\u0003,\u0016\u0000"+
		"\u0093\u0094\u0003$\u0012\u0000\u0094\u0097\u0005/\u0000\u0000\u0095\u0096"+
		"\u0005\u000e\u0000\u0000\u0096\u0098\u0003&\u0013\u0000\u0097\u0095\u0001"+
		"\u0000\u0000\u0000\u0097\u0098\u0001\u0000\u0000\u0000\u0098\u0099\u0001"+
		"\u0000\u0000\u0000\u0099\u009a\u0005\"\u0000\u0000\u009a\u0017\u0001\u0000"+
		"\u0000\u0000\u009b\u009c\u0005/\u0000\u0000\u009c\u009d\u0005!\u0000\u0000"+
		"\u009d\u00a2\u0005/\u0000\u0000\u009e\u009f\u0005/\u0000\u0000\u009f\u00a0"+
		"\u0005\u0015\u0000\u0000\u00a0\u00a2\u0005/\u0000\u0000\u00a1\u009b\u0001"+
		"\u0000\u0000\u0000\u00a1\u009e\u0001\u0000\u0000\u0000\u00a2\u0019\u0001"+
		"\u0000\u0000\u0000\u00a3\u00a4\u0005/\u0000\u0000\u00a4\u00a6\u0005\u0001"+
		"\u0000\u0000\u00a5\u00a7\u0003&\u0013\u0000\u00a6\u00a5\u0001\u0000\u0000"+
		"\u0000\u00a6\u00a7\u0001\u0000\u0000\u0000\u00a7\u00a8\u0001\u0000\u0000"+
		"\u0000\u00a8\u00a9\u0005\u0002\u0000\u0000\u00a9\u00b3\u0005\"\u0000\u0000"+
		"\u00aa\u00ab\u0003\u0018\f\u0000\u00ab\u00ad\u0005\u0001\u0000\u0000\u00ac"+
		"\u00ae\u0003&\u0013\u0000\u00ad\u00ac\u0001\u0000\u0000\u0000\u00ad\u00ae"+
		"\u0001\u0000\u0000\u0000\u00ae\u00af\u0001\u0000\u0000\u0000\u00af\u00b0"+
		"\u0005\u0002\u0000\u0000\u00b0\u00b1\u0005\"\u0000\u0000\u00b1\u00b3\u0001"+
		"\u0000\u0000\u0000\u00b2\u00a3\u0001\u0000\u0000\u0000\u00b2\u00aa\u0001"+
		"\u0000\u0000\u0000\u00b3\u001b\u0001\u0000\u0000\u0000\u00b4\u00b9\u0003"+
		"\u001e\u000f\u0000\u00b5\u00b6\u0005 \u0000\u0000\u00b6\u00b8\u0003\u001e"+
		"\u000f\u0000\u00b7\u00b5\u0001\u0000\u0000\u0000\u00b8\u00bb\u0001\u0000"+
		"\u0000\u0000\u00b9\u00b7\u0001\u0000\u0000\u0000\u00b9\u00ba\u0001\u0000"+
		"\u0000\u0000\u00ba\u001d\u0001\u0000\u0000\u0000\u00bb\u00b9\u0001\u0000"+
		"\u0000\u0000\u00bc\u00bd\u0003$\u0012\u0000\u00bd\u00be\u0005/\u0000\u0000"+
		"\u00be\u001f\u0001\u0000\u0000\u0000\u00bf\u00c0\u0005/\u0000\u0000\u00c0"+
		"\u00c1\u0005\u000e\u0000\u0000\u00c1\u00c2\u0003&\u0013\u0000\u00c2\u00c3"+
		"\u0005\"\u0000\u0000\u00c3\u00ca\u0001\u0000\u0000\u0000\u00c4\u00c5\u0003"+
		"&\u0013\u0000\u00c5\u00c6\u0005\u000e\u0000\u0000\u00c6\u00c7\u0003&\u0013"+
		"\u0000\u00c7\u00c8\u0005\"\u0000\u0000\u00c8\u00ca\u0001\u0000\u0000\u0000"+
		"\u00c9\u00bf\u0001\u0000\u0000\u0000\u00c9\u00c4\u0001\u0000\u0000\u0000"+
		"\u00ca!\u0001\u0000\u0000\u0000\u00cb\u00cc\u0005\u0006\u0000\u0000\u00cc"+
		"\u00cd\u0005\u001b\u0000\u0000\u00cd\u00ce\u0005\u0003\u0000\u0000\u00ce"+
		"\u00d3\u00050\u0000\u0000\u00cf\u00d0\u0005 \u0000\u0000\u00d0\u00d2\u0005"+
		"0\u0000\u0000\u00d1\u00cf\u0001\u0000\u0000\u0000\u00d2\u00d5\u0001\u0000"+
		"\u0000\u0000\u00d3\u00d1\u0001\u0000\u0000\u0000\u00d3\u00d4\u0001\u0000"+
		"\u0000\u0000\u00d4\u00d6\u0001\u0000\u0000\u0000\u00d5\u00d3\u0001\u0000"+
		"\u0000\u0000\u00d6\u00d7\u0005\u001c\u0000\u0000\u00d7#\u0001\u0000\u0000"+
		"\u0000\u00d8\u00e9\u0005\u0005\u0000\u0000\u00d9\u00e9\u0005/\u0000\u0000"+
		"\u00da\u00db\u0005\u0006\u0000\u0000\u00db\u00dc\u0005\u001b\u0000\u0000"+
		"\u00dc\u00dd\u0005\u0003\u0000\u0000\u00dd\u00e3\u0003$\u0012\u0000\u00de"+
		"\u00df\u0005 \u0000\u0000\u00df\u00e0\u0005\u0003\u0000\u0000\u00e0\u00e2"+
		"\u0003$\u0012\u0000\u00e1\u00de\u0001\u0000\u0000\u0000\u00e2\u00e5\u0001"+
		"\u0000\u0000\u0000\u00e3\u00e1\u0001\u0000\u0000\u0000\u00e3\u00e4\u0001"+
		"\u0000\u0000\u0000\u00e4\u00e6\u0001\u0000\u0000\u0000\u00e5\u00e3\u0001"+
		"\u0000\u0000\u0000\u00e6\u00e7\u0005\u001c\u0000\u0000\u00e7\u00e9\u0001"+
		"\u0000\u0000\u0000\u00e8\u00d8\u0001\u0000\u0000\u0000\u00e8\u00d9\u0001"+
		"\u0000\u0000\u0000\u00e8\u00da\u0001\u0000\u0000\u0000\u00e9%\u0001\u0000"+
		"\u0000\u0000\u00ea\u00eb\u0006\u0013\uffff\uffff\u0000\u00eb\u00ff\u0003"+
		"(\u0014\u0000\u00ec\u00ed\u0005/\u0000\u0000\u00ed\u00f6\u0005\u0001\u0000"+
		"\u0000\u00ee\u00f3\u0003&\u0013\u0000\u00ef\u00f0\u0005 \u0000\u0000\u00f0"+
		"\u00f2\u0003&\u0013\u0000\u00f1\u00ef\u0001\u0000\u0000\u0000\u00f2\u00f5"+
		"\u0001\u0000\u0000\u0000\u00f3\u00f1\u0001\u0000\u0000\u0000\u00f3\u00f4"+
		"\u0001\u0000\u0000\u0000\u00f4\u00f7\u0001\u0000\u0000\u0000\u00f5\u00f3"+
		"\u0001\u0000\u0000\u0000\u00f6\u00ee\u0001\u0000\u0000\u0000\u00f6\u00f7"+
		"\u0001\u0000\u0000\u0000\u00f7\u00f8\u0001\u0000\u0000\u0000\u00f8\u00ff"+
		"\u0005\u0002\u0000\u0000\u00f9\u00fa\u0005/\u0000\u0000\u00fa\u00ff\u0005"+
		"\u0016\u0000\u0000\u00fb\u00fc\u0005/\u0000\u0000\u00fc\u00ff\u0005\u0017"+
		"\u0000\u0000\u00fd\u00ff\u0003\u0018\f\u0000\u00fe\u00ea\u0001\u0000\u0000"+
		"\u0000\u00fe\u00ec\u0001\u0000\u0000\u0000\u00fe\u00f9\u0001\u0000\u0000"+
		"\u0000\u00fe\u00fb\u0001\u0000\u0000\u0000\u00fe\u00fd\u0001\u0000\u0000"+
		"\u0000\u00ff\u0105\u0001\u0000\u0000\u0000\u0100\u0101\n\u0005\u0000\u0000"+
		"\u0101\u0102\u0007\u0001\u0000\u0000\u0102\u0104\u0003&\u0013\u0006\u0103"+
		"\u0100\u0001\u0000\u0000\u0000\u0104\u0107\u0001\u0000\u0000\u0000\u0105"+
		"\u0103\u0001\u0000\u0000\u0000\u0105\u0106\u0001\u0000\u0000\u0000\u0106"+
		"\'\u0001\u0000\u0000\u0000\u0107\u0105\u0001\u0000\u0000\u0000\u0108\u0113"+
		"\u0005(\u0000\u0000\u0109\u0113\u0005)\u0000\u0000\u010a\u0113\u0005,"+
		"\u0000\u0000\u010b\u0113\u0005+\u0000\u0000\u010c\u0113\u0005*\u0000\u0000"+
		"\u010d\u0113\u0005/\u0000\u0000\u010e\u010f\u0005\u0001\u0000\u0000\u010f"+
		"\u0110\u0003&\u0013\u0000\u0110\u0111\u0005\u0002\u0000\u0000\u0111\u0113"+
		"\u0001\u0000\u0000\u0000\u0112\u0108\u0001\u0000\u0000\u0000\u0112\u0109"+
		"\u0001\u0000\u0000\u0000\u0112\u010a\u0001\u0000\u0000\u0000\u0112\u010b"+
		"\u0001\u0000\u0000\u0000\u0112\u010c\u0001\u0000\u0000\u0000\u0112\u010d"+
		"\u0001\u0000\u0000\u0000\u0112\u010e\u0001\u0000\u0000\u0000\u0113)\u0001"+
		"\u0000\u0000\u0000\u0114\u0115\u0003&\u0013\u0000\u0115\u0116\u0005\""+
		"\u0000\u0000\u0116+\u0001\u0000\u0000\u0000\u0117\u0118\u0005%\u0000\u0000"+
		"\u0118\u0119\u0005\'\u0000\u0000\u0119\u011a\u0005\u0001\u0000\u0000\u011a"+
		"\u011b\u0003.\u0017\u0000\u011b\u011c\u0005\u0002\u0000\u0000\u011c\u011d"+
		"\u0005&\u0000\u0000\u011d-\u0001\u0000\u0000\u0000\u011e\u0123\u00030"+
		"\u0018\u0000\u011f\u0120\u0005 \u0000\u0000\u0120\u0122\u00030\u0018\u0000"+
		"\u0121\u011f\u0001\u0000\u0000\u0000\u0122\u0125\u0001\u0000\u0000\u0000"+
		"\u0123\u0121\u0001\u0000\u0000\u0000\u0123\u0124\u0001\u0000\u0000\u0000"+
		"\u0124\u0128\u0001\u0000\u0000\u0000\u0125\u0123\u0001\u0000\u0000\u0000"+
		"\u0126\u0128\u00032\u0019\u0000\u0127\u011e\u0001\u0000\u0000\u0000\u0127"+
		"\u0126\u0001\u0000\u0000\u0000\u0128/\u0001\u0000\u0000\u0000\u0129\u012a"+
		"\u0007\u0002\u0000\u0000\u012a1\u0001\u0000\u0000\u0000\u012b\u0130\u0005"+
		"/\u0000\u0000\u012c\u012d\u0005 \u0000\u0000\u012d\u012f\u0005/\u0000"+
		"\u0000\u012e\u012c\u0001\u0000\u0000\u0000\u012f\u0132\u0001\u0000\u0000"+
		"\u0000\u0130\u012e\u0001\u0000\u0000\u0000\u0130\u0131\u0001\u0000\u0000"+
		"\u0000\u01313\u0001\u0000\u0000\u0000\u0132\u0130\u0001\u0000\u0000\u0000"+
		"\u0133\u0137\u0005#\u0000\u0000\u0134\u0136\u0003\u0002\u0001\u0000\u0135"+
		"\u0134\u0001\u0000\u0000\u0000\u0136\u0139\u0001\u0000\u0000\u0000\u0137"+
		"\u0135\u0001\u0000\u0000\u0000\u0137\u0138\u0001\u0000\u0000\u0000\u0138"+
		"\u013a\u0001\u0000\u0000\u0000\u0139\u0137\u0001\u0000\u0000\u0000\u013a"+
		"\u013b\u0005$\u0000\u0000\u013b5\u0001\u0000\u0000\u0000\u001c9J^fmp{"+
		"\u0087\u008e\u0097\u00a1\u00a6\u00ad\u00b2\u00b9\u00c9\u00d3\u00e3\u00e8"+
		"\u00f3\u00f6\u00fe\u0105\u0112\u0123\u0127\u0130\u0137";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}