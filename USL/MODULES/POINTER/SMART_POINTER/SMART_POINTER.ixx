module;
#include "corecrt_memcpy_s.h"
export module SMART_POINTER;
class Ref_Base;
template <class _Ty>
class ptr_Base {
public:
	_Ty* _Ptr;
	Ref_Base* _Ref;

};
class Ref_Base {
public:
	virtual void* get() { return nullptr; }
};
export template <class _Ty>
class Smart_Pointer:public ptr_Base<_Ty> {

public:
	void Create_and_Make_Shared(Ref_Base* ref, _Ty* Ptr) {
		this->_Ptr = Ptr;
		this->_Ref = ref;
	}
};

template<class _Ty>
class Ref_Obj:Ref_Base {
private:
	_Ty Obj;
public:
	Ref_Obj(_Ty& obj) {
		auto a = new(&Obj) _Ty();
		size_t size= sizeof(_Ty);
		memcpy(&Obj, &obj, size);
	}
	void* get()override {
		return &Obj;
	}

};
export template<class _Ty>
Smart_Pointer<_Ty> Create_Smart_Ptr(_Ty obj) {
	Ref_Base* ref = (Ref_Base*)new Ref_Obj<_Ty>(obj);
	_Ty* ptr = (_Ty*)ref->get();
	Smart_Pointer<_Ty> ret;
	ret.Create_and_Make_Shared(ref, ptr);
	return ret;
}