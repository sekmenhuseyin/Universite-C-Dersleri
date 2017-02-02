#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void altdizgi(char *hedef, char *kaynak, int bas, int uzunluk);
int main()
 {
    char *s1;
    char *s2;
    clrscr();
    s1 = "01234567890";
    altdizgi(s2, s1, 0, 5);
    printf("%s\n",s2);
    getch();
}
void altdizgi(char *hedef, char *kaynak, int bas, int uzunluk)
{
  int i;
  for(i = 0; i < uzunluk && kaynak[bas + i] != '\0'; i++)
	hedef[i] = kaynak[i + bas];
  hedef[i] = '\0';
}
