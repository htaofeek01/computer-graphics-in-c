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
int x=25, y=50, font;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

for(font=0;font<10=10; font++)
{
settextstyle(font,0,5);
outtextxy(x,y," Taofeek");
y=y+25
}
getch();
closegraph();
return(0);
}

