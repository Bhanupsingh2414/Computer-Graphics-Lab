#include<graphics.h>
#include<stdio.h>
int main()
{
  int gd=DETECT,gm;
  int x;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  setbkcolor(WHITE);
  for(x=0;x<=420;x=x+10)
  {
    cleardevice();
    setcolor(RED);
    setfillstyle(1,BLUE);
    rectangle(50+x,100,150+x,200);
    rectangle(150+x,150,200+x,200);
    setcolor(5);
    circle(75+x,210,10);
    circle(175+x,210,10);
    delay(100);
  }
  getch();
  closegraph();
  return 0;
}