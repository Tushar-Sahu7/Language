// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. user difined header files: It is written by the programmer
// #include "this.h" --> this will produe an error if this.h is not present in the currenrt directory

using namespace std;
// Printing hello world
int main()
{
    cout << "Hello, world!" << endl;
    return 0;
}