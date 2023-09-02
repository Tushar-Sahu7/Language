#include<iostream>
using namespace std;
int DecimalToBinary(int n){
	long long ans = 0;
	long long x = 1;
	while(n>0){
		int lastDigit = n%2;
		ans += x*lastDigit;
		x *= 10;
		n /= 2;
	}
	return ans;
}
int main(int argc, char *argv[])
{
	int n;
	cin>> n;
	cout<<DecimalToBinary(n);
	return 0;
}