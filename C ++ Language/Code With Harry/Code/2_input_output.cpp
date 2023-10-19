#include <iostream>
using namespace std;
int main()
{
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'u';
    cout << "Here the value of a is " << a << " and the value of b is " << b << endl;
    cout << "The value of pi is " << pi << endl;
    cout << "The value of c is " << c << endl;

    int num1, num2;
    cout << "Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin >> num1;                          /*'>> is called Extraction operator'*/

    cout << "Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin >> num2;                          /*'>> is called Extraction operator'*/

    cout << "The sum is " << num1 + num2;
    return 0;
}