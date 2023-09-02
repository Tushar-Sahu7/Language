#include <stdio.h>

int main(void) {
  int num, d1, d2, d3, d4, d5, sum;
  printf("Enter a five digit integer\n");
  scanf("%d", &num);
  if (num >= 10000 && num <= 99999) {
    d1 = num % 10;
    num /= 10;
    d2 = num % 10;
    num /= 10;
    d3 = num % 10;
    num /= 10;
    d4 = num % 10;
    num /= 10;
    d5 = num % 10;
    num /= 10;
    if (d1 == d5 && d2 == d4) {
      printf("Palindrome number\n");
    } else {
      printf("Not a palindrome number\n");
    }
  } 
  else {
   printf("Not a five digit integer. Please rerun the program.\n");
  }
  return 0;
}