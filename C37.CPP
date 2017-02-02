#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"

void main(){
	char *a="1234567890";
	char b[11];
	char *p1, *p2;
	clrscr();
	printf("%s\n", a);
	p1 = a;
	p2 = b;
	while (*p1 != '\0') {
		*p2 = *p1;
		p1++;
		p2++;
	}
	printf("%s\n", b);
	getch();
}
