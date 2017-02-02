/* 3x3 lk matrisin transposesi */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define satir 3
#define sutun 3

void matris_oku(double[satir][sutun]);

void main()
{
  double a[satir][sutun];
  double b[sutun][satir];
  int i,j;
  matris_oku(a);
  clrscr();
  for(i=0; i<satir; i++)
  {
   for(j=0; j<sutun; j++)
   {
      printf("%3.0f",a[i][j]);
      b[j][i]=a[i][j];
   }
   printf("\n");
  }
  printf("-------Transposesi---------\n");
  for(i=0; i<satir; i++)
  {
     for(j=0; j<sutun; j++)
     printf("%3.0f",b[i][j]);
  printf ("\n");
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