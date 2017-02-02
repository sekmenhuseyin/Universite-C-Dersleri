#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
 {
    char *s;
    int i;
    i = 2137;
    itostr(s, i);
    printf("%d   %s\n",i, s);
}
itostr(char *hedef, int sayi)
{
  int i, j, kb;
  j = sayi;
  for (kb = 0; j>0; kb++)
      j = j / 10;
  i = sayi;
  for (j=kb-1; j>=0; j--) {
      hedef[j] = '0' + i % 10;
      i = i / 10;
  }
  hedef[kb] = '\0';
}
