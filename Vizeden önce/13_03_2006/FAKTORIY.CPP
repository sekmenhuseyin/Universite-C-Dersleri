/* Klavyeden girilen sayinin fakt”riyelini hesaplayan program */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int n;
  int i=1, j=1;
  clrscr();
  printf("n sayisi = "); scanf("%d",&n);
  while (i<=n)
   { j=j*i;
     i=i+1;
   }
  printf("%d! = %d",n,j);
  getch();
}