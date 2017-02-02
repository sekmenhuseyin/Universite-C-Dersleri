#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main()
{
  char *s;
  int i;
  long x;
  double f;

  clrscr();
  s="5";
  printf("%d   %ld   %f\n",atoi(s),atol(s),atof(s));
  s="5.4";
  printf("%d   %ld   %f\n",atoi(s),atol(s),atof(s));
  s="5.2e4=KL";
  printf("%d   %ld   %f\n",atoi(s),atol(s),atof(s));
  getch();
}
