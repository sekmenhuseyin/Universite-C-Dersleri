#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
  int i;
  float j;
  int x,y,z;
  float w;
  clrscr();
  printf("i = "); scanf("%d",&i);
  printf("j = "); scanf("%f",&j);
  printf("x = "); scanf("%d",&x);
  printf("y = "); scanf("%d",&y);
  printf("w = "); scanf("%f",&w);
  i=abs(i);
  j=fabs(j);
  z=pow(x,y);
  printf("i = %d\n",i);
  printf("j = %f\n",j);
  printf("%d sayisinin %d inci kuvveti = %d\n",x,y,z);
  printf("ceil(w) = %f\n",ceil(w));
  printf("floor(w) = %f\n",floor(w));
  getch();
}