/* ax^2+bx+c=0 tipi bir denklemin k”klerini veren program: */

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  float a,b,c;
  float x1,x2;
  float d;
  clrscr();
  printf("a sayisi = "); scanf("%f",&a);
  printf("b sayisi = ");scanf("%f",&b);
  printf("c sayisi = ");scanf("%f",&c);
  d=b*b-4*a*c;
  if (d<0) printf("Real k”k yok!");
    else if (d==0) {printf("K”kler esit!\n");
		    x1=(-b/(2*a));
		    printf("1.k”k = %f\n",x1);
		    printf("2.k”k = %f ",x1);
		   }
    else { x1=(-b+sqrt(d)/(2*a));
	   x2=(-b-sqrt(d)/(2*a));
	   printf("1.k”k = %3.2f\n",x1);
	   printf("2.k”k = %3.2f",x2);
	 }
  getch();
}
