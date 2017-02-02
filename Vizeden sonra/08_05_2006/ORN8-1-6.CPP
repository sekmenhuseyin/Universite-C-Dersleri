/* ”grencinin dogum tarihi 2 byte tamsayi olarak saklanmaktadir
   Bu bilginin kodlanmasi s”yledir;
      bit	anlami
      0-4	gn
      5-8	ay
      9-15	yil  */

#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>

//typedef insigned int word; /* kolaylik i.in */
void binary_yaz(word);
word copybits(word, word, word);
word ters(word, word, word);
word rdon(word, word);
word sdon(word, word);

void main()
{
  word i,j;
  clrscr();
  for (i=16; i>0; i--)
    printf("%x",i-1);
  printf("\n");
  i=0xee;
  binary_yaz(i); printf("\n");
  j=copy(i,5,4); binary_yaz(i); printf("copybits(i,5,4)\n");
  j=ters(i,5,4); binary_yaz(i); printf("ters(i,5,4)\n");
  j=rdon(i,4); binary_yaz(i); printf("rdon(i,4)\n");
  getch();
}

word copybits(word x, word b, word n)
/* x sayisinin sagdan b. bitinden itibaren n bitini verir. */
/* ilk bitin numarasi */
{
  word i;
  i=x>>(b+i-n); /* ilgili bit blogunu saga dayali olacak bi‡imde kaydirir */
  i=i&~(~(0)<<n); /* sagdaki n bit i‡in maske olustur */
  return i;
} /* end of copybits */

word ters(word x, word b, word n)
/* x'in b. bitinden itibaren n bitin tersini alir */
{
  word p,r;
  p=~(x);
  r=~(~(0)<<n)<<(b-n+1); /* se‡ilen bitler i‡in maske */
  p=p&r;
  x=x&~(r);
  return x|p;
  /*
   8 bit i‡in ters(.,5,4)
     76543210
   x=01101000
   p=10010111
   r=00111100 ~(~(0)<<n)<<(b-n+1)
   p=00010100 p=p&r
   x=01000000 x&~(r)
    =01010100 x|p d”nen
  */
} /* end of test */

word rdon8word x, word n)
/* x'i n bit saga d”ndrr */
{
  word i;
  for (i=1; i<=n; i++)
  {
    if(x%2==1)
    {
      x=x/2;
      x=x|0x8000;
    }
    else
      x=x/2;
  }
  return x;
} /*end of rdon */

word sdon(word x, word n)
/* x'i n bit saga kaydirir. rdon fonksiyonunun baska bi‡imi */
{
  word i;
  i=copybits(x,n-1,n);
  x=x>>n;
  i=i<<(16-n+1);
  return x|i;
} /* end of rdon */

void binary_yaz(word x)
{
  int i;
  word m;
  m=0x8000;
  for (i=0; i<=16; i++)
  {
    if(x&m)
      printf("0");
    m=m>>1;
  }
}