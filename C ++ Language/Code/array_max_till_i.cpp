#include <iostream>
#include <limits.h>
using namespace std;
int Max_till_i(int arr[], int n)
{
	int mx = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		mx = max(mx, arr[i]);
		cout << mx << "   ";
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

	Max_till_i(arr, n);
	return 0;
}