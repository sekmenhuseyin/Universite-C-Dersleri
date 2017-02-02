#include <stdio.h>
#include <conio.h>
#include <math.h>

long fib(int);

void main()
{
  int s;
  clrscr();
  printf("Sayi gir : ",s);
  scanf("%d",&s);
  printf("Fib(%d) = %ld",s,fib(s));
  getch();
}

long fib(int i)
{
  long son;
  son=fib(i-1)+fib(i-2);
  return son;
}
