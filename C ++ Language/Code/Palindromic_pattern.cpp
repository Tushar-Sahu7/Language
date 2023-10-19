#include <iostream>
using namespace std;
int main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int j;
		for (j = 1; j <= n - i; j++)
		{
			cout << "   ";
		}
		int k = i;
		for (; j <= n; j++)
		{
			cout << k-- << "  ";
		}
		k = 1;
		for (; j < n + i; j++)
		{
			cout << ++k << "  ";
		}
		for (; j <= (2 * n - 1); j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}