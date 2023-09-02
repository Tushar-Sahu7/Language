#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	//print last digit by diving the number by 10
	//then updating the number by removing the last digit
	while (n > 0)
	{
		int digit = n % 10;
		cout << digit << "  ";
		n = n / 10;
	}
	return 0;
}