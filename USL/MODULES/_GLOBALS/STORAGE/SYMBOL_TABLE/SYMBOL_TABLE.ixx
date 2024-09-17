export module SYMBOL_TABLE;
import SYMBOL;
import DYNAMIC_ARRAY;
class t {
public:
    int i;
    t() {}
    t(t&& other) {
        this->i = other.i;
    }
    t(const t& other) {
        this->i = other.i;
    }
    t operator=(const t& other) {

        return other;
    }
    t operator=(t& other) {

        return other;
    }
};
export namespace GLOBAL {
	class Symbol_Table {
	public:
		t erere;
		Dynamic_Array<Symbol> Table;

	};
}