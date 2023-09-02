#include <stdio.h>

int main(void) {
  // char str[] = {'T','u','s','h', 'a', 'r', '\0'};
  char str[] = "Tushar";
  char *ptr = str;
  while (*ptr != '\0') {
    printf("%c", *ptr);
    ptr++;
  }
  return 0;
}