#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

void main(){
	int i;
	int *ptr;
	clrscr();
	ptr=&i;
	*ptr=8;
	printf("\ni degiskeninin degeri= %d\n",i);
	printf("ptr degiskeninin degeri= %d\n",*ptr);
	printf("ptr degiskeninin adresi = %p\n",ptr);
	getch();
}