#include <stdio.h>

int main(void) {
  float principal, rate, time, simp;
  printf("Enter the value of principal\n");
  scanf("%f", &principal);
  printf("Enter the value of rate\n");
  scanf("%f", &rate);
  printf("Enter the value of time\n");
  scanf("%f", &time);
  simp = (principal * rate * time)/100;
  printf("The Simple Interest is %0.2f\n", simp);
  return 0;
}