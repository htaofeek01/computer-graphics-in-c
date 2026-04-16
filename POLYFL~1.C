/*************************************************************
** Computer Graphics: flood fill algorithm in C language **
**************************************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void flood(int, int, int, int);

int main()                          //main function
{
int gd=DETECT, gm;
int x,y;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

rectangle(50,50,250,250);
flood(55,55,4,15);
//delay(1000);
getch();
closegraph();
//return 0;
}
void flood(int x, int y, int fillcolor, int defaultcolor)
{		//getpixel(x,y) gives the color of specified pixel
	if(getpixel(x,y)== defaultcolor)
	{
		delay(5000);
		putpixel(x,y,fillcolor);
		flood(x+1, y, fillcolor, defaultcolor);
		flood(x, y+1, fillcolor, defaultcolor);
		flood(x-1, y, fillcolor, defaultcolor);
		flood(x-1, y-1, fillcolor, defaultcolor);
		flood(x-1, y+1, fillcolor, defaultcolor);
		flood(x+1, y-1, fillcolor, defaultcolor);
		flood(x+1, y+1, fillcolor, defaultcolor);
	}
}



