#include <stdio.h>

int main(void) {
  // Celsius to Fahrenheit
  float cel, far, kel;
  printf("Please enter the temperature in Celsius\n");
  scanf("%f",&cel);
  far = (cel * 9)/5 + 32;
  printf("The temperature in Fahrenheit is %0.2f\n",far);

  // Celsius to Kelvin
  printf("Please enter the temperature in Celsius\n");
  scanf("%f",&cel);
  kel = cel + 273.15;
  printf("The temperature in Kelvin is %0.2f\n",kel);

  // Fahrenheit to Celsius
  printf("Please enter the temperature in Fahrenheit\n");
  scanf("%f",&far);
  cel = (far - 32) * 5/9;
  printf("The temperature in Celsius is %0.2f\n",cel);

  // Fahrenheit to Kelvin
  printf("Please enter the temperature in Fahrenheit\n");
  scanf("%f",&far);
  kel = (far - 32) * 5/9 + 273.15;
  printf("The temperature in Kelvin is %0.2f\n",kel);

  // Kelvin to Celsius
  printf("Please enter the temperature in Kelvin\n");
  scanf("%f",&kel);
  cel = kel - 273.15;
  printf("The temperature in Celsius is %0.2f\n",cel);

  // Kelvin to Fahrenheit
  printf("Please enter the temperature in Kelvin\n");
  scanf("%f",&kel);
  far = (kel - 273.15) * 9/5 + 32;
  printf("The temperature in Fahrenheit is %0.2f\n",far);
  return 0;
}