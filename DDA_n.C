#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;    //gd=detect my PC graphics driver, gm= set display to graphics mode
int x1, y1, x2, y2,dx,dy,steps,xinc,yinc,i;// all variables must be initialized before initgraph()
initgraph(&gd, &gm, "C:\\TurboC3\\BGI");  //for initializing graph mode


printf("Enter the values of x1 and y1\n");    //request user to enter inputs(x1,y1)
scanf("%d %d",&x1,&y1);                     //receive keyboard input and save it to x1,y1 memory
printf("Enter values of x2 and y2\n");      ////request user to enter inputs(x2,y2)
scanf("%d %d",&x2,&y2);                         //receive keyboard input and save it to x2,y2 memory
dx=x2-x1;                                       //difference of x2 and x1
dy=y2-y1;                                      //difference of y2 and y1
if(abs(dx)>abs(dy))                            //condition for |dx>dy|
steps=abs(dx);                                //number of steps
else{
steps=abs(dy);                               //alternate of the above condition
xinc =dx/steps;                              //x increment
yinc =dy/steps;                                //y increment
}
for( i=0; i<steps; i++)                         //for loop
 {
putpixel(x1,y1,3);                                //plot pixel graph
x1=x1+xinc;
y1=y1+yinc;
delay(50);                                        //plot the pixel once at a time
}
getch();                                        //receive keyboard input to terminate graphics mode
closegraph();                                    //close graph
}