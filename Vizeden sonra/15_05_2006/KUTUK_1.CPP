/* K�t�k islemleri */

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
  fclose(kp); /* k�t�g� kapatir. Program sona erdiginde otomatik kapatilir */
  /* fcloseall() hepsini kapatir. D�nen, kapanan k�t�k sayisi. Hata var ise EOF d�ner */
}
