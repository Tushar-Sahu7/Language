#include <stdio.h>

int main(void) {
  //int *ptr = &i;
 // int i = 34;
  //printf("The value of ptr is %u \n", ptr);
  //ptr++;
 // printf("The value of ptr is %u \n", ptr);

   
  char c = 34;
  char *ptr = &c;
  printf("The value of ptr is %u \n", ptr);
  ptr++;
  printf("The value of ptr is %u \n", ptr);
  return 0;
}