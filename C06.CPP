#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	int i,x,y,z;
	float j,w;
	clrscr();	printf("\n");
	printf(" Bir integer giriniz: ");	scanf("%d",&i);
	printf(" Bir float giriniz:   ");	scanf("%f",&j);
	printf(" Bir integer giriniz: ");	scanf("%d",&x);
	printf(" Bir integer giriniz: ");	scanf("%d",&y);
	printf(" Bir float giriniz:   ");	scanf("%f",&w);
	i=abs(i);	j=fabs(j);	z=pow(x,y);
	printf("\n	 i=%d",i);
	printf("\n	 j=%f",j);
	printf("\n	 %d sayisinin %d. kuvveti=%d",x,y,z);
	printf("\n	 ceil(w)=%f",ceil(w));
	printf("\n	 floor(w)=%f",floor(w));

	getch();
}
