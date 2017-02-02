/* Vize ve final notlarindan gecme notu hesaplayan program: */

#include <stdio.h>
#include <conio.h>

void main()
{
  float vize,final,ort;
  clrscr();
  vize=50;
  final=60;
  ort=vize*0.4+final*0.6;
  printf("ortalama = %f",ort);
  getch();
}