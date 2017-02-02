/* Girilen cÅmleyi kelimeleri bozmadan tersten yazdiran program */

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define sbt 10
main()
{
  int i,j,k;
  int m[sbt];
  char *s,*a;
  clrscr();
  gets(s);
  j=1;
  m[0]=0;
  for (i=0; i<=strlen(s); i++)
    if(s[i]==' ')
      {
	 m[j]=i;
	 j++;
       }
  m[j+1]=strlen(s)+1;
  clrscr;
  for (i=j+1; i>0; i--)
  {
    for (k=m[i-1]; k<m[i]; k++)
     printf("%c",s[k]);
    printf(" ");
  }
  getch();
}

