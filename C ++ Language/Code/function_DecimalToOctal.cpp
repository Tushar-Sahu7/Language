#include <iostream>
using namespace std;
int DecimalToOctal(int n)
{
	long long ans = 0;
	long long x = 1;
	while (n > 0)
	{
		int lastDigit = n % 8;
		ans += x * lastDigit;
		x *= 10;
		n /= 8;
	}
	return ans;
}
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	cout << DecimalToOctal(n);
	return 0;
}