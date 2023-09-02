#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
	int s = 0;
	int e = n;
	int mid = s + e / 2;
	while (s <= e)
	{
		if (key == arr[mid])
		{
			return mid;
		}
		else if (key < arr[mid])
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return -1;
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
	int key;
	cin >> key;

	cout << BinarySearch(arr, n, key) << endl;
	return 0;
}