#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	char arr[n+1];
	for (int i = 0;i < n ; i ++){
		cin >> arr[i];
	}
	int i  = 0;
	bool check = false;
	while(arr[i]  != '\0' ){
		if(arr[i] == arr[n-1-i]){
			check = true;
		}
		else{
			break;
		}
		i++;
	}
	if(check){
		cout << "palindrome";
	}
	else{
		cout << "not a palindrome";
	}
	return 0;
}