/*************************************************************
** Computer Graphics: scan fill algorithm in C language **
**************************************************************/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//id floodfill(int, int, int, int);

int main()                  //main function
{

int n,i,j,k,dy,dx,x,y,temp;
int gd=DETECT, gm;
int a[20][2], xi[20];
float slope[20];




clrscr();
printf("\n\n\t Enter the no. of edges of polygon\n");
scanf("%d",&n);
printf("\n\n\t Enter the coordinates of polygon\n\n");

for(i=0; i<n; i++){
printf("\t X%d Y%d: ",i,j);
scanf("%d%d", &a[i][0],&a[i][1]);
}

a[n][0]= a[0][0];
a[n][1]= a[0][1];


initgraph(&gd, &gm, "C:\\TurboC3\\BGI"); //find and use sytem graphics driver
for(i=0; i<n; i++)
{
line(a[i][0], a[i][1],a[i+1][0],a[i+1][1]);
}

//lay(5000);
getch();
for(i=0; i<n; i++)
{
dy= a[i+1][1]-a[i][1];
dx= a[i+1][0]-a[i][0];
if(dy==0)
slope[i]=1.0;
if(dx==0)
slope[i]=0.0;

if((dy!=0) && (dx !=0)){
slope[i]= (float) dx/dy;
}
}

for(y=0;y<480; y++){
k=0;
for(i=0;i<n;i++){
if(((a[i][1]<=y) && (a[i+1][1]>y)) ||((a[i][1]>y) && (a[i+1][1]<=y)))
{
xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
k++;
}
}

for(j=0;j<k-1;j++)
for(i=0;i<k-1;i++)
{
if(xi[i]>xi[i+1])
{
temp =xi[i];
xi[i]=xi[i+1];
xi[i+1]=temp;
}
}

setcolor(35);
for(i=0;i<k;i+=2){
line(xi[i],y,xi[i+1]+1,y);
getch();
}
}
closegraph();
return 0;
}
