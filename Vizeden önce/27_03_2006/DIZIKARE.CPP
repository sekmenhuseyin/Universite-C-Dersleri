/* 1-10 arasindaki sayilarin karesini dizi elemanlarina ykleyip
yazdiran program */

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10];   //a:array[0..9] of integer (pascal'da)
 int i;
 clrscr();
 for (i=0;i<=9;i++)
   a[i]=(i+1)*(i+1);
 for (i=0;i<=9;i++)
   printf("%d.elemann degeri=%d\n",i,a[i]);
getch();
}