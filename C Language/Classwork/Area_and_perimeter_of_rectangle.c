#include <stdio.h>

int main(void) {
  float len, bre, per, area;
  printf("Enter the length of rectengle in meter\n");
  scanf("%f", &len);
  printf("Enter the breath of rectengle in meter\n");
  scanf("%f", &bre);
  per = 2 * (len + bre);
  area = len * bre;
  printf("The perimeter of rectangle is %0.2f meter\n", per);
  printf("The area of rectangle is %0.2f meter square\n", area);
  return 0;
}