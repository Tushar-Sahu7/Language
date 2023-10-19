#include <iostream>
using namespace std;
int sumOfSubarray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int curr = 0;
		for (int j = i; j < n; j++)
		{
			curr += arr[j];
			cout << curr << "   ";
		}
		cout << endl;
	}
}
int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sumOfSubarray(arr, n);
	return 0;
}