#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int chooseRandomNumber() {
   return (rand() % 100) + 1;
}


void printHigherLower(playerGuess, chosenNumber) {
   if (playerGuess > chosenNumber) {
      printf ("%d is lower than the number", playerGuess);
   } else {
      printf ("%d is higher than the number", playerGuess);
   }
}

int main() {

// number = choose a random number
   int number;
   srand(time(NULL));
   number = chooseRandomNumber();

// say “What is your guess?”
   printf("\nWhat is your guess? ");

// guess = get player’s guess
   int guess;
   scanf("%d", &guess);

// while (guess != number) do
   while (guess != number) {


   // say “What is your guess?”
      printf("What is your guess? ");

   // guess = get player’s guess
      scanf("%d", &guess);
   // end while
   } 

// say “You win”
   printf("you win\n");

}
