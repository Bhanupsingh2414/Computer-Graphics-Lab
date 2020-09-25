#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
	int gd=0,gm,x1,y1,x2,y2,x3,y3;
	double s,c,angle;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	setcolor(RED);
	printf("enter triangle cordinates: ");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	setbkcolor(WHITE);
	cleardevice();
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	setbkcolor(BLACK);
	printf("rotation angle: ");
	scanf("%lf",&angle);
	setbkcolor(WHITE);
	c=cos(angle*M_PI/180);
	s=sin(angle*M_PI/180);
	x1=floor(x1*c+y1*s);
	y1=floor(-x1*s+y1*c);
	x2=floor(x2*c+y2*s);
	y2=floor(-x2*s+y2*c);
	x3=floor(x3*c+y3*s);
	y3=floor(-x3*s+y3*c);
	cleardevice();
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	getch();
	closegraph();
	getch();
}
