#include<stdio.h>
#include<graphics.h> //for graphics program
#include<conio.h>
#include<dos.h> //for delay function

void main(){
int gd=DETECT, gm; //gd=detects best available graphics driver, gm=graphis mode
initgraph(&gd,&gm,"C:\\TurboC3\\BGI") ;//for initializing graph mode
//above 2 steps are must for every graphics program
//declaration of any variables must be done before calling initgraph() function
//next write code for producing requiring desing or drawing object
line(100,100,200,200); //draw a line segement
getch();
}