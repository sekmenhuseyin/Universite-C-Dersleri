/* unsigned swap(unsigned) : g”nderilen tamsayinin dŸk ile yksek
			     sekizlisinin yerinin degistirilmisini verir
   unsigned max(unsigned)  : g”nderilen tamsayinin dsk sekizlisi ile
			     yksek sekizlisinden bygn verir */

#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>

unsigned swap(unsigned a);
unsigned max(unsigned a);
void main()
{
  unsigned int i,j;
  i=0xAA11;
  clrscr();
  printf("%x %x %x\n",i,swap(i),max(i));
  getch();
}

unsigned swap(unsigned a)
{
  return(a>>8)|(a<<8);
}

unsigned max(unsigned a)
{
  unsigned lo,hi,m;
  lo=a&0x00FF;
  hi=a>>8;
  m=(lo>hi)?lo:hi;
  return m;
}
