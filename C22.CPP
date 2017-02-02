#include <string.h>
#include <stdio.h>
#include <conio.h>

main(){
	clrscr();
	char *s;
	int i;
	gets(s);
	for (i=strlen(s)-1; i>=0; i--)
		printf("%c", s[i]);
	printf("\n");
	getch();
}
