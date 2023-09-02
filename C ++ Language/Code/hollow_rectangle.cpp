#include <iostream>
using namespace std;
int main()
{
	int row, col;
	cin >> row >> col;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (i == 1 || i == row)
			{
				std::cout << "*  ";
			}
			else if (j == 1 || j == col)
			{
				std::cout << "*  ";
			}
			else
			{
				std::cout << "   ";
			}
		}
		cout<<endl;
	}
	return 0;
}