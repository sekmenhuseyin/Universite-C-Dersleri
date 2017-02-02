/* n' e kadar olan sayilarin toplamini bulan fonksiyon (”zyinelemeli) */

#include<stdio.h>
#include<conio.h>
#include<math.h>
long fakt(long);
void main()
{
   long s;
   clrscr();
   printf("sayiyi giriniz = "); scanf("%ld",&s);
   printf("sayinin fakt”riyeli = %ld\n",fakt(s));
   getch();
}
long fakt(long i)
{
  if (i<1) return 0;
  else return i+fakt(i-1);
}
