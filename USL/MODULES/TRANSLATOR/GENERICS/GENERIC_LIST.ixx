module;
#include "TRANSLATOR/REFLECTION/CODE_TEMPLATES/TYPE_TEMPLATE_STUB.h"
export module GENERIC_LIST;
extern"C" void GENERIC_LIST_ADD(void* ptr);
extern "C" void* GENERIC_LIST_GET(int index);
extern "C" void GENERIC_LIST_REMOVE(int index);
class base {
public :
	int i;
};
class derived :public Reflection::Type_TypeName, base {
	int ie;
};

export namespace GENERICS {

	class List {
	private:
		void* ptr_ToADD = nullptr;
		unsigned long capacity;
		unsigned long length;
		void* first_Element;
	public:
		 void expand_Generic_List() {

		}
	public:
		unsigned int Type_ID;

		void Add(void* ptr) {
			ptr_ToADD = ptr;
			GENERIC_LIST_ADD(this);
		}
		void* operator[](int index) {
			GENERIC_LIST_GET(index);
		}
		void Remove(int index) {
			GENERIC_LIST_REMOVE(index);
		}

	};
}

extern "C" {
	void expand_Generic_List(void* list) {
		GENERICS::List* lists;
		lists = (GENERICS::List*)list;
		lists->expand_Generic_List();
	}


}