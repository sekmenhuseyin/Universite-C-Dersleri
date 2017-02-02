/* Girilen bir metnin uzunlugunu veren program */

#include <stdio.h>
#include <conio.h>

main()
{
  char *s;
  int i;
  gets(s);
  i=0;
  while (s[i]!='\0')        /* for (i=0; s[i]!='\0'; i++)
    i++;                       {}  */
  printf("Uzunluk %d\n",i);
  getch();
}
