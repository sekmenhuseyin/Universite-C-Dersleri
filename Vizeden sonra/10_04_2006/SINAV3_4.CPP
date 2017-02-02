#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int i;
  int a,b,c,x1,x2;
  double d;
  clrscr();
  a=1; b=-3; c=2;
  d=b*b-4*a*c;
  x1=(-b+sqrt(d))/(2*a);
  x2=(-b-sqrt(d))/(2*a);
  printf("x1 = %d\n",x1);
  printf("x2 = %d\n",x2);
  getch();
}
