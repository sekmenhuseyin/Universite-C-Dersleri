/* ++/-- isle‡leri */

#include <stdio.h>
#include <conio.h>

void main()
{
  int i,j,k,m,l;
  i=5;
  j=3;
  k=i++; // ”nce degeri k'ya atip daha sonra i'nin degerinin artiriyor.
  l=++i; // ”nce i'nin degerini artirir daha sonra l'ye atar.
  m=j--;  // Esitlige yakin olan islem ”nce yapilir!!!
  clrscr();
  printf("i = %d\n",i);
  printf("j = %d\n",j);
  printf("k = %d\n",k);
  printf("m = %d\n",m);
  printf("l = %d\n",l);
  getch();
}
