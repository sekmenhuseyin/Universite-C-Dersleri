#include <conio.h>
#include <stdio.h>

void main(){
	clrscr();
	printf("Bir yaz yaznz.\n");
	char *s;
	int i;
	gets(s);
	i = 0;
	for (i=0; s[i]!='\0'; i++)
		while (s[i]!='\0'){i++;}  /* boş işlem */
	printf("Uzunluk %d \n", i);
	getch();
}
