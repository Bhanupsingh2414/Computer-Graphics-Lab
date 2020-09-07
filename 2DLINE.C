#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=	DETECT,gm;
	int l[2][2],v[2]={10,15},i=0,j;
	clrscr();
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	printf("enter the initial and final cordinates of a line :");
	while(i<2)
	{
		printf("x%d and y%d = ",i,j);
		j=0;
		scanf("%d",&l[i][j]);
		scanf("%d",&l[i][j+1]);
		i++;
	}
	line(l[0][0],l[0][1],l[1][0],l[1][1]);
	setcolor(BLUE);
	line(l[0][0]+v[0],l[0][1]+v[1],l[1][0]+v[0],l[1][1]+v[1]);
	getch();
	closegraph();
}