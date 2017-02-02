/* 1'den n'e kadar olan sayilarin toplami */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
/*  int i,j;
  i=1;
  j=0;
*/
  int n;
  int i=1, j=0;
  clrscr();
  printf("n sayisi = "); scanf("%d",&n);
  while (i<n)
   { j=j+i;
     i=i+1;
   }
  printf("Toplam = %d",j);
  getch();
}