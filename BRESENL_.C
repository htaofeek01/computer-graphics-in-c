#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>   //for delay function

void main()
{
	int gd=DETECT, gm;        //detect computer graphics driver
       int x1,y1,x2,y2,dx,dy,p,k;  //initializing all variables
       initgraph(&gd, &gm, "C:\\TurboC3\\BGI");   //initialize graphics mode

      printf( "Enter the values of x1, y1\n");  //prompt user to enter input(x1,y1)
       scanf("%d %d",&x1,&y1);                  ////receive input and save to (x1, y1) memory

       printf( "Enter the values of x2,y2\n"); //prompt user to enter input(x2,y2)
       scanf("%d %d",&x2,&y2);                 //receive input and save to (x2, y2) memory
	dx =x2-x1;
	dy= y2-y1;
	 p=2*dy-dx;    //parameter
	putpixel(x1,y1,3);
	for( k=0; k<dx; k++){                   //bresenham's line drawing algorithm
		if (p<0){
			x1++;
			p=p+2*dy;

		}
		else{
			x1++;
			y1++;
			p=p+2*dy-2*dx;


		}
		putpixel(x1,y1,3);
		delay(50);              //plot the line slowly
	}
getch();         //close terminal for any keyboard input received after program execution
closegraph();    //close graph
}
