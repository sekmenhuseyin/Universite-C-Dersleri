/* Switch-case ”rnegi */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int i;
  clrscr();
  printf("Islem tipi\n");
  scanf("%d",&i);
  switch(i)
   { case 1 : printf("Bir\n");
     case 2 : printf("iki\n");
     default: printf("Hi‡biri");
   }
   getch();
}