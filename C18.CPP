#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SATIR 5
#define SUTUN 5

double enbuyuk(double [][SUTUN],int);	//matrisin en az bir boyutu
void matris_oku(double [][SUTUN]);	//tançmlanmalçdçr...

void main(){
	double a[SATIR][SUTUN];
	double b[SATIR];
	double c[SATIR];
	int i,j;

	matris_oku(a);
	for (i=0;i<SATIR;i++){
		b[i]=enbuyuk(a,i);
	};
	for (i=0;i<SATIR;i++){
		c[i]=0;
		for (j=0;j<SUTUN;j++){
			c[j]=c[j]+a[i][j];
		};
	};
	clrscr();
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++){
			printf("%3.0f",a[i][j]);
		};
		printf("%4.0f %4.0f\n",b[i],c[i]);
	};
	getch();
}

double enbuyuk(double a[][SUTUN],int sat) {
	double r;
	int i;
	r=a[sat][0];
	for (i=0;i<SUTUN;i++){
		if (a[sat][i]>r){
			r=a[sat][i];
		};
	};
	return r;
}

void matris_oku(double a[][SUTUN]){
	int i,j;

	randomize();
	for(i=0;i<SATIR;i++){
		for(j=0;j<SUTUN;j++){
			a[i][j]=random(10);
		};
	};
}