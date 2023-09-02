#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[45] = "Hel";
  char *str2 = "Helo";
  int val = strcmp(str1, str2);
  printf("Now the val is %d", val);
  
  return 0;
}