#include<stdio.h>
#include<Graphics.h>
#include<dos.h>
#include<conio.h>
void main()
{       int i;
int gd=DETECT,gm=0;
initgraph(&gd,&gm,"");
cleardevice();
rectangle(0,300,640,250);

   for(i=1;i<200;i++)
   {
   cleardevice();
   line(0,258,600,258);

	rectangle(0+i,185,300+i,50);
circle(40+i,218,30);
circle(260+i,218,30);}
delay(1000);
getch();
closegraph();

}

