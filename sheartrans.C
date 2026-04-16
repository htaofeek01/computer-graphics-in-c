/*****************************************
** Graphics texts formating in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void polygon(int[], int[], int);
void drawaxis();

void main()                          //main function
{
int gd=DETECT, gm;
int x[10], y[10], newx[10], newy[10],xva1,yval1,n,i,ch;

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

