/* Girilen sayinin basamak sayisini veren program */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int n;
  int i=1;
  clrscr();
  printf("n sayisi = "); scanf("%d",&n);
  while (n>10)
   { n=n/10;
     i=i+1;
   }
  printf("Basamak sayisi = %d",i);
  getch();
}