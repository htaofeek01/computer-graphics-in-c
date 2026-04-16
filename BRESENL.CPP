#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main()
{
	int gd=DETECT, gm;
       int x1,y1,x2,y2,dx,dy,p;	initgraph(&gd,&gm, "C:\\TurboC3\\BGI");


	cout<< "Enter the values of x1, y1" <<endl;
	cin>>x1>>y1;
	cout<< "Enter the values of x2, y2" <<endl;
	cin>>x2>>y2;
	dx =x2-x1;
	dy =y2-y1;
	p = 2*dy-dx;

	putpixel(x1,y1,3);
	for(int k=0; k<dx; k++){
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
		delay(50);
	}
getch();
closegraph();
}
