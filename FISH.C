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

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver
//FISH TANK
rectangle(220,300,630,470);
setfillstyle(LTSLASH_FILL,LIGHTBLUE);
floodfill(250,400,WHITE);

//FISH SET
setfillstyle(SOLID_FILL,CYAN);
fillellipse(320,400,60,20);

//FISH EYE
setfillstyle(SOLID_FILL,RED);
fillellipse(280,400,8,8);
setfillstyle(SOLID_FILL,CYAN);
fillellipse(280,400,5,5);
//floodfill(250,400,WHITE);

//GILLS
arc(280,400,320,40,30);
//FINS
setfillstyle(SOLID_FILL,GREEN);
pieslice(350,385,70,190,20);
pieslice(350,410,190,310,20);

//TAIL
setfillstyle(SOLID_FILL,GREEN);
setcolor(GREEN);
sector(390,400,50,180,20,10);
sector(390,400,180,310,20,10);
getch();
closegraph();
return(0);
}

