/***********
author - Dheeraj Gundeti
***********/
#include<graphics.h>

#include<conio.h>

#include<stdio.h>

main()

{

   int gd = DETECT, gm,i=0;

   char ch,points[30];

   int a=390,b=460,c=130,d=180,x=rand()%200,y=rand()%100,t=rand()%200,r=rand()%100;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   outtextxy(200,200,"PRESS ANY TO KEY START THE GAME");

   getch();

   cleardevice();

   rectangle(c,a,d,b);

   while(1){

	setcolor(YELLOW);

	outtextxy(400,50,"PLAYER ONE");

	 if(y>=400){

		x=rand()%200;

		y=rand()%100;

		i++;

		}

	  if(t>=400){

		r=rand()%200;

		t=rand()%150;i++;

		}

	y=y+10;t=t+10;

	if(ch=='q')break;

	ch=getch();

	switch(ch){

		case 'a': c=c-10;d=d-10;break;

		case 'd': c=c+10;d=d+10;break;

		}

	clearviewport();

	setfillstyle(SOLID_FILL,3);

	bar(r,t,r+20,t+50);

	bar(x,y,x+20,y+50);

	bar(c,a,d,b);

	setcolor(2);

	line(250,0,250,500);

	if(((y+50>=a)&&(x>=c&&x<=d))||((t+50>=a)&&(r>=c&&r<=d))){

		sprintf(points,"TOTAL POINTS IS %d",i);

		setcolor(RED);

		outtextxy(350,100,"GAME OVER");

		setcolor(2);

		outtextxy(350,200,points);

		outtextxy(350,300,"PLEASE SELECT YOUR OPTION");

		outtextxy(350,350,"q=quit game r=replay game");

		}

   }

   getch();

   closegraph();

   return 0;

}
