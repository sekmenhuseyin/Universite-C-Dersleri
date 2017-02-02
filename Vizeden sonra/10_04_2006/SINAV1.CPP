#include <stdio.h>
#include <conio.h>

double say(int);

void main()
{
  int i;
  printf("Bir sayi giriniz : ");
  scanf("%d",&i);
  printf("Sonuc = %f",say(i));
  getch();
}

double say(int n)
{
  double cvp=1.0;
  while (n)
   cvp*=n--;  //cevap=cevap*n; n=n-1;
  return cvp;
}
