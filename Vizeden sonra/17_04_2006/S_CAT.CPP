/* strcat ”rnegi */

#include <string.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   char destination[25];
   char *blank = " ", *c = "C++", *turbo = "Turbo";
   clrscr();
   strcpy(destination, turbo);
   strcat(destination, blank);
   strcat(destination, c);

   printf("%s\n", destination);
   getch();
}