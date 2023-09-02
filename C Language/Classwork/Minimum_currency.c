#include <stdio.h>

int main(void) {
  int curr, hun, fif, ten, fiv, two, one, min_note;
  printf("Enter the currency's amount\n");
  scanf("%d", &curr);
  hun = curr / 100;
  curr %= 100;
  fif = curr / 50;
  curr %= 50;
  ten = curr / 10;
  curr %= 10;
  fiv = curr / 5;
  curr %= 5;
  two = curr / 2;
  curr %= 2;
  one = curr;
  min_note = hun + fif + ten + fiv + two + one;
  printf("100's notes = %d\n 50's notes = %d\n 10's notes = %d\n 5's notes = %d\n 2's notes = %d\n 1's notes = %d\n The min num of notes is %d\n", hun, fif, ten, fiv, two, one, min_note);
  return 0;
}