#include <stdio.h>
#include <conio.h>

void main(){
	float gun;
	int yil=1998;
	clrscr();
	gun=365*(yil-1);
	gun=gun+(yil-1)/4;
	printf("\n \n  %5.0f",gun);
	getch();
}