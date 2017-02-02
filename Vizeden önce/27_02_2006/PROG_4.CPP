#include<stdio.h>
#include<conio.h>
 void main()
 {
   int i,y;
   y=1985;
   clrscr();
   i=y/1000;
   printf("%d",i);
   y=y-i*1000;
   i=y/100;
   printf("%d",i);
   y=y-i*100;
   i=y/10;
   printf("%d",i);
   y=y-i*10;
   printf("%d\n",y);
   i=1985;
   printf("%d",i/1000);
   printf("%d",(i/100)%10);
   printf("%d",(i/10)%10);
   printf("%d\n",i%10);
   getch();
}