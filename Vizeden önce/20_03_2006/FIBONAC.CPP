/* Fibonacci (”zyinelemeli) */

#include<stdio.h>
#include<conio.h>
#include<math.h>
long fib(long);
void main()
{
   long s;
   clrscr();
   printf("sayiyi giriniz = "); scanf("%ld",&s);
   printf("fib(%ld) = %ld\n",s,fib(s));
   getch();
}
long fib(long i)
{
  if (i<=2) return 1;
  else return fib(i-1)+fib(i-2);
}
