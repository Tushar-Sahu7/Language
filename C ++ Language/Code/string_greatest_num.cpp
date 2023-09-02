#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	string s = "34623758";

	sort(s.begin(), s.end(), greater<int>());

	cout << s << endl;
	return 0;
}