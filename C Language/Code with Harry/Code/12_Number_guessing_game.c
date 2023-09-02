#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int number, guess, nguesses=1;
  srand(time(0));
  //Generate random number between 1 to 100
  number = rand()%100 +1;
  //printf("The number is %d\n", number);
  //Keep running the loop until the number is guessed
  printf("Guess the number between 1 to 100\n");
  do{
    scanf("%d", &guess);
    if(guess>number){
      printf("Lower the number please\n");
    }
    else if(guess<number){
      printf("Higher the number please\n");
    }
    else{
      printf("You guessed it in %d attempts\n", nguesses);
    }
    nguesses++;
  }
    while(number != guess);
  return 0;
}