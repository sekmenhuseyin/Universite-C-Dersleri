/* Tamsayi bir degeri dizgiye d”nstren program
   (ecvt, fcvt, gcvt var ancak ANSI C degil) */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

itostr(char *hedef, int sayi);

int main()
{ clrscr();
  char *s;
  int i;
  i=2137;
  itostr(s,i);
  printf("%d %s\n",i,s);
  getch();
}

itostr(char *hedef, int sayi)
{ int i,j,kb;
  j=sayi;
  for (kb=0; j>0; kb++)
    j=j/10;
  i=sayi;
  for (j=kb-1; j>=0; j--)
  { hedef[j]='0'+i%10;
    i=i/10;
  }
  hedef[kb]='\0';
}
