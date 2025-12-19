// USL_LINKER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int main()
{
    std::cout << "Hello World!\n";
}
//using RVA = unsigned __int64;
//namespace MXF_LINKER {
//				const char handler : 2;//0 none, 1 = terminate, 2 =user defined ,3=both
//				const char reserved : 6;//TBD
//            };
//			char raw;
//        };
//        union {
//            struct {
//				uint16_t HandlerCount;
//				HandlerData handlers[];
//            };
//            //other stuff tbd
//        };
//    };
//    struct DebugInfoEntry {
//		unsigned __int64 lenght; //length of the entry including this field
//		RVA RTTI; //rva to the typeinfo structure
//        union {
//            struct {
//		char isFunction:1; //true if function false if variable
//		char isStatic : 1; //true if static
//		char isConst : 1; //true if const
//		char reserved : 5; //TBD
//            };
//			char raw;
//        };
//        union {
//            RVA nameOffset;
//            const char name[];
//        };
//    };
//
//    struct UnwindCode {
//		const char Code : 4;//the unwind code
//		const char OpInfo : 4;//additional info for the unwind code
//    };
//    enum HandlerType {
//		Terminate = 1,
//		UserDefined = 2
//    };
//    struct HandlerData {
//		HandlerType type;
//		RVA HandlerAddress;
//		RVA HandlerRtti;
//    };
//    struct FunctionDebugInfoEntry {
//        DebugInfoEntry base;
//		uint16_t prologSize;
//		uint16_t epilogSize;
//        RVA EpilogeStart;
//		uint16_t UnwindCodeCount;
//        UnwindCode codes[];
//        union {
//            struct {
//    struct DebugInfoTable {
//        union {
//            struct {
//
//        const char LargeOffsets : 1; //rvas are 64 bit if true
//        const char PooledNames : 1;//nnames are pooled if true. otherwise they are stored null terinated inline in the entries
//		char reserved : 6;//TBD
//            };
//			char raw;
//        };
//		unsigned __int64 entryCount;
//		DebugInfoEntry entries[];
//	};
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
