#include <iostream>
using namespace std;

bool powOf2(int n)
{
	return (n && !(n & (n - 1)));
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	cout << powOf2(n) << endl;
	return 0;
}