#include "stdio.h"
#include "conio.h"
#include "string.h"
#include <dos.h>

void main(){
	unsigned char b1;
	unsigned char b2;
	unsigned int w;
	clrscr();
	b1=16;
	b2=34;
	w=(b1<<8)|b2;		//b1i 8bit sola kaydr & b2 ile birleŸtir...
	printf("b1= %u\n",b1);
	printf("b2= %u\n",b2);
	printf("w = %u\n",w);
	getch();
}