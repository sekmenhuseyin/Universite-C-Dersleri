/* Do-While d�ng�s� �rnegi */

#include <stdio.h>
#include <conio.h>

long fakt(int n);

void main()
{
  int sayi;
  clrscr();
  printf("Sayiyi girniz = "); scanf("%d",&sayi);
  printf("Sayinin fakt�riyeli = %d\n",fakt(sayi));
  getch();
}
long fakt(int n)
{
  int j;
  long f=1;
  for (j=2; j<=n; j++)
    f=f*j;
  return f;
}
