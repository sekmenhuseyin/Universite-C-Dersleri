/* 0'dan n'e kadar olan tek sayilarin ‡arpimini, ‡ift sayilarin toplamini
bulan program */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
  int n;
  int i;
  long tek;
  long cift;
  clrscr();
  tek=1;
  cift=0;
  printf("n sayisini giriniz = ");
  scanf("%ld",&n);
  for (i=0; i<=n; i++)
    if (i%2!=0) tek=tek*i;
      else cift=cift+i;
  printf("tek sayilarin ‡arpimi = %ld",tek);
  printf("cift sayilarin toplami = %ld",cift);
  getch();
}
