/* 2x2 lik matrisin tersi */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define satir 2
#define sutun 2

void matris_oku(double[satir][sutun]);
int det(double[satir][sutun]);

void main()
{
  double a[satir][sutun];
  double ters[sutun][satir];
  int i,j;
  matris_oku(a);
  clrscr();
  for(i=0; i<satir; i++)
  {
   for(j=0; j<sutun; j++)
      printf("%3.0f",a[i][j]);
   printf("\n");
  }
  printf("-----------------------------------\n");
  printf("Determinanti = %d \n",det(a));
  printf("-----------------------------------\n");
  ters[0][0]=a[1][1]/det(a);
  ters[0][1]=-a[0][1]/det(a);
  ters[1][0]=-a[1][0]/det(a);
  ters[1][1]=a[0][0]/det(a);
  for(i=0; i<satir; i++)
  {
   for(j=0; j<sutun; j++)
      printf("%6.2f",ters[i][j]);
   printf("\n");
  }
  getch();
}

void matris_oku(double a[satir][sutun])
{
  randomize();
  int i,j;
  for(i=0; i<satir; i++)
    for(j=0; j<sutun; j++)
      a[i][j]=random(20);
} /* matris_oku */

int det(double a[satir][sutun])
{
  int r;
  r=a[0][0]+a[1][1]-a[0][1]-a[1][0];
  return r;
}
