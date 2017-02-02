#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char *buf1="def",*buf2="deabc";
	char *string1="010101gfd23A",*string2="123";
	int ptr,length;

	clrscr();
	ptr=strncmp(buf1,buf2,3);
	if (ptr>0)
		printf("burref2 > buffer1");
	else if(ptr==0)
		printf("ptr=0");
	else
		printf("buffer 1 > buffer2 \n");
	length=strcspn(string1,string2);
	printf("\n\nstring2 string1de %d. harften sonra baülçyor.",length);
	getch();
}