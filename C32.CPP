#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define OGRSAY  3
void main(){
	struct ogrenci{
		char no[10];
		int  notu;
	};
	struct ogrenci ogr[OGRSAY];
	struct ogrenci tmp;
	int i, j;
	float t, ort;

	clrscr();printf("\n\n");
	for (i=0; i<OGRSAY; i++) {
		printf("%d. ”§rencinin numaras ve notu : ", i+1);
		scanf("%s%d",&ogr[i].no, &ogr[i].notu);
	}

	t = 0;
	for (i=0; i<OGRSAY; i++)
		t = t + ogr[i].notu;

	ort = t / OGRSAY;
	printf("--------------------------------------------\n");
	printf("Ortalama = %f\n", ort);
	printf("--------------------------------------------\n");
	printf("Ortalamay ge‡en ”§renciler\n");
	for (i=0; i<OGRSAY; i++)
		if (ogr[i].notu > ort)
			printf("%s\t\t%d\n", ogr[i].no, ogr[i].notu);

	for (i=0; i<OGRSAY-1; i++){
		for (j=i+1; j<OGRSAY; j++){
			if (ogr[i].notu<ogr[j].notu){
				tmp=ogr[i];
				ogr[i]=ogr[j];
				ogr[j]=tmp;
			};
		};
	};
	printf("\n\n");
	for (i=0; i<OGRSAY; i++)
		printf("%s\t\t%d\n", ogr[i].no, ogr[i].notu);
	getch();
}
