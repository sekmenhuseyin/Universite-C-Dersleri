/* Dairenin alanini hesaplayan program: */

#include <stdio.h>
#include <conio.h>

void main()
{
  const float PI=3.14;
  float r,cev;
  clrscr();
  printf("yari‡ap = ");
  scanf("%f",&r);
  cev=2*PI*r;
  printf("‡evre = %3.2f",cev);
  getch();
}