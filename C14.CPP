#include <stdio.h>
#include <conio.h>
#include <math.h>

long fib(long);
void main ()
{
	int a[20];
	int z;

	clrscr();
	for (z=0;z<=19;z++){
		a[z]=fib(z);
		printf("\n %d. fibonecci sayisi = %d",z,a[z]);
	}

	getch();

}
long fib(long fb){
	if(fb==0) return 0;
	else if(fb<=2) return 1;
	else return fib(fb-1)+fib(fb-2);
}
