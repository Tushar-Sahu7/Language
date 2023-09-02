#include <stdio.h>

int main(void) {
  int num, d1, d2, d3, d4, d5, sum = 0, last_digit;
  printf("Enter a five digit integer\n");
  scanf("%d", &num);
 // if (num >= 10000 && num <= 99999) {
    d1 = num%10;
    num /= 10;
    d2 = num%10;
    num /= 10;
    d3 = num%10;
    num /= 10;
    d4 = num%10;
    num /= 10;
    d5 = num%10;
    num /= 10;
    sum = d1 + d2 + d3 + d4 + d5;
    // for (int i = 0; i < 5; i++) {
    //   last_digit = num % 10;
    //   num /= 10;
    //   sum += last_digit;
    // }
    printf("Sum of digits is %d", sum);
  // } else {
  //   printf("Ek baar bola tere ko samajh nhi aata khaali pilli dimaag kharab kar rha hai, five digit ka integer daal pagal, padha likha nhi hai kya .\n");
  // }
  return 0;
}