#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double say(int);
void main(){
	int i;
	int a1,b1,c1; double d1;
	float a2,b2,c2,x1,x2;
	int j;
	clrscr();
	//////////////////////////////////////////////////soru1
	printf("Bir say giriniz: ");	scanf("%d",&i);
	printf("Sonu‡= %6.0f \n",say(i));
	//////////////////////////////////////////////////soru2
	a1=1;b1=3;c1=4;			d1=a1+b1+c1*c1/b1;
	printf("Sonu‡= %6.0f \n",d1);
	//////////////////////////////////////////////////soru3&4
	a2=1;b2=-3;c2=2;		d1=b2*b2-4*a2*c2;
	x1=(-b2-sqrt(d1))/(2*a2);	x2=(-b2+sqrt(d1))/(2*a2);
	printf("x1= %6.0f \nx2= %6.0f \n",x1,x2);
	//////////////////////////////////////////////////soru5
	c1=0;a1=3;b1=5;
	do{
		c1=c1+a1;b1=b1-1;
	}while(b1>0);
	printf("c= %d \n",c1);
	//////////////////////////////////////////////////soru6&7
	j=0;
	for(i=1;i<=10;i++){
		j=j+1;
	}
	printf("i= %d \nj= %d",i,j);
	getch();
}

double say(int n){
	double cevap=1.0;
	while(n){		//while (n>0)
		cevap*=n--;	//cevap=cevap*n; n=n-1;
	}
	return cevap;
}