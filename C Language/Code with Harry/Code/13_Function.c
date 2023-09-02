#include <stdio.h>
//Sum is a function which takes a and b as input and returns as an output
//Function prototype declaration
int sum(int a, int b);
void display(); //Function prototype

int main(void) {
  int a;
  printf("Initializing display function\n");
  display();
  printf("Display function finished its work\n");
  int c;
  c = sum(65,15);
  printf("The value of c is %d\n", c);
  return 0;
}

void display(){
  printf("This is display\n");
}

int sum (int a ,int b){
  int result;
  result = a+b;
  return result;
}