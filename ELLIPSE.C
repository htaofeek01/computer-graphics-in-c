/*****************************************
** Midpoint ellipse generation algorithm **
******************************************/
//nclude<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void midellipse(int, int, int, int);
void ellipsepoints(int, int, int, int);
void main()                          //main function
{
int gd=DETECT, gm;
int xc, yc, rx, ry;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
printf("Enter the centre of an ellipse ( xc and yc)\n");
scanf("%d%d",&xc,&yc);
printf("Enter the radius of the ellipse (rx and ry)\n");
scanf("%d%d",&rx, &ry);
midellipse(xc,yc,rx,ry);
getch();
}
//midellipse function
void midellipse(int xc, int yc, int rx, int ry)
{
double ry2 =ry*ry;
double rx2 = rx*rx;
int x=0, y=ry;
//region 1
//initialize decison parameter p

double p=ry2-rx2*ry+(0.25)*rx2;
while((2*ry2*x)<(2*rx2*y))
{
if (p<0)
      p+=2*ry2*x+2*ry2+ry2;
else
{
	p+=2*ry2*x+2*ry2+ry2 - 2*rx2*y+2*rx2;
	y--;
}
x++;
ellipsepoints(xc,yc,x,y);
}
//region 2
//initialize decision parameter p
// -ve sign by +ve sign
// <by>
p=ry2*(x*x+x+0.25)+ rx2*(y*y-2*y+1)-rx2*ry2;
while(y>0)
{
if(p>0)
     p+= -2*rx2*y -2*rx2+rx2;
else
{
    p+= -2*rx2*y - 2*rx2+rx2 +2*ry2*x+2*ry2;
x++;
}
y--;
ellipsepoints(xc,yc,x,y);
}}//end of midellipse
void ellipsepoints(int xc,int yc, int x,int y)
{
putpixel(xc+x, yc+y, WHITE);
putpixel(xc+x, yc-y, WHITE);
putpixel(xc-x, yc+y, WHITE);
putpixel(xc-x, yc-y, WHITE);

}