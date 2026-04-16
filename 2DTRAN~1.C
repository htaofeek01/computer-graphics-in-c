/*****************************************
** Computer Graphics: 2D transformation in C language **
******************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>


void main()                          //main function
{
int gd=DETECT, gm, tx, ty, theta,sx,sy,ch;
//ar ch;
initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver

printf("Transformations are:\n 1.Translation\n 2.Rotation\n 3.Scaling\n");
printf("Pls, enter your choice\n");
scanf("%d", &ch);

switch(ch)
{
case 1:
	{
	printf("You chose translation");
	rectangle(200,200,300,300);
	printf("\nPls, enter translation values\n");
	scanf("%d %d",&tx,&ty);
	rectangle(200+tx,200+ty,400+tx,500+ty);
	break;
	}
case 2:
	{
	printf("You choose Rotation");
	rectangle(200,200,300,300);
	printf("\nPls, enter the angle of rotation");
	scanf("%d",&theta);
	theta = (theta *3.14)/180;
	rectangle(200,200,(300-200)*cos(theta)-(300-200)*sin(theta),(300-200)*sin(theta)+(300-200)*cos(theta) );
	break;
	}
case 3:
	{
	printf("You choose Scaling");
	rectangle(200,200,300,300);
	printf("\nPls, enter the scaling factors");
	scanf("%d %d",&sx,&sy);
	rectangle(200,200,(300-200)*sx,(300-200)*sy);
	break;
	}
default:
	{
	printf("Your picked a wrong choice");
	break;
	}
}
getch();
closegraph();
}

