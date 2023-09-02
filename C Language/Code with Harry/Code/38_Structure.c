#include <stdio.h>
#include <string.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

int main(void) {
  int a = 34;
  char b = 'g';
  float d = 234.567;
  //employee e1;
  //e1.salary = 34.454; ---> wont work without employee structure

  struct employee e1;
  e1.code = 100;
  e1.salary = 34.454;
  //e1.name = "Tushar"; ---> wont work
  strcpy(e1.name, "Tushar");
  
  return 0;
}