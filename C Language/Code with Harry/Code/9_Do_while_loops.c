#include <stdio.h>

int main(void) {
  int i = 220;
//Execute the code & then checks the condition
  do{
    printf("The value of i is %d\n", i);
    i++;
  }while(i<10);
  return 0;
}