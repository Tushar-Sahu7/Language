#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cout << "Write a number to check if it is a armstrong number or not ";
	cin >> n;
	int qub_digit = 0;
	int org_num = n;
	// get  last digit by diving the number by 10
	// then add qubic of digit
	// then updating the number by removing the last digit
	while (n > 0)
	{
		int digit = n % 10;
		qub_digit = qub_digit + digit * digit * digit;
		// qub_digit += pow(digit , 3);
		n = n / 10;
	}
	// checking if the number is equal to original number or not
	if (org_num == qub_digit)
	{
		cout << org_num << " is a armstrong number";
	}
	else
	{
		cout << org_num << "not a armstrong number";
	}
	return 0;
}