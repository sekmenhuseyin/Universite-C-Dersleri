/* Diziye girilen 10 tane sayiyi ekrana tersten yazdiran program */

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10];
 int i;
 clrscr();
 for (i=0;i<=9;i++)
  { printf("%d. say�y� gir ",i);
    scanf("%d",&a[i]);
   }
 printf("\n.....................\n");
 for (i=9;i>=0;i--)
  printf("%d.s�rada girilen say� = %d\n",i,a[i]);
getch();
}

