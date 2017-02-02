/* 1'den 5'e kadar olan sayilarin toplami */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
/*  int i,j;
  i=1;
  j=0;
*/
  int i=1, j=0;
  clrscr();
  while (i<5)
   { j=j+i;
     i=i+1;
   }
  printf("Toplam = «d",j);
  getch();
}