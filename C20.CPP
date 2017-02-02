#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SATIR 2
#define SUTUN 2

void matris_oku(double [][SUTUN]);
double determin(double [][SUTUN]);

void main(){
	double a[SATIR][SUTUN];
	double b[SATIR][SUTUN];
	double det;
	int i,j;

	matris_oku(a);	//buraya kadar bir matris tançmlançp doldurulur...
	//**********************************************
	det=determin(a);
	b[0][0]=a[0][0]/det;
	b[0][1]=-1*a[0][1]/det;
	b[1][0]=-1*a[1][0]/det;
	b[1][1]=a[1][1]/det;
	//**********************************************
	clrscr();	//ve ekrana getirilir tÅm herüey...
	printf("--------Kendisi---------\n");
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++)
			printf("%3.0f",a[i][j]);
	printf("\n");
	}
	printf("---------Tersi----------\n");
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++)
			printf("%3.0f",b[i][j]);
	printf("\n");
	}
	getch();
}

double determin(double a[][SUTUN]){
	double temp;

	temp=(a[0][0]*a[1][1])-(a[1][0]*a[0][1]);
	return temp;
}

void matris_oku(double a[][SUTUN]){
	int i,j;

	randomize();
	for(i=0;i<SATIR;i++){
		for(j=0;j<SUTUN;j++){
			a[i][j]=random(20);
		};
	};
}