/* K‡kten byge siralamak i‡in genel bir procedure */

#include<stdio.h>
#include<conio.h>

#define boyut 10 // const boyut=10;

void dizi_sirala(int b[],int c);
void main()
{
 int a[boyut];
 int i,j;
 clrscr();
 for (i=0;i<=boyut-1;i++)
  { printf("%d. sayiyi gir ",i);
    scanf("%d",&a[i]);
   }
 printf("\n.....................\n");

 dizi_sirala(a,boyut);

 for (i=0;i<=boyut-1;i++)
  printf("%d. say = %d\n",i,a[i]);
getch();
}
void dizi_sirala(int b[], int c) // b dizi, c dizideki eleman sayisi
{
 int temp;
 temp=0;
 for (int i=0;i<=c-2;i++)
   for (int j=i+1;j<=c-1;j++)
     if (b[i]>b[j])
       { temp=b[i];
	 b[i]=b[j];
	 b[j]=temp;
       }
}