#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

int recordcount(char *dsy_ad);
void main(){
	FILE *kp;
	char *s;
	int i;
	clrscr();
	kp = fopen("dene.txt", "r"); /* NULL ise islem basarisiz */
	if (kp == NULL)
		exit(1);

	for (i=0; i<2; i++) {
		fscanf(kp,"%s",s);
		printf("%s\n", s);
	}
	printf("---------------------------------------\n");
	rewind(kp);
	while(!feof(kp)){
		*s=NULL;
		fscanf(kp,"%s",s);
		printf("%s\n",s);
	};
	fclose(kp);
	printf("---------------------------------------\n");
	i=recordcount("dene.txt");
	printf("%d\n",i);
	getch();
}

int recordcount(char *dsy_ad){
	FILE *dsy;
	char *q;
	int w;
	dsy = fopen(dsy_ad, "r");
	w=0;
	if (dsy == NULL)
		return 0;
	while(!feof(dsy)){
		*q=NULL;
		fscanf(dsy,"%s",q);
		w++;
	};
	return w;
	fclose(dsy);

};