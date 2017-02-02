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
  while(j!=13)
  { for(i=0; i<=x; i++)
    {
      cleardevice();
      circle(i,y/2,100);
    }
     for(i=x; i>0; i--)
    {
      cleardevice();
      circle(i,y/2,100);
    }
    j=getch();
  }
  getch();
  closegraph();
}