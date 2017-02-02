/* Dogum tarihini 2 byte tamsayi olarak saklanmaktadir
   Bu bilginin kodlanmasi s”yledir:
	bit 	anlami
	0-4	gn
	5-8	ay
	9-15	yil(+1970)
   B”yle bir bilgiyi ‡”zen program  */

#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>

void main()
{
  unsigned int i;
  clrscr();
  scanf("%d",&i);
  printf("%2d",i&0x1f);
  i=i>>5;
  printf("/%2d",i&0x1f);
  i=i>>4;
  printf("/%4d",i+1970);
  getch();
}
