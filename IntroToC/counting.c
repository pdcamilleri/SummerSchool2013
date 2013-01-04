#include <stdio.h>

int main() {
   int number;
   scanf("%d", &number);
   int counter = 0;
   while (counter != number) {
      printf("%d\n", counter);
      counter = counter + 1;
   }
   return 0;
}
