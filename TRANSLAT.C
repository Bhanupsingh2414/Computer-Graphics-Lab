#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm;
 int x,y,tx,ty;
 initgraph(&gd,&gm,"C:\\tc\\bgi");
 printf("Enter coordinates\n");
 scanf("%d%d",&x,&y);
 putypixel(x,y,7);
 printf("Enter translation coordinates\n");
 scanf("%d%d",&tx,&ty);
 x=x+tx;
 y=y+ty;
 putpixel(x,y,7);
 getch();
}
