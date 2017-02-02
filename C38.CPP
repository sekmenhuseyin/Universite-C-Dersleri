#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

void main(){
	int i,j,k,m;
	i=5;
	j=10;
	k=i++;
	m=j--;
	clrscr();printf("\n");
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	printf("k=%d\n", k);
	printf("m=%d\n", m);
	getch();
}
