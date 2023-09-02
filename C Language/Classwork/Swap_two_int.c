#include <stdio.h>

int main(void) {
  int a, b, temp;
  printf("Enter any two integer\n");
  scanf("%d %d",&a ,&b);
  printf("Before swaping a = %d, b = %d\n", a, b);
  temp = a;
  a = b;
  b = temp;
  printf("After swaping a = %d, b =  %d\n",a ,b);
  /* Swap Variables Using Bitwise Operator */
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("After again swaping a = %d and b = %d\n", a, b);
  /* Swap using another method */
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After again swaping a = %d and b = %d\n", a, b);
  return 0;
}