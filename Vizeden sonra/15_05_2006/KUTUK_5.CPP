/* KÅtÅk islemleri */

#include <stdio.h>
#include <conio.h>
#include <process.h>    /* exit */

int record_count(FILE *i);
void main()
{
  FILE *kp;
  char *s;
  int i;
  clrscr();
  kp=fopen("dene.txt","a+"); // Dosyadan kayit okumak iáin
  if(kp==NULL)
    exit(1);
  rewind(kp); // Dosyanin basina gidilmesini saglar
  fscanf(kp, "%s",s);
  while (!feof(kp))
  {
    *s=NULL;
    fscanf(kp,"%s",s);
    printf("%s\n",s);
  }
  printf("---------------------------------\n");
  printf("Dosyadaki deger sayisi = %d\n",record_count(kp));
  getch();
  fclose(kp);
}

int record_count (FILE *im)
{
  int j;
  char *ss;
  rewind(im);
  j=0;
  while (!feof(im))
  {
    fscanf(im,"%s",ss);
    j++;
  }
  return j;
}

