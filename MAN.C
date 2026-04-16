/*****************************************
** Graphics texts formating in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()                          //main function
{
int gd=DETECT, gm;
//int x=25, y=50, font;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

//MAN
setcolor(BLACK);
setfillstyle(SOLID_FILL, YELLOW);
fillellipse(40,140,30,30);
setfillstyle(SOLID_FILL, BLACK);
fillellipse(30,130,3,5);
fillellipse(50,130,3,5);
line(40,140,40,130);
sector(40,150,180,360,8,10);
setcolor(YELLOW);
line(40,170,40,320);

//HAND
line(40,200,10,190);
line(40,200,70,190);

//LEG
line(40,320,10,330);
line(40,320,70,330);
getch();
closegraph();

}

