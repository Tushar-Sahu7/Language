#include <iostream>
using namespace std;
int SelectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
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
	SelectionSort(arr, n);
	return 0;
}