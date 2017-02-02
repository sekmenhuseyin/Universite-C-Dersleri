/* atoi, atol, atof islevleri ”rnek */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main()
{ clrscr();
  char *s;
  int i;
  long x;
  double f;
  s="5";
  printf("%d %ld %f\n",atoi(s),atol(s),atof(s));
  s="5.4";
  printf("%d %ld %f\n",atoi(s),atol(s),atof(s));
  s="5.2e4=KL";
  printf("%d %ld %f\n",atoi(s),atol(s),atof(s));
  getch();
}
