#include<graphics.h>  
#include<conio.h>  
void main()  
{  
    int gd=DETECT, gm, i, x, y;  
    initgraph(&gd, &gm, "C:\\TC\\BGI");  
    x=getmaxx()/2;
    y=getmaxx()/3;  
    setbkcolor(WHITE);
    setcolor(BLUE);
    for(i=1;i<=10;i++)
          {  
	setfillstyle(i,i);
	delay(50);
        circle(x, y, i*20);  
	floodfill(x-2+i*20,y,BLUE);
    }  
    getch();  
    closegraph();  
} 