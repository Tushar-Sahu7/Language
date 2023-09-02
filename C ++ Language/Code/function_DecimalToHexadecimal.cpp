#include <iostream>
using namespace std;
string DecimalToHexadecimal(int n)
{
	string ans = "";
	while (n > 0)
	{
		int lastDigit = n % 16;
		if (lastDigit <= 9)
		{
			string m = to_string(lastDigit);
			ans = m + ans;
			n = n / 16;
		}
		else
		{
			string m = to_string(lastDigit);
			if (m == "10")
			{
				m = "A";
			}
			else if (m == "11")
			{
				m = "B";
			}
			else if (m == "12")
			{
				m = "C";
			}
			else if (m == "13")
			{
				m = "D";
			}
			else if (m == "14")
			{
				m = "E";
			}
			else
			{
				m = "F";
			}

			ans = m + ans;
			n = n / 16;
		}
	}
	return ans;
}
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	cout << DecimalToHexadecimal(n);

	return 0;
}