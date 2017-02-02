/* Grafiklerle ilgili îrnek */

# include <graphics.h>
# include <stdlib.h>
# include <stdio.h>
# include <conio.h>

void main()
{
  int gd,gm,hata;
  int x,y,i,j;
  gd=DETECT; /* ekran sÅrÅcÅsÅnÅ otomatik tani */
	     /* CGA, HERC, VGA... */
  initgraph(&gd,&gm,"C:\\TC\\BGI\\");
  /*gd    gm
    VGA  |VGALO  |0|640x200|16 color|2
     9   |VGAMED |1|640x350|16 color|2
	 |VGAHI  |2|640x480|16 color|1
  */
  hata=graphresult();
  if(hata!=grOk) /* grOK=0 tanimli */
  {
    printf("Grafik hatasi : %s\n",grapherrormsg(hata));
    getch();
    exit(1);
  }
  x=getmaxx();
  y=getmaxy();
  setbkcolor(EGA_MAGENTA); //setbkcolor(5);
  setcolor(EGA_WHITE);  //setcolor(63);
  cleardevice();
  j=0;
  while(j<1)
  { for(i=0; i<=x-90; i++)
    {
      cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+20,y/2,i+70,(y/2)+30);
      rectangle(i,(y/2)+30,i+90,(y/2)+60);
      circle(i+20,(y/2)+60,10);
      circle(i+70,(y/2)+60,10);
      line(i+45,(y/2)+30,i+45,(y/2)+55);

      if(i!=0)
      {
      setcolor(0);
      //cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+19,y/2,i+69,(y/2)+30);
      rectangle(i-1,(y/2)+30,i+89,(y/2)+60);
      circle(i+19,(y/2)+60,10);
      circle(i+69,(y/2)+60,10);
      line(i+44,(y/2)+30,i+44,(y/2)+55);

      }

      setcolor(63);
      //cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+20,y/2,i+70,(y/2)+30);
      rectangle(i,(y/2)+30,i+90,(y/2)+60);
      circle(i+20,(y/2)+60,10);
      circle(i+70,(y/2)+60,10);
      line(i+45,(y/2)+30,i+45,(y/2)+55);
    }
    for(i=x-90; i>0; i--)
    {
      cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+20,y/2,i+70,(y/2)+30);
      rectangle(i,(y/2)+30,i+90,(y/2)+60);
      circle(i+20,(y/2)+60,10);
      circle(i+70,(y/2)+60,10);
      line(i+45,(y/2)+30,i+45,(y/2)+55);

      setcolor(0);
      cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+20,y/2,i+70,(y/2)+30);
      rectangle(i,(y/2)+30,i+90,(y/2)+60);
      circle(i+20,(y/2)+60,10);
      circle(i+70,(y/2)+60,10);
      line(i+45,(y/2)+30,i+45,(y/2)+55);

      setcolor(63);
      cleardevice();
      line(0,(y/2)+70,x,(y/2)+70);
      rectangle(i+20,y/2,i+70,(y/2)+30);
      rectangle(i,(y/2)+30,i+90,(y/2)+60);
      circle(i+20,(y/2)+60,10);
      circle(i+70,(y/2)+60,10);
      line(i+45,(y/2)+30,i+45,(y/2)+55);
    }
    j++;
  }
  getch();
  closegraph();
}