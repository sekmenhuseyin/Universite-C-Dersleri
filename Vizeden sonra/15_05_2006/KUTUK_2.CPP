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
  kp=fopen("dene.txt","r"); // Dosyadan kayit okumak i�in
  if(kp==NULL)
    exit(1);
  for(i=0; i<5; i++)
  {
    fscanf(kp,"%s",s);
    printf("%s\n",s);
  }
  getch();
  fclose(kp);
}
