/*************************************************************
** Computer Graphics: Boundary fill algorithm in C language **
**************************************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void boundaryFill(int x, int y, int f_color, int b_color)
{		//getpixel(x,y) gives the color of specified pixel
	if(getpixel(x,y) !=b_color && getpixel(x,y) !=f_color)
	{
		putpixel(x,y,f_color);
		boundaryFill(x+1, y, f_color, b_color);
		boundaryFill(x, y+1, f_color, b_color);
		boundaryFill(x-1, y, f_color, b_color);
		boundaryFill(x-1, y-1, f_color, b_color);
		boundaryFill(x-1, y+1, f_color, b_color);
		boundaryFill(x+1, y-1, f_color, b_color);
		boundaryFill(x+1, y+1, f_color, b_color);
	}
}

int main()                          //main function
{
int gd=DETECT, gm;
//int x,y;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

rectangle(100,100,50,50);
boundaryFill(55,55,4,15);
delay(1000);
getch();
closegraph();
return 0;
}

