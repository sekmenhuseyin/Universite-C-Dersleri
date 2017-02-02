/* 0'dan n'e kadar olan tek sayilarin ‡arpimini, ‡ift sayilarin toplamini
bulan program */

#include<stdio.h>
#include<conio.h>
#include<math.h>

short odd(int k);

void main()
{
  int n,i;
  long top,crp;
  clrscr();
  top=0; crp=1;
  printf("n sayisini giriniz = ");
  scanf("%d",&n);
  for (i=0; i<=n; i++)
    { if (odd(i)==0) top=top+i;
      else crp=crp*i;
    }
  printf("1'den %d e kadar olan tek sayilarin ‡arpimi = %ld\n",n,crp);
  printf("1'den %d e kadar olan cift sayilarin toplami = %ld",n,top);
  getch();
}

short odd(int k)
{
  if (k%2==0) return 0;
    else return 1;
}
