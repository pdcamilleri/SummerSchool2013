#include <stdio.h>

int main() {

   char gender = '@';

   // here the && means "and"
   while (gender != 'm' && gender != 'f') {
       printf("What is your gender? (m/f)\n");

       // get char gets us one single character from the input
       gender = getchar();
       // we could also use scanf with %c to indicate that gender is a character
       // scanf("%c", &gender);
       
       // see what happens when you leave this line out
       getchar(); 

       if (gender == 'm') {
          printf("you are male\n");
       } else if (gender == 'f') {
          printf("you are female\n");
       } else {
          printf("please enter a valid gender\n");
       }
   }

   // here, the || means or
   if (gender == 'm' || gender == 'f') {
      printf("you entered a valid gender\n");
      if (gender == 'm') {
         printf("and that valid gender was male\n");
      } else if (gender == 'f') {
         printf("and that valid gender was femaile\n");
      }
   }

   return 0;

}
