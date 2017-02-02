#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main(){
   int gd, gm, hata;
   int x, y;

   gd = DETECT;  /* ekran sÅrÅcÅsÅnÅ otomatik tanç */
		 /* CGA, HERC, VGA..*/

   initgraph(&gd, &gm, "C:\\TC\\BGI\\");
   /* gd         gm
      VGA    ¶ VGALO    ¶  0  ¶  640 x 200 ¶ 16 color¶  2
	 9       ¶ VGAMED ¶  1  ¶  640 x 350 ¶ 16 color¶  2
		  ¶ VGAHI     ¶  2  ¶  640 x 480 ¶ 16 color¶  1
   */
    hata = graphresult();

   if (hata != grOk){  /* grOk = 0 tançmlç */
      printf("Grafik hatasç: %s\n", grapherrormsg(hata));
      getch();
      exit(1);
   }

   x = getmaxx();
   y = getmaxy();

   setbkcolor(EGA_RED);
   setcolor(EGA_YELLOW);
   cleardevice();

   line(0, 0, 0, y);
   line(0, y, x, y);
   line(x, y, x, 0);
   line(x, 0, 0, 0);

   getch();

   cleardevice();

   moveto(50, 50);
   lineto(50, 100);
   lineto(100,100);
   lineto(100,50);
   lineto(50, 50);

   getch();

   closegraph();
}

