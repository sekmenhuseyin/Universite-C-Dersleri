#include <stdio.h>
#include <conio.h>
void main ()
{
	clrscr();
	int f1,f2,f3,n,i;
	f1=0;f2=1;f3=1; /* dizinin ilk iki elemanina deger atandi */
	printf("\n Bu program Fibonecci dizisinin ilk n-adet elemanini");
	printf("\n hesaplar ve sonucu ekrana yazar");
	printf("\n\n Dizinin ilk kac elemani bulunacak, (n)?");
	scanf("%i",&n);
	printf("\n SiraNo Deger");
	printf("\n %2i     %2i",0,f1);
	//printf("\n %2i     %2i",1,f2);
	for (i=1;i<n;i++)
	{
	  printf("\n %2i     %2i",i,f3);
	  f3=f1+f2;f1=f2;f2=f3;
	}
	printf("\n\n Program Fibonecci dizisinin ilk n adet elemanini buldu ve ekrana yazdi \n\n");
	getch();

}
