#include "stdio.h"
#include "conio.h"
#include "string.h"
#include <dos.h>

void main(){
	unsigned int b1;
	clrscr();
	b1 = peek(0x0040, 0x0017);  /* dos.h> */
	if (b1 & 32)
		printf("Num lock a��k\n");
	else
		printf("Num lock kapal�\n");
	if (b1 & 64)
		printf("Caps lock a��k\n");
	else
		printf("Caps lock kapal�\n");
	getch();
}