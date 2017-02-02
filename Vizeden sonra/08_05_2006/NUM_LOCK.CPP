/* Klavyedeki Num Lock tusunun durumunu s”yleyen program */

#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>

void main()
{
  unsigned int b1,b2;
  clrscr();
  b1=peek(0X0040,0X0017); /* dos.h */
  b2=(b1 & 96);
  if(b1 & 96)
    printf("Num Lock a‡ik %u\n",b2);
  else
    printf("Num Lock kapali %u\n",b2);
  getch();
}
