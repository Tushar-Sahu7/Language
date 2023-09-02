#include <stdio.h>
long long int factorial(int x);

int main(void) {
  int a = 20;
  printf("The value of factorial %d is %lld\n", a, factorial(a));
  return 0;
}
long long int factorial(int x) {
  if (x == 1 || x == 0) {
    return 1;
  } else {
    return x * factorial(x - 1);
  }
}