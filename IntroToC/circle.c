/*

   to compile this program use
   gcc -Wall -Werror -lm -O -o circle circle.c && ./circle

*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

   printf("Enter the radius of the circle");

   // a float is a decimal number
   float pi = 3.14;
   float radius;

   // since radius is of type float, we use %f, not %d
   scanf("%f", &radius);

   // again, notice we use %f to print the radius, not %d
   printf("The radius is %f\n", radius);

   float diameter = 2 * radius;
   printf("The diameter is %f\n", diameter);

   // pow means power. it is a function that raises the first paramater to the second paramater
   // so pow(radius, 2) would give us the radius squared
   // this function is located in the math.h library, which is why we included it at the start of the file
   printf("The area is %f\n", pi * pow(radius, 2));

   printf("The circumference is %f\n", pi * diameter);

   // abs means absolute, it is a function inside the stdlib.h library
   printf("The difference between the circumference and area is %d\n", abs(pi * pow(radius, 2) - pi * diameter));

   printf("The circumference divided by diameter is %f", (pi * diameter) / diameter);
   
   return 0;

}
