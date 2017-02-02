#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	int a[10];
	int i;
	clrscr();
	for (i=0;i<=10;i++){
		a[i]=(i)*(i);
	}
	for (i=0;i<=10;i++){
		printf("\n %d elemann degeri = %d",i,a[i]);
	}
	getch();
}