module;
#include "corecrt_memcpy_s.h"
#include <string.h>
export module STRING;

export struct String {
private:
	char* data;
	size_t length;
public:
	String() {
		
	}
	String(char* _Val) {
	length=	strlen(_Val)+1;
	data = new char[length];
	memcpy(data, _Val, length);
	}
	String(const char* _Val) {
		length = strlen(_Val) + 1;
		data = new char[length];
		memcpy(data, _Val, length);
	}
	const char* c_Str() {

	}
};