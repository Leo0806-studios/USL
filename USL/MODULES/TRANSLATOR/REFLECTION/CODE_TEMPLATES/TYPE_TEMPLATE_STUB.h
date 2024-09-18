#pragma once
#include <cstdint>

//typeLengt;
//MethodCount;
//VarCound;
//ParameterCount;
//TypeName;

class Type_Base {
	unsigned short typeLengt;
	unsigned int varstart;
	unsigned int MethodStart;
	unsigned int PropStart;

};

namespace Reflection {
	class Type_TypeName :public Type_Base {
		// bytes 0,1:length of type;
		// bytes 2,3,4,5: Type ID;  
		// bytes 6,7: Member_Var_count;
		// bytes 8,Member_Var_count*ver_Length: Member Vars
		//		member var: length 13 bytes
		//		byte 0:protection level and static(highest bit if static rest is rest)
		//		bytes 1,2,3,4: type_Id;
		//		bytes 5,6,7,8: offset. if static address;
		//		bytes 9,10,11,12: name Hash;
		// bytes Member_Var_count*ver_Length+1,+2:Method_Count;
		// bytes +3,+Method_Count*Method_Sig_Length;
		//		Method_Sig:
		//		the first element always points to a method that calls the default constructor and returns the obj
		//		the second one always points to a method that calls the copy constructor and returns the obj
		//		the third one points to a method that accepts a pethod ptr that points to a custom constructor and returns the obj;
		//		byte 0:protection level and static(highest bit if static rest is rest)
		//		
		// 
		// 
		// 
		//
		char* typeInfo = new char[100] ;


	};
}
