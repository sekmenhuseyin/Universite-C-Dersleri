#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{ int a,b;
  unsigned int c;
  clrscr();
  scanf("%d %d",&a,&b);
  c=a<<8;
  c=c+b;
  printf("%lu",c);
  getch();
}
