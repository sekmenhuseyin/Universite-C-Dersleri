/* Klavyeden girilen sayinin asal olup olmadigini bulan program. */

#include<stdio.h>
#include<conio.h>
#include<math.h>

int asal(int n);
void main()
{
 int sayi;
 clrscr();
 printf("sayiyi giriniz="); scanf("%d",&sayi);
 if (asal(sayi)==0) printf("sayç ASAL");
   else printf("sayç ASAL DEGILDIR");
 getch();
}
int asal(int n)
{
  int i,j;
  int f=0;
  for (i=2; i<=n; i++)
    for (j=2; j<=n; j++)
      if (i*j==n)
       {
	i=n;
	j=n;
	f=1;
       }
 return(f);
}