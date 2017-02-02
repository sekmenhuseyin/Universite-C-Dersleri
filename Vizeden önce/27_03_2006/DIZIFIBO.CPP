/* Dizide ilk 20 fibonacci sayiyi olusturan program */

#include<stdio.h>
#include<conio.h>
void main()
{
 int fib[20];
 int i;

 fib[0]=0;
 fib[1]=1;
 for (i=2;i<=19;i++)
   fib[i]=fib[i-1]+fib[i-2];
 clrscr();
 for (i=0;i<=19;i++)
  printf("%d.Fibonacci says = %d\n ",i,fib[i]);
getch();
}