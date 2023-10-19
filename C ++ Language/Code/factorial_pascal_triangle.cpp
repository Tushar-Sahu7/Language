// pascal triangle
// 1
// 1   1
// 1   2   1
// 1   3   3   1
// 1   4   6   4   1
// 1   5   10   10   5   1

#include <iostream>
using namespace std;
int factorial(int n)
{
	int factorial = 1;
	for (int i = 2; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{

			cout << factorial(i) / (factorial(j) * factorial(i - j)) << "   ";
		}
		cout << endl;
	}
	return 0;
}