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
  c1 = getchar(); /* klavyeden ENTER tuþuna basýlana kadar tuþ bekler */
		  /* cursor on, karakter yazýlýr */
  c2 = getchar(); /* klavyenin tamponundaki sýradakini okur */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------getche---------\n");
  c1 = getche(); /* tuþ basýlmasýný bekler,  ENTER beklenmez*/
		  /* cursor on, karakter yazýlýr */
  c2 = getche(); /* tuþ basýldýktan sonra kontrol bu satýra geçer */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------getch----------\n");
  c1 = getch(); /* tuþ basýlmasýný bekler,  ENTER beklenmez */
		  /* cursor on, karakter yazýlmaz    x  int putch(int c): c ekrana yazýlýr*/
  c2 = getch(); /* tuþ basýldýktan sonra kontrol bu satýra geçer */
  printf("\n%c  ,  %c\n",c1,c2);
  printf("\n--------end------------\n");
  getch();
}
