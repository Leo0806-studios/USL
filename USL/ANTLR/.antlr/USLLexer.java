// Generated from c:/Users/leo08/source/repos/USL/USL/ANTLR/USL.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class USLLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NAMESPACE=1, CLASS=2, ENUM=3, PRIMITIVES=4, TEMPLATE=5, ASYNC=6;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"NAMESPACE", "CLASS", "ENUM", "PRIMITIVES", "TEMPLATE", "ASYNC"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'namespace'", "'class'", "'enum'", null, "'template'", "'async'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "NAMESPACE", "CLASS", "ENUM", "PRIMITIVES", "TEMPLATE", "ASYNC"
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


	public USLLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "USL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0006]\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0003\u0003M\b\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0000\u0000"+
		"\u0006\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006"+
		"\u0001\u0000\u0000e\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001"+
		"\u0000\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001"+
		"\u0000\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000"+
		"\u0000\u0000\u0001\r\u0001\u0000\u0000\u0000\u0003\u0017\u0001\u0000\u0000"+
		"\u0000\u0005\u001d\u0001\u0000\u0000\u0000\u0007L\u0001\u0000\u0000\u0000"+
		"\tN\u0001\u0000\u0000\u0000\u000bW\u0001\u0000\u0000\u0000\r\u000e\u0005"+
		"n\u0000\u0000\u000e\u000f\u0005a\u0000\u0000\u000f\u0010\u0005m\u0000"+
		"\u0000\u0010\u0011\u0005e\u0000\u0000\u0011\u0012\u0005s\u0000\u0000\u0012"+
		"\u0013\u0005p\u0000\u0000\u0013\u0014\u0005a\u0000\u0000\u0014\u0015\u0005"+
		"c\u0000\u0000\u0015\u0016\u0005e\u0000\u0000\u0016\u0002\u0001\u0000\u0000"+
		"\u0000\u0017\u0018\u0005c\u0000\u0000\u0018\u0019\u0005l\u0000\u0000\u0019"+
		"\u001a\u0005a\u0000\u0000\u001a\u001b\u0005s\u0000\u0000\u001b\u001c\u0005"+
		"s\u0000\u0000\u001c\u0004\u0001\u0000\u0000\u0000\u001d\u001e\u0005e\u0000"+
		"\u0000\u001e\u001f\u0005n\u0000\u0000\u001f \u0005u\u0000\u0000 !\u0005"+
		"m\u0000\u0000!\u0006\u0001\u0000\u0000\u0000\"#\u0005b\u0000\u0000#$\u0005"+
		"y\u0000\u0000$%\u0005t\u0000\u0000%M\u0005e\u0000\u0000&\'\u0005s\u0000"+
		"\u0000\'(\u0005h\u0000\u0000()\u0005o\u0000\u0000)*\u0005r\u0000\u0000"+
		"*M\u0005t\u0000\u0000+,\u0005i\u0000\u0000,-\u0005n\u0000\u0000-M\u0005"+
		"t\u0000\u0000./\u0005l\u0000\u0000/0\u0005o\u0000\u000001\u0005n\u0000"+
		"\u00001M\u0005g\u0000\u000023\u0005f\u0000\u000034\u0005l\u0000\u0000"+
		"45\u0005o\u0000\u000056\u0005a\u0000\u00006M\u0005t\u0000\u000078\u0005"+
		"d\u0000\u000089\u0005o\u0000\u00009:\u0005u\u0000\u0000:;\u0005b\u0000"+
		"\u0000;<\u0005l\u0000\u0000<M\u0005e\u0000\u0000=>\u0005h\u0000\u0000"+
		">?\u0005a\u0000\u0000?@\u0005s\u0000\u0000@M\u0005h\u0000\u0000AB\u0005"+
		"s\u0000\u0000BC\u0005t\u0000\u0000CD\u0005r\u0000\u0000DE\u0005i\u0000"+
		"\u0000EF\u0005n\u0000\u0000FM\u0005g\u0000\u0000GH\u0005c\u0000\u0000"+
		"HI\u0005h\u0000\u0000IJ\u0005a\u0000\u0000JM\u0005r\u0000\u0000KM\u0001"+
		"\u0000\u0000\u0000L\"\u0001\u0000\u0000\u0000L&\u0001\u0000\u0000\u0000"+
		"L+\u0001\u0000\u0000\u0000L.\u0001\u0000\u0000\u0000L2\u0001\u0000\u0000"+
		"\u0000L7\u0001\u0000\u0000\u0000L=\u0001\u0000\u0000\u0000LA\u0001\u0000"+
		"\u0000\u0000LG\u0001\u0000\u0000\u0000LK\u0001\u0000\u0000\u0000M\b\u0001"+
		"\u0000\u0000\u0000NO\u0005t\u0000\u0000OP\u0005e\u0000\u0000PQ\u0005m"+
		"\u0000\u0000QR\u0005p\u0000\u0000RS\u0005l\u0000\u0000ST\u0005a\u0000"+
		"\u0000TU\u0005t\u0000\u0000UV\u0005e\u0000\u0000V\n\u0001\u0000\u0000"+
		"\u0000WX\u0005a\u0000\u0000XY\u0005s\u0000\u0000YZ\u0005y\u0000\u0000"+
		"Z[\u0005n\u0000\u0000[\\\u0005c\u0000\u0000\\\f\u0001\u0000\u0000\u0000"+
		"\u0002\u0000L\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}