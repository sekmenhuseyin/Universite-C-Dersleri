#include <stdio.h>
#include <conio.h>
#include <math.h>

long islem1(long);
long islem2(long);
void main ()
{
	clrscr();
	long s;
	printf("\n\n Bir sayi giriniz: ");
	scanf("%ld",&s);
	printf("\n Teklerin  toplami= %ld",islem1(s));
	printf("\n €iftlerin ‡arpimi= %ld",islem2(s));

	getch();

}
long islem1(long i){
	long x,z;
	x=0;//teklerin toplami i‡in deger
	for(z=1;i>=z;z++){
		if(z%2==1) x=x+z;//tekse
	}
	return x;
}
long islem2(long i){
	long y,z;
	if (i<=1) return 0;
	y=1;//‡iftelerin ‡arpimi i‡in deger
	for(z=1;i>=z;z++){
		if(z%2==0) y=y*z;//‡iftse
	}
	return y;
}
