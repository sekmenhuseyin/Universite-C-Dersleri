#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
  char string[26];
  char *ptr,c='r';
  clrscr();
  strcpy(string, "Bu bir karakter dizisidir!");
  ptr=strchr(string,c);
  if (ptr)
    printf("%c karakterinin pozisyonu : %d\n", c,ptr-string);
  else
    printf("Aranan karakter bulunamadi. %s\n",ptr);
  getch();
}