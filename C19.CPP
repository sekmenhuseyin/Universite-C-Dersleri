#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SATIR 3
#define SUTUN 3

void matris_oku(double [][SUTUN]);

void main(){
	double a[SATIR][SUTUN];
	double b[SATIR][SUTUN];
	int i,j;

	matris_oku(a);	//buraya kadar bir matris tançmlançp doldurulur...
	//*********************************************
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++){
			b[j][i]=a[i][j];
		};
	};
	//*********************************************
	clrscr();	//ve ekrana getirilir tÅm herüey...
	printf("----------Kendisi-----------\n");
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++)
			printf("%3.0f",a[i][j]);
	printf("\n");
	}
	printf("---------Transpoze----------\n");
	for (i=0;i<SATIR;i++){
		for (j=0;j<SUTUN;j++)
			printf("%3.0f",b[i][j]);
	printf("\n");
	}
	getch();
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