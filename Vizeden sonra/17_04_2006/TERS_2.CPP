/* Girilen cÅmleyi kelimeleri bozmadan tersten yazdiran program */

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
  int i,j;
  int yaz;
  char *s,*a;
  clrscr();
  gets(s);
  yaz=0;
  j=0;
  for (i=strlen(s); i>=0; i--)
    if(s[i]!=' ')
      {
	 yaz=1;
	 a[j]=s[i];
	 j++;
       }
    else
      if(yaz)   // if(yaz==0)
      {
	for(j=strlen(a); j>=0;j--)
	  printf("%c",a[j]);
	printf(" ");
	j=0;
	yaz=1;
	a="";
      }
  getch();
}
