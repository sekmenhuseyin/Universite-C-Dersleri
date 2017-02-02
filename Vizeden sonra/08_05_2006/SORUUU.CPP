/* byte cinsinden tanimlanan iki sayidan ikincisini high level a,
   birincisini low level a yerlestirmek Åzere birlestiren program */

#include <string.h>
#include <stdio.h>
#include<conio.h>

void main()
{
  unsigned char b1,b2;
  unsigned int w1;
  clrscr();
  b1=16;
  b2=65;
  w1= (b1<<8) | b2;
printf("b1 = %u\n",b1);
printf("b2 = %u\n",b2);
printf("w = %u",w1);
getch();
}