#include <stdio.h>
#include <conio.h>
#include <math.h>

void main ()
{
	int a[20];
	int z,i;

	clrscr();
	printf("\n\n");
	for (z=0;z<=19;z++){
		printf("           Bir sayi giriniz   ");
		scanf("%d",&a[z]);
	}
	for (z=0;z<=9;z++){
		i=a[z];
		a[z]=a[19-z];
		a[19-z]=i;
	}
	clrscr();
	printf("\n\n");
	for (z=0;z<=19;z++){
		printf("\n  %d. eleman = %d",z,a[z]);
	}

	getch();

}
