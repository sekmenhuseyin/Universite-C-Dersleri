#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main(void)
{
  char *str1="Aman k”pek pek de gzel ipek gibi", *str2="pek", *ptr;
  clrscr();
  ptr=strstr(str1, str2);
  printf("Bulunan kelime : %s\n", ptr);
  getch();
}