/* 1996 yilina kadar ge‡en gn sayisi: */

#include <stdio.h>
#include <conio.h>

void main()
{
  float gun;
  int yil=1996;
  clrscr();
  gun=365*(yil-1);
  gun=gun+(yil-1)/4;
  printf("1996 yilina kadar ge‡en gn sayisi = %f\n",gun);
  getch();
}