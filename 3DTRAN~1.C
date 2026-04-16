/*****************************************
** Computer Graphics 3D transformation in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int maxx, maxy, midx, midy;

void axis()  //draw line function
{
getch();
cleardevice();
line(midx, 0, midx, maxy);  //horizontal line
line(0, midy,maxx, midy);   //vertical line
}

void main()                          //main function
{
int gd=DETECT, gm;
int x,y,z,ang,x1,x2,y1,y2;

initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver
setfillstyle(5,3);
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;

//ORIGINAL OBJECT
outtextxy(100,100, "ORIGINAL OBJECT");
line(midx,0,midx,maxy);
line(0,midy,maxx,midy);
bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
axis();

//TRANSLATION
outtextxy(100,20, "TRANSLATION");
printf("\n Enter the Translation vector");
scanf("%d%d", &x, &y);
bar3d(midx+100, midy-20,midx+60,midy-90,20,5); //original object
bar3d(midx+(x+100), midy-(y+20),midx+(x+60),midy-(y+90),20,5);
axis();

//SCALING
outtextxy(100,20, "SCALING");
printf("\n Enter the Scaling factor");
scanf("%d%d%d", &x, &y, &z);
bar3d(midx+100, midy-20,midx+60,midy-90,20,5); //original object
bar3d(midx+(x*100), midy-(y*20),midx+(x*60),midy-(y*90),20*z,5);
axis();

//ROTATION
outtextxy(100,20, "ROTATION");
printf("\n Enter the Rotation angle: ");
scanf("%d", &ang);                  //receive and store angle value
x1= 100*cos(ang*3.14/180) -20*sin(ang*3.14/180);
y1= 100*sin(ang*3.14/180) +20*sin(ang*3.14/180);
x2= 60*cos(ang*3.14/180) -90*sin(ang*3.14/180);
y2= 60*sin(ang*3.14/180) +90*sin(ang*3.14/180);
axis();

//rotation about z-axis
printf("\n After rotation about z-axis");
bar3d(midx+100, midy-20,midx+60,midy-90,20,5); //original object
bar3d(midx+x1, midy-y1,midx+x2,midy-y2,20,5);
axis();

//rotation about x-axis
printf("\n After rotation about x-axis");
bar3d(midx+100, midy-20,midx+60,midy-90,20,5); //original object
bar3d(midx+100, midy-x1,midx+60,midy-x2,20,5);
axis();

//rotation about y-axis
printf("\n After rotation about y-axis");
bar3d(midx+100, midy-20,midx+60,midy-90,20,5); //original object
bar3d(midx+x1, midy-20,midx+x2,midy-90,20,5);
axis();



getch();
closegraph();
//return(0);
}

