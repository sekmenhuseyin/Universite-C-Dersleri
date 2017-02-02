/* Girilen cÅmlenin ilk harflerini yazdiran program */

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
  int i;
  int yaz;   /* 1/0 -> karakteri yaz/yazma */
  char *s;
  clrscr();
  gets(s);
  yaz=1;
  for (i=0; i<strlen(s); i++)
    if(s[i]==' ')
      yaz=1;
    else
      if(yaz)   // if(yaz==1)
      {
	printf("%c",s[i]);
	yaz=0;
      }
  getch();
}
