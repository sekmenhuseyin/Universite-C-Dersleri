#include <stdio.h>
#include <conio.h>
#include <math.h>

long fib(long);
void main ()
{
	clrscr();
	long s;
	printf("\n\n Bir sayi giriniz: ");
	scanf("%ld",&s);
	printf("\n fib(%ld)=%ld\n",s,fib(s));

	getch();

}
long fib(long i){
	if(i==0) return 0;
	else if(i<=2) return 1;
	else return fib(i-1)+fib(i-2);
}
