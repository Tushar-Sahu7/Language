#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	unsigned long long fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact = fact * i;
	}
	cout << fact << endl;
	return 0;
}