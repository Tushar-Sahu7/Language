#include <stdio.h>

int main(void) {
  int i = 34;
  int *j = &i;
  //j will now store the address of i
  printf("The value of i is %d\n", i);
  printf("The value of i is %d\n", *j);
  printf("The address of i is %u\n", &i);
  printf("The address of i is %u\n", j);
  printf("The address of j is %u\n", &j);
  printf("The value of j is %u\n", *(&j));

  //pointer to pointer 
  int **k ;
  k = &j;
  printf("%u\n", k);
  return 0;
}