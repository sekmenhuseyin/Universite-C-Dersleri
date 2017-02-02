#include <string.h>
#include <stdio.h>
#include <conio.h>

/* Girilen cmlenin ilk harflerini yaz */
void main(){
	int i;
	int yaz; /* 1/0 -> karakteri yaz/yazma */
	char *s;

	clrscr();
	gets(s);
	yaz = 1;
	for (i = 0; i<strlen(s); i++)
		if (s[i] == ' ')
			yaz = 1;
		else
			if (yaz) {
				printf("%c", s[i]);
				yaz = 0;
			}
	getch();
}
