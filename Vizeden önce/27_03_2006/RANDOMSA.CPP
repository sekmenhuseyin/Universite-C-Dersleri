/* 10 elemanli bir diziyi 0-100 arasinda rastgele sayilarla
dolduran program */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define boyut 10 // const boyut=10;
#define ara 100
void dizi_doldur(int b[],int c, int d);
void main()
{
 int a[boyut];
 int i,j;
 clrscr();
 printf("\n.....................\n");

 dizi_doldur(a,boyut, ara);

 for (i=0;i<=boyut-1;i++)
  printf("%d. say = %d\n",i,a[i]);
getch();
}
void dizi_doldur(int b[], int c, int d ) // b dizi, c dizideki eleman says
{
 randomize();
 for (int i=0;i<=c-1;i++)
  b[i]=random(d);
}