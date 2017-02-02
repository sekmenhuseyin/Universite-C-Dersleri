#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main (void){
	char string[26];
	char *ptr,c='b';
	clrscr();
	strcpy(string,"Bu bir karakter dizisidir...");
	ptr=strchr(string,c);
	if(ptr)
		printf("%c karakterinin pozisyonu: %d\n",c,ptr-string);
	else
		printf("Aranan karakter bulunamadç. %s\n",ptr);
	getch();
}