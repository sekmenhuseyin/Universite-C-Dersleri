#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void){
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x, y;
   int radius = 10;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi\\");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }           /* the start of the program */
   x = getmaxx() / 2;
   y = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the car */
   circle(x, y, radius);
   circle(x+100, y, radius);
   line(x+radius,y,x+100-radius,y);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
