/*****************************************
**Lab6a:Moving car Graphics in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()                          //main function
{
int gd=DETECT, gm;
int x1, x2, x3, x4, x5, x6, i, j; //initializing all variables
int c[]={20,350,60,350,100,300,200,300,240,350,280,350,280,420,20,420,20,3};
int b[]={20,350,60,350,100,300,200,300,240,350,280,350,280,420,20,420,20,3};

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver
  x1=80,x2=220, x3=100, x4=160,x6=120, x6=180;
for(i=0;i<600; i+=1)
{
setcolor(CYAN);
 for (j=0; j<18; j+=2)
  b[j] =c[j]+i;
 //CAR
 drawpoly(9,b);


//WHEELS
setfillstyle(LTSLASH_FILL, MAGENTA);
fillellipse(x1+i, 420, 20, 20);
fillellipse(x2+i, 420, 20, 20);

//WINDOW
rectangle(x3+i, 320, 140+i,350);
rectangle(x4+i, 320, 200+i,350);
setfillstyle(SOLID_FILL,WHITE);
floodfill(x5+i, 330, CYAN);
floodfill(x6+i, 330, CYAN);
clearviewport();
}
getch();
//turn(0);
}

