/* KÅtÅk islemleri */

#include <stdio.h>
#include <conio.h>
#include <process.h>    /* exit */

void main()
{
  FILE *kp;
  char *s;
  int i;
  clrscr();
  kp=fopen("dene.txt","w"); /* NULL ise islem basarisiz */
  if(kp==NULL)
    exit(1);
  for(i=0; i<5; i++)
  {
    gets(s);
    fprintf(kp,"%s\n",s);
  }
  getch();
  fclose(kp); /* kÅtÅgÅ kapatir. Program sona erdiginde otomatik kapatilir */
  /* fcloseall() hepsini kapatir. Dînen, kapanan kÅtÅk sayisi. Hata var ise EOF dîner */
}
