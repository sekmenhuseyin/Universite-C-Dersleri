#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
  char c1, c2;
  char s[10];
  clrscr();
  printf("\n--------getchar--------\n");
  c1 = getchar(); /* klavyeden ENTER tu�una bas�lana kadar tu� bekler */
		  /* cursor on, karakter yaz�l�r */
  c2 = getchar(); /* klavyenin tamponundaki s�radakini okur */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------getche---------\n");
  c1 = getche(); /* tu� bas�lmas�n� bekler,  ENTER beklenmez*/
		  /* cursor on, karakter yaz�l�r */
  c2 = getche(); /* tu� bas�ld�ktan sonra kontrol bu sat�ra ge�er */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------getch----------\n");
  c1 = getch(); /* tu� bas�lmas�n� bekler,  ENTER beklenmez */
		  /* cursor on, karakter yaz�lmaz    x  int putch(int c): c ekrana yaz�l�r*/
  c2 = getch(); /* tu� bas�ld�ktan sonra kontrol bu sat�ra ge�er */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------end------------\n");
  getch();
}
