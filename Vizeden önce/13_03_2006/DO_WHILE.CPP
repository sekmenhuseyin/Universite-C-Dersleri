/* While-Do d”ngs ”rnegi */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i;
  clrscr();
  i=0;
  do
   { printf("i = %d\n",i);
     i++;
   }
  while (i<10);
  getch();
}