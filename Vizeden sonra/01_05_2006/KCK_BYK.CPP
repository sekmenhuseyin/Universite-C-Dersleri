/* Bir cmledeki tm k‡k harfleri byge ‡eviren program */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
  int length, i;
  char *string="Bu bir karakter dizisidir!";
  clrscr();
  length=strlen(string);
  for(i=0; i<length; i++)
  { if ((string[i]>='a')&&(string[i]<='z'))
    {  string[i]=toupper(string[i]); // _toupper seklinde de kullanilabilir.
    //tolower da k‡k harfi byge ‡evirir
    }
  }
  printf("%s\n",string);
  getch();
}