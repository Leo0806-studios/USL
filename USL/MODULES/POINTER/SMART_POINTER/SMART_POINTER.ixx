module;
#include "corecrt_memcpy_s.h"
export module SMART_POINTER;
class Ref_Base;
template <class _Ty>
class ptr_Base {
public:
	_Ty* _Ptr;
	Ref_Base* _Ref;
	void decref() {
		_Ref->decref();
	}
	void increaf() {
		_Ref->increaf();
	}
	void destroy() {
		_Ref->destroy();
	}
	void _delete() {
		_Ref->_delete();
	}
	void increw() {
		_Ref->increw();
	}

};
class Ref_Base {
public:
	unsigned long long uses = 1;
	unsigned long long weaks = 1;
	virtual void* get() { return nullptr; }
	virtual void decref() {

	}
	virtual void increaf() {

	}
	virtual void destroy() {

	}
	virtual void _delete() {

	}
	virtual void increw() {

	}
};
export template <class _Ty>
class Smart_Pointer:public ptr_Base<_Ty> {

public:
	Smart_Pointer() {
	}
	template<class _Ty2>
	Smart_Pointer(Smart_Pointer<_Ty2>&& other) {
		this->_Ptr = other._Ptr;
		this->_Ref = other._Ref;
		this->increaf();

	}
	void Create_and_Make_Shared(Ref_Base* ref, _Ty* Ptr) {
		this->_Ptr = Ptr;
		this->_Ref = ref;
	}
	_Ty* Get() {
		//this->increw()
		return this->_Ptr;
	}
	~Smart_Pointer() {
		this->decref();
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
	void decref()override {
		if ((--uses) <= 0) {
			destroy();
			_delete();
		}
	}
	 void increaf()override {
		 uses++;
	}
	 void destroy()override {
		 Obj.~_Ty();
	}
	 void _delete()override {
		 delete this;
	}
	 void increw()override {

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