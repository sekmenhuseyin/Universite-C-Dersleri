/* Klavyeden girilen 10 luk tabandaki sayinin 2 lik tabandaki
karsiligini veren program */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  int a;
  int i=20;
  long s;
  clrscr();
  printf("bir sayi giriniz = ");
  scanf("%ld",&s);
  while (s>0)
  { a=s%2;
    s=s/2;
    gotoxy(i,3); printf("%d",a);
    i--;
  }
  getch();
}
