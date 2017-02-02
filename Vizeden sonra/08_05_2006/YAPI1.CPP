/* Klavyeden ”grenci notlarini ve numaralarini girdikten sonra
   ortalamayi hesaplayan, ortalamayi ge‡en ”grencileri ve
   ortalamay g”re ”grencileri listeleyen program */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define ogrsay 3
void main()
{
  struct ogrenci
    { char no[10];
      int notu;
    };
  struct ogrenci ogr[ogrsay];
  struct ogrenci ydk;
  int i,j;
  float t,ort;
  clrscr();
  for(i=0; i<ogrsay; i++)
  { printf("%d.”grencinin numarasi ve notu : ",i+1);
    scanf("%s %d", &ogr[i].no, &ogr[i].notu);
  }
  t=0;
  for(i=0; i<ogrsay; i++)
    t=t+ogr[i].notu;
  ort=t/ogrsay;
  printf("---------------------------\n");
  printf("Ortalama = %f\n",ort);
  printf("---------------------------\n");
  printf("Ortalamayi ge‡en ”grenciler \n");
  for(i=0; i<ogrsay; i++)
    if(ogr[i].notu>ort)
      printf("%s\t\t%d\n",ogr[i].no, ogr[i].notu);
  for(i=0; i<ogrsay; i++)
    for(j=i+1; j<ogrsay; j++)
      if(ogr[i].notu>ogr[j].notu)
      { ydk=ogr[i];
	ogr[i]=ogr[j];
	ogr[j]=ydk;
      }
  printf("---------------------------\n");
  printf("Notlarin siralanmasi\n");
  for(i=0; i<ogrsay; i++)
    printf("%s\t %d\n",ogr[i].no, ogr[i].notu);
  getch();
}