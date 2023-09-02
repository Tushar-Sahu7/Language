#include <stdio.h>

int main(void) {
  float rad, area, circ;
  printf("Enter the radius of circle in meter\n");
  scanf("%f", &rad);
  area = 3.14 * rad * rad;
  circ = 2 * 3.14 * rad;
  printf("The area of the circle is %0.2f meter square and the circumference of the circle is %0.2f meter\n", area, circ);
  return 0;
}