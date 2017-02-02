#include <stdio.h>
#include <conio.h>
#include <math.h>

long tersi(long);

void main() {
	long s;
	clrscr();
	printf("\n Bir sayi giriniz: ");
	scanf("%ld",&s);
	printf(" Basamaklari ters ‡evrilmis sayi: %ld",tersi(s));
	getch();
}
long tersi(long k){
	long a,b;
	a=0;
	while(k>0){
		b=k%10;
		a=a*10+b;
		k=k/10;
	}
	return a;
}