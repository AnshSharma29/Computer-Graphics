/*How to draw a line*/

#include<graphics.h>
#include<conio.h>

void main()
{

  int gd = DETECT, gm;
  init graph(&gd, &gm, "path of the BGI folder");
  line(100, 100, 200, 200);
  getch();
  closegraph();
}



