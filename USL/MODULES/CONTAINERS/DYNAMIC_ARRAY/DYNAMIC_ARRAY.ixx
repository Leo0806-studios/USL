module;
#include "corecrt_memcpy_s.h"
#include "cstdio"
export module DYNAMIC_ARRAY;


export template<class _T>
 class Dynamic_Array {
	_T* data;
	unsigned long length;
	unsigned long capacity;
	_T& _Try_Get(unsigned int index){
		if (index <= length) {
			&data[index];
		}
		else {
			printf("out of array bounds\n terminating...");
			throw;
		}
	}
public:

	Dynamic_Array() {
		data = new _T[1];

	}
	Dynamic_Array(int count) {
		data = new _T[count];
		length = 0;
		capacity = count;
	}
	void Add(_T obj) {
		if (_Check_if_Fits()) {
			data[length] = obj;
			length++;
		}
		else {
			_Resize_and_Copy();
		}
	}
	void Shrink_To_Fit() {
		_Shrink_To_Fit();
	}
	void RemoveAt(unsigned int index) {
		data[index - 1].~_T();
		length--;
	}
	_T& operator[](unsigned int index) {

		return _Try_Get(index);
	}
	~Dynamic_Array() {
		delete[] data;
	}
private:
	//void _Shrink_To_Fit() {
	//	_T* tmp = new _T[length];
	//	size_t size = length*sizeof(_T);
	//	memcpy(tmp, data, length);
	//	delete[] data;
	//	data = new _T[length];
	//	for (int i = 0; i < length;i++) {
	//		data[i] = tmp[i];
	//	}
	//	delete[] tmp;
	//}

	void _Shrink_To_Fit() {
		if (length == capacity) {
			// No need to shrink if length and capacity are the same
			return;
		}

		// Allocate a new array with size exactly matching the current length
		_T* tmp = new _T[length];

		// Copy only the elements from 0 to length (not capacity)
		rsize_t size = length * sizeof(_T);
		memcpy(tmp, data, size);

		// Delete the old array and assign the new one
		delete[] data;
		data = tmp;

		// Update the capacity to match the length
		capacity = length;
	}
	bool _Check_if_Fits() {
		if (length + 1 <= capacity) {
			return true;
		}
		return false;
	}
	void _Resize_and_Copy() {
		_T* tmp = new _T[capacity];
		memcpy(tmp, data, capacity);
		delete[] data;
		data = new _T[capacity + 1];
		memcpy(data, tmp, capacity);
		delete[] tmp;


	}


};


