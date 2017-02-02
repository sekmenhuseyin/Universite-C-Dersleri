#include <stdio.h>
#include <conio.h>
#include <math.h>

long fakt(long);

void main() {
	long s;
	clrscr();
	printf("\n Bir sayi giriniz: ");
	scanf("%ld",&s);
	printf(" Sayinin faktoryeli: %ld",fakt(s));
	getch();
}
long fakt(long k){
	if(k<2){
		return 1;
	}else{
		return(k*fakt(k-1));
	}
}