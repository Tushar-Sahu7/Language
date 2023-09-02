#include <stdio.h>
#include <string.h>

int main(void) {
  char *st = "Tushar";
  int a = strlen(st);
  //strlen exclude the null charecter
  printf("The length of the string st is %d\n", a);
  return 0;
}