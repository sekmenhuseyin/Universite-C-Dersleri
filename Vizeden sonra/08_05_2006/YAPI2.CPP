#include <stdio.h>
#include <conio.h>
#include <string.h>

union sayilar
{ int i;
  long lng;
};

union sayilar a;
void main()
{ clrscr();
  a.lng=235;
  printf("%d %ld",a.i,a.lng);
  getch();
}