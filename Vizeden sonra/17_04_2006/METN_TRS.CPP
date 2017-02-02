/* Girilen bir metni tersten yazdiran program */

#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
  clrscr();
  char *s;
  int i;
  gets(s);
  for (i=strlen(s)-1; i>=0; i--)
    printf("%c",s[i]);
  printf("\n");
  getch();
}
