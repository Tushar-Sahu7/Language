#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	int reverse = 0;
	//get the last digit
	//update the n by removing the last digit
	//store digits in reverse variable and print it
	while (n > 0)
	{
		int last_digit = n % 10;
		reverse = reverse * 10 + last_digit;
		n = n / 10;
	}
	cout << reverse;
	return 0;
}