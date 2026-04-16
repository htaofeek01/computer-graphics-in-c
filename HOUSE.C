/*****************************************
** Graphics texts formating in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()                          //main function
{
int gd=DETECT, gm, i;

int tri[]={320,50,100,200,540,200,320,50};
int steps[]= {280,400,260,450,380,450,400,400,300,400};
initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

//ceiling
setfillstyle(HATCH_FILL, RED);
fillpoly(4,tri);
//building
rectangle(150,200,490,400);
setfillstyle(SOLID_FILL, BLUE);
floodfill(200,300,WHITE);
//windows
setcolor(RED);
rectangle(200,230,280,320);
for(i=0; i<80; i+=10)
line(200+i,230,200+i,320);
line(200,270,280,270);
line(200,280,280,280);
//door
setcolor(WHITE);
rectangle(300,200,380,400);
line(300,300,380,300);
circle(340,300,10);
//oval open on right
setfillstyle(HATCH_FILL,RED);
fillellipse(440,280,15,20);
//steps
drawpoly(5,steps);
getch();
//osegraph();
return 0;
}

