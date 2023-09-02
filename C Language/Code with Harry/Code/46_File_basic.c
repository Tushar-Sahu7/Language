#include <stdio.h>

int main(void) {
  FILE *ptr;
  // for reading file
  ptr = fopen("sample.txt", "r");
  // for writing to a file
  ptr = fopen("sample2.txt", "w");
  
  return 0;
}