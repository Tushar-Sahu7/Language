#include<iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cout<<"Write a number to check if it is a prime number or not ";
	cin>>n;
	bool flag  = true;
	//cheking n is divisble by any number 
	//only check for root of a number
	//i<=sqrt(n)
    for (int i=2;i*i<=n;i++){
    if(n%i == 0){
    	flag = false;
    	break;
    }
    //checking n is +ve or not
    }
    if(n<=1){
    	flag = false;
    }
    //after the loop is done printing the answer
    if(flag){
    	cout<<n<<" is a prime number";
    }
    else{
    	cout<<n<<" is not a prime number";
    }
	return 0;
}