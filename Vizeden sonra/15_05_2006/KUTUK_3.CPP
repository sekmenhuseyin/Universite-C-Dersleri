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
  kp=fopen("dene.txt","r"); // Dosyadan kayit okumak iáin
  if(kp==NULL)
    exit(1);
  // Dosyadan ilk okuma islemi yapiliyor...
  for(i=0; i<2; i++)
  {
    fscanf(kp,"%s",s);
    printf("%s\n",s);
  }

  printf("----------------------------------------\n",s);

  // Dosyadan ikinci bir okuma islemi yapiliyor...
  rewind(kp); // Dosyanin basina gidilmesini saglar
  while (!feof(kp))
  {
    *s=NULL; // Her degere bosluk atiyor
    fscanf(kp, "%s",s);
    printf("%s\n",s);
  }
  getch();
  fclose(kp);
}
