#include<stdio.h>
int main()
{
    int n, last_digit, rev=0;
    scanf("%d", &n);
    while(n>0){
        last_digit = n%10;   
        rev = rev*10 + last_digit;
        n/=10;
    }
    printf("%d", rev);
 return 0;
}