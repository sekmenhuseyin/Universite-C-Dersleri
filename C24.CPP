#include <string.h>
#include <stdio.h>
#include <conio.h>

/* Girilen cÅmlenin ilk harflerini yaz */
void main(){
	int i,j;
	int yaz,yaz2; /* 1/0 -> karakteri yaz/yazma */
	char *s;

	clrscr();
	gets(s);
	yaz = 0;yaz2=0;
	for (i=strlen(s)-1; i>0; i--)
		if (s[i]==' '){
			yaz=1;yaz2=1;
		}else
			if(yaz){//if yaz=1  yani bi înceki harf boüluksa...
				for(j=i+2;j<strlen(s)+1;j++){
					if (yaz2){
						printf("%c", s[j]);
						if (s[j]==' ') yaz2=0;
					}
				}
				yaz = 0;
			}
	yaz2=1;
	for(j=0;j<strlen(s)+1;j++){
		if (yaz2){
			printf("%c", s[j]);
			if (s[j]==' ') yaz2=0;
		}
	}

	getch();
}
