#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

//main function
void main(){

int xc,yc,x,y,r,d, gd=DETECT, gm;//initialize all variables

printf("Please enter radius of the cirlce\n");
scanf("%d", &r);
x=0, y=r, d=1-r;     //CIRCLE PARAMETERS
 //Detect graphics driver
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
printf("Please enter the center coordinates of the circle \n");
scanf("%d %d", &xc, &yc);


//midpoint circle algorithm

do
{
       putpixel(xc+x,yc+y,WHITE); //draw line white pixel
       putpixel(xc+x,yc-y,WHITE); 
       putpixel(xc-x,yc+y,WHITE);
       putpixel(xc-x,yc-y,WHITE);
       putpixel(xc+y,yc+x,WHITE);
       putpixel(xc+y,yc-x,WHITE);
       putpixel(xc-y,yc+x,WHITE);
       putpixel(xc-y,yc-x,WHITE);

      if(d<0){
      x=x+1;
      y=y;
      d=d+2*x+2;
      }
      else{
      x=x+1;
      y=y-1;
     d=d+2*(x-y)+1;
     }
}
while(x<y) ;
getch();
closegraph();
}
