#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int a,b,c;
  clrscr();
  a=3; b=5; c=0;
  do
  {
    c=c+a; b=b-1;
  } while(b>0);
  printf("%d",c);
  getch();
}
