/* For d”ngs ile fakt”riyel hesaplama */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i,n,j=1;
  clrscr();
  printf("n sayisi = "); scanf("%d",&n);
  for (i=1; i<=n; i++)
    j=j*i;
    printf("%d! = %d\n",n,j);
  getch();
}