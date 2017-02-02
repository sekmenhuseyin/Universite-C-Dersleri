/* Bir dizginin belirli bir par‡asini veren islev (strncpy(s2,s1,n)) */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void altdizgi(char *hedef, char *kaynak,int bas, int uzunluk);

int main()
{ clrscr();
  char *s1;
  char *s2;
  s1="01234567890";
  altdizgi(s2,s1,0,5);
  printf("%s\n",s2);
  getch();
}

void altdizgi(char *hedef, char *kaynak,int bas, int uzunluk)
{ int i;
  for (i=0; i<uzunluk&&kaynak[bas+1]!='\0';i++)
    hedef[i]=kaynak[i+bas];
  hedef[i]='\0';
}
