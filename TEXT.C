#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void printMsg()
{
	int gdriver = DETECT,gmode,i;
	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
	for (i=1; i<10; i++)
	{
		setcolor(i);
		settextstyle(i,0,i);
		outtextxy(100,20*i,"Computer Graphics");
		delay(1000);
	}
	delay(2000);
}
int main()
{
	printMsg();
	return 0;
}
