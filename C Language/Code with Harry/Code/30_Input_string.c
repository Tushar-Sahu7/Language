#include <stdio.h>

int main(void) {
  char s[34];
  printf("Enter your name: ");
  //scanf("%s", s);
  //For whole sentence use gets() function
  gets(s);
  //For output with gets() function
  //puts() print the string places the cursor on the next line
  puts(s);
  //printf("Your name is %s", s);

  return 0;
}