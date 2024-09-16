// USL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
import DYNAMIC_ARRAY;
import SMART_POINTER;
#include <iostream>
struct MyStruct {
    int a;
    double ww;
    const char* www = "wewaeawe";
    ~MyStruct(){}
};
int main(int argc, char** argv)
{
    auto aaa = Create_Smart_Ptr<MyStruct>(MyStruct());
    Dynamic_Array<MyStruct> array(10);
    MyStruct re;
    re.a = 12;
    re.ww = 1231.2;
    array.Add(re);
    array.Add(MyStruct());

    array.RemoveAt(1);
   array.Shrink_To_Fit();
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
