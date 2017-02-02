/* Iki sayinin ortak b”lenlerinin en bygn veren program */

#include<stdio.h>
#include<conio.h>
#include<math.h>

long obeb(long,long);
void main()
{
  long i,j;
  clrscr();
  printf("iki tam sayi giriniz : ");
  scanf("%ld%ld",&i,&j);
  printf("obeb(%ld,%ld) = %d\n",i,j,obeb(i,j));
  getch();
}

long obeb(long m, long n)
/* m ve n sayilarinin ortak b”lenlerinin en byg */
{
  if (n==0) return m;
    else obeb(n,m%n);
}