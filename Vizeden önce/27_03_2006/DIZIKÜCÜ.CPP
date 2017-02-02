/* Diziye girilen 10 sayiyi k‡kten byge siralayan program */

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10];
 int i,j;
 clrscr();

 for (i=0;i<=9;i++)
  { printf("%d. sayiyi gir ",i);
    scanf("%d",&a[i]);
   }
 printf("\n.....................\n");
 int temp;
 temp=0;
 for (i=0;i<=8;i++)
   for (j=i+1;j<=9;j++)
     if (a[i]>a[j])
       { temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
       }
  for (i=0;i<=9;i++)
  printf("%d. say = %d\n",i,a[i]);
getch();
}