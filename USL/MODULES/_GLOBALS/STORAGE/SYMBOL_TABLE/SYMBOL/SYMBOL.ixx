export module SYMBOL;
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
export class Symbol {
public :
	t ee;

};