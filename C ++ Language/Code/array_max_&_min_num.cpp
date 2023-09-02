#include <iostream>
#include <limits.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int maxNo = INT_MIN;
	int minNo = INT_MAX;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		maxNo = max(maxNo, arr[i]);
		minNo = min(minNo, arr[i]);
	}
	cout << maxNo << "   " << minNo << endl;
	return 0;
}