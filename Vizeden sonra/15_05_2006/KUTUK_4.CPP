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
  kp=fopen("dene.txt","a+"); // Dosyadan kayit okumak iáin
  if(kp==NULL)
    exit(1);
  for(i=0; i<2; i++)
  {
    gets(s);
    fprintf(kp,"%s\n",s);
  }

  printf("---------------------------------------\n");
  rewind(kp); // Dosyanin basina gidilmesini saglar
  fscanf(kp, "%s",s);
  while (!feof(kp))
  {
    *s=NULL;
    fscanf(kp,"%s",s);
    printf("%s\n",s);
  }
  getch();
  fclose(kp);
}
