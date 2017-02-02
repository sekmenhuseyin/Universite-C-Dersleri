/* Iki sayinin ortak katlarinin en k‡gn veren program */

#include<stdio.h>
#include<conio.h>
#include<math.h>

long okek(long,long);
void main()
{
  long i,j;
  clrscr();
  printf("iki tam sayi giriniz : ");
  scanf("%ld%ld",&i,&j);
  printf("okek(%ld,%ld) = %ld\n",i,j,okek(i,j));
  getch();
}

long okek(long p, long q)
/* <q olmali. Degil ise yerlerini degistir. */
{
  long i,k;
  if (p>q) {
	     i=p;
	     p=q;
	     q=i;
	   }

/* p nin ”yle bir katin kabul bul ki q sayisina tam b”lnsn
   2 sayisindan itibaren taranmaya baslanabilir fakat p/q yeterli */
  i=q/p;
  do {
       k=p*i;
       i=i++;
     }
  while (k%q!=0);
  return k;
}