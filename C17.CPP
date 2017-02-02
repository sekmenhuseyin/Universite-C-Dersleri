#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define boyut 10	//const boyut=10

void dizidoldur(int dizi[],int elemansayisi,int sayiaralik);
void main (){
	int a[boyut];
	int z;

	clrscr();
	dizidoldur(a,boyut,7);
	for (z=0;z<=boyut-1;z++){
		printf("\n  %d. eleman = %d",z,a[z]);
	}
	getch();
}
void dizidoldur(int dizi[],int elemansayisi,int sayiaralik){
int i;
	randomize();
	for (i=0;i<=elemansayisi;i++){
		dizi[i]=random(sayiaralik);
	}
}