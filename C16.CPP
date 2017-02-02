#include <stdio.h>
#include <conio.h>
#include <math.h>

#define boyut 10	//const boyut=10

void dizi_sirala(int a[],int b);
void main (){
	int a[boyut];
	int z;

	clrscr();
	printf("\n\n");
	for (z=0;z<=boyut-1;z++){
		printf("          %d. sayiyi giriniz   ",z+1);
		scanf("%d",&a[z]);
	}
	/////sralama islemleri
	dizi_sirala(a,boyut-1);
	/////sralama islemleri
	clrscr();
	printf("\n\n");
	for (z=0;z<=boyut-1;z++){
		printf("\n  %d. eleman = %d",z,a[z]);
	}

	getch();

}
void dizi_sirala(int ab[],int b){
	int i,z,x;
	for (z=0;z<=b-1;z++){
		for(x=z+1;x<=b;x++){
			if(ab[z]>ab[x]){	//k‡kten byge sirala
				i=ab[z];
				ab[z]=ab[x];
				ab[x]=i;
			}
		}
	}
}