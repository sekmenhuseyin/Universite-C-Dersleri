/* iki boyutlu diziler zerine */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define satir 5
#define sutun 5

double enbuyuk(double[][sutun],int );
void matris_oku(double[][sutun]);

void main()
{
  double a[satir][sutun];
  double b[satir]; /* satirdaki en byk elemanlar */
  double c[satir]; /* satirlardaki sutunlarin toplami */
  int i,j;
  matris_oku(a);
  for(i=0; i<satir; i++)
    b[i]=enbuyuk(a,i);
  /* Satirdaki elelmanlarin toplamlarinin oluŸturdugu matris */
  for(i=0; i<satir; i++)
  {
    c[i]=0;
    for(j=0; j<sutun; j++)
      c[i]=c[i]+a[i][j];
  }
  clrscr();
  for(i=0; i<satir; i++)
  {
    for(j=0; j<sutun; j++)
      printf("%3.0f",a[i][j]);      /* Bi‡imli yazdirma */
    printf(" %4.0f %4.0f\n",b[i],c[i]);
  }
  getch();
}

double enbuyuk(double a[][sutun],int sat)
{
  double r;
  int i;
  r=a[sat][0];  /* ilk eleman en byk */
  for(i=1; i<sutun; i++)
    if (a[sat][i]>r)
      r=a[sat][i];
  return r;
} /* Function en_buyuk */

void matris_oku(double a[][sutun])
{
  randomize();
  int i,j;
  for(i=0; i<satir; i++)
    for(j=0; j<sutun; j++)
      a[i][j]=random(10);
} /* matris_oku */