#include <stdio.h>

int main(void) {
  char str1[45] = "Hello ";
  char *str2 = "Tushar";
  strcat(str1, str2);
  printf("Now the str1 is %s", str1);
  
  return 0;
}