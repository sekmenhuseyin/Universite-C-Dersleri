/* ax^2+bx+c=0 tipi bir denklemin k”klerini veren program: */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  float a,b,c;
  float x1,x2;
  float d;
  clrscr();
  a=1;
  b=-3;
  c=2;
  d=b*b-4*a*c;
  x1=(-b+sqrt(d)/(2*a));
  x2=(-b-sqrt(d)/(2*a));
  printf("1.k”k = %3.2f\n",x1);
  printf("2.k”k = %3.2f",x2);
  getch();
}
