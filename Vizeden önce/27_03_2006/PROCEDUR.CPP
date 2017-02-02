/* Diziye girilen 10 tane sayiyi k‡kten byge siralayan procedure */

#include<stdio.h>
#include<conio.h>
void dizi_sirala(int b[]);
void main()
{
 int a[10];
 int i,j;
 clrscr();
 for (i=0;i<=9;i++)
  { printf("%d. sayy gir ",i);
    scanf("%d",&a[i]);
   }
 printf("\n.....................\n");

 dizi_sirala(a);

 for (i=0;i<=9;i++)
  printf("%d. say = %d\n",i,a[i]);
getch();
}
void dizi_sirala(int b[])
{
 int temp;
 temp=0;
 for (int i=0;i<=8;i++)
   for (int j=i+1;j<=9;j++)
     if (b[i]>b[j])
       { temp=b[i];
	 b[i]=b[j];
	 b[j]=temp;
       }
}