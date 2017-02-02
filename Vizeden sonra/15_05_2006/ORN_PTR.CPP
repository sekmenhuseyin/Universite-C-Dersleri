/* Veriye isaret‡i degisken yoluyla erisim */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i;
  int *iptr;
  iptr=&i;  /* & i degiskeninin bulundugu bellek adresini belirtmek i‡in
	       kullanilir */
  *iptr=8;
  clrscr();
  printf("i degiskeninin degeri %d\n",i);
  printf("iptr adresinin i‡erigi %d\n",*iptr);
  printf("iptr adresi %p\n",iptr);
  getch();
}
