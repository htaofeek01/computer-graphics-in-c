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
setfillstyle(SOLID_FILL,RED);
setcolor(RED);
sector(390,400,50,180,20,10);
sector(390,400,180,310,20,10);

//MAN
setcolor(BLACK);
setfillstyle(SOLID_FILL, YELLOW);
fillellipse(40,140,30,30);
setfillstyle(SOLID_FILL, BLACK);
fillellipse(30,130,3,5);
fillellipse(50,130,3,5);
line(40,140,40,130);
sector(40,150,180,360,8,10);
setcolor(GREEN);
line(40,170,40,320);

//HAND
line(40,200,10,190);
line(40,200,70,190);

//LEG
line(40,320,10,330);
line(40,320,70,330);

//FISHING ROD
setcolor(WHITE);
line(70,190,300,380);

//BIRDS
arc(300,100,0,150,15);
arc(325,100,20,150,15);

arc(400,80,0,150,10);
arc(420,80,0,150,10);
getch();
closegraph();
return(0);
}

