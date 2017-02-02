/* Klavyeden girilen sayilari se‡ilen isleme g”re hesaplayip
sonucu veren program: */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int s1,s2;
  float s3;
  char islem;
  clrscr();
  printf("™nce islem sonra sayilari giriniz\n");
  scanf("%c%d%d",&islem,&s1,&s2);
  switch(islem)
   { case '+' :s3=s1+s2; break;
     case '-' :s3=s1-s2; break;
     case '*' :s3=s1*s2; break;
     case '/' :s3=s1/s2; break;
     default  :printf("Hatali islem tipi!!!");
   }
   printf("\nSonu‡ = %7.2f",s3);
   getch();
}
