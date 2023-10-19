#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operator in C++" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a ++ is " << a++ << endl;
    cout << "The value of a -- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    // Assingment operators --> used to assign values to variables
    // The value assign from right to left
    // int a = 3, b = 9;
    //  char d = 'd';

    // Comparison operators
    cout << "Following are the comparison operator in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator  ((a==b) && (a<b)) is: " << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator  ((a==b) || (a<b)) is: " << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator  (!(a==b)) is: " << (!(a == b)) << endl;

    return 0;
}