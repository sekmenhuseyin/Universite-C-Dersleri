#include <stdio.h>
#include <conio.h>
#include <math.h>

long toplam(long);

void main() {
	long s;
	clrscr();
	printf("\n Bir sayi giriniz: ");
	scanf("%ld",&s);
	printf(" 1den girdiginiz sayiya kadar olanlarin toplami: %ld",toplam(s));
	getch();
}
long toplam(long k){
	if(k<0){
		return 0;
	}else{
		return(k+toplam(k-1));
	}
}