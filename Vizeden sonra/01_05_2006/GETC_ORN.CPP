/* getchar, getche, getch islevleri ”rnek */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{ clrscr();
  char c1,c2;
  char s[10];
  c1=getchar(); /* Klavyeden ENTER tusuna basilana kadar bekler */
		/* cursor on, karakter yazilir */
  c2=getchar(); /* Klavyenin tamponundan siradakini okur */
  printf("-------getchar demo-------");
  printf("\n%c, %c\n",c1,c2);

  c1=getche(); /* Tus basilmasini bekler, ENTER beklenmez */
	       /* cursor on, karakter yazilir */
  c2=getche(); /* Tus basildiktan sonra kontrol bu satira gecer */
  printf("-------getche demo-------");
  printf("\n%c, %c\n",c1,c2);

  c1=getch(); /* Tus basilmasini bekler, ENTER beklenmez */
	       /* cursor on, karakter yazilmaz, x int putch(int c): c ekrana yazilir */
  c2=getch(); /* Tus basildiktan sonra kontrol bu satira gecer */
  printf("-------getch demo-------");
  printf("\n%c, %c\n",c1,c2);
  getch();
}
