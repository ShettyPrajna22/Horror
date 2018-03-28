#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
double angle=(30*3.14/180);
void fractal(int l,double a,int x,int y)
{
if(l!=0)
{
 double a1=a+angle;
 double a2=a-angle;
 int x1=x+(l*cos(a1));
 int y1=y-(l*sin(a1));
 line(x,y,x1,y1);
 fractal(l/2,a1,x1,y1);
 x1=x+(l*cos(a2));
 y1=y-(l*sin(a));
 line(x,y,x1,y1);
 fractal(l/2,a2,x1,y1);
 a1+=angle;
 a2-=angle;
}
}
void main()
{
 int i,j,x,xnew;
 int gd =DETECT, gm;
initgraph (&gd,&gm,"...//TC//BGI");
// initgraph (&gd,&gm,"c:\\TURBOC3\\bgi");

  for(i=0;i<110;i+=2)
{
delay(75);
cleardevice();
//line(100,350,500,300);
line(0,470,1700,180);

  setcolor(GREEN);
  line(580,319,578,420);
 fractal(40,90*3.14/180,550,405);
fractal(40,90*3.14/180,520,406);
fractal(40,90*3.14/180,490,408);
fractal(40,90*3.14/180,460,410);
fractal(40,90*3.14/180,430,411);
fractal(40,90*3.14/180,400,413);
fractal(40,90*3.14/180,370,420);
fractal(40,90*3.14/180,340,425);
fractal(40,90*3.14/180,310,425);
 fractal(40,90*3.14/180,280,430);
fractal(40,90*3.14/180,250,430);
fractal(40,90*3.14/180,225,432);
fractal(40,90*3.14/180,210,435);
fractal(40,90*3.14/180,190,440);
fractal(40,90*3.14/180,250,445);
 fractal(40,90*3.14/180,160,450);
fractal(40,90*3.14/180,120,455);
fractal(40,90*3.14/180,100,458);
fractal(40,90*3.14/180,80,460);

line(600,400,600,150);
line(605,400,605,150);
line(609,405,609,200);
line(615,405,609,170);
line(620,405,609,250);
fractal(120,90*3.14/180,600,150);
fractal(120,90*3.14/180,609,200);
fractal(120,90*3.14/180,605,170);
fractal(40,90*3.14/180,600,200);
fractal(40,90*3.14/180,605,180);
fractal(40,90*3.14/180,609,150);
fractal(40,90*3.14/180,609,200);
setcolor(YELLOW);
fractal(40,90*3.14/180,600,100);
fractal(40,90*3.14/180,610,120);


    setcolor(WHITE);
    circle(450,50,25);
    ellipse(110,91,360,0,17,19);
ellipse(110,86,10,170,25,22);
//line(93,105,127,91);
rectangle(93,96,127,130);
line(135,84,132,200);//hair
line(123,105,132,200);
line(85,84,81,175);
line(97,105,91,175);

arc(110,90,252,290,47);
line(85,128,76,134);//lsleeves
line(76,134,54,230);
line(76,170,100,180);
line(54,230,100,180);
line(135,128,146,134);//rsleeves
line(146,134,155,230);
line(143,170,117,176);
line(117,176,155,230);
line(117,215,117,170); //candle
line(102,215,102,170);
line(117,215,102,215);
line(117,170,102,170);
ellipse(110,164,90,270,4,6);
ellipse(110,164,270,90,4,6);

line(81,200,40,300); //dress
line(132,200,165,303);
//line(40,300,165,300);
arc(106,243,218,318,85);
setfillstyle(SOLID_FILL,BLUE);
floodfill(95,175,WHITE);
floodfill(77,134,WHITE);
floodfill(133,177,WHITE);
floodfill(136,135,WHITE);

 line(117,360,117,315); //candle 1
line(102,360,102,315);
line(117,360,102,360);
line(117,315,102,315);
ellipse(110,309,90,270,4,6);
ellipse(110,309,270,90,4,6);
 line(147,345,147,300); //candle 2
line(132,345,132,300);
line(147,345,132,345);
line(147,300,132,300);
ellipse(140,294,90,270,4,6);
ellipse(140,294,270,90,4,6);
 line(177,320,177,275); //candle 3
line(162,320,162,275);
line(177,320,162,320);
line(177,275,162,275);
ellipse(170,269,90,270,4,6);
ellipse(170,269,270,90,4,6);
 line(80,345,80,300); //candle 4
line(65,345,65,300);
line(80,345,65,345);
line(80,300,65,300);
ellipse(73,294,90,270,4,6);
ellipse(73,294,270,90,4,6);
 line(60,320,60,275); //candle 5
line(45,320,45,275);
line(60,320,45,320);
line(60,275,45,275);
ellipse(53,269,90,270,4,6);
ellipse(53,269,270,90,4,6);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(110,180,WHITE);
floodfill(110,318,WHITE);
floodfill(110,357,WHITE);
floodfill(145,303,WHITE);
floodfill(145,340,WHITE);
floodfill(164,278,WHITE);
floodfill(66,302,WHITE);
floodfill(66,344,WHITE);
floodfill(46,276,WHITE);
floodfill(46,319,WHITE);
floodfill(145,340,WHITE);
 setfillstyle(SOLID_FILL, RED);
 //ooooooooooooooooooooooooooooooooooooooooooooooooooo
  setfillstyle(SOLID_FILL,RED);
floodfill(110,308,WHITE);
floodfill(140,293,WHITE);
floodfill(170,268,WHITE);
//floodfill(73,283,WHITE);
floodfill(170,268,WHITE);
 // sound(70);
  // delay(100);
//oooooooooooooooooooooooooooooooooooooooooooooooooooo
 setfillstyle(SOLID_FILL, YELLOW);
 line(475-i,100+i-17,550-i,75+i-17);//1
 line(550-i,75+i-17,600-i,100+i-17);//2
 line(600-i,100+i-17,525-i,125+i-17);//3
 line(525-i,125+i-17,475-i,100+i-17); //4
 floodfill(500-i, 100+i-17, WHITE);
 line(475-i,100+i-17,445-i,140+i-17);//5
 line(445-i,140+i-17,505-i,175+i-17);//6
 line(505-i,175+i-17,525-i,125+i-17);//7
 line(395-i,175+i-17,445-i,140+i-17);//8
 line(395-i,175+i-17,440-i,210+i-17);//9
 line(505-i,175+i-17,440-i,210+i-17);//10
 floodfill(440-i, 200+i-17, WHITE);
 line(395-i,195+i-17,395-i,175+i-17);//11
 line(440-i,230+i-17,395-i,195+i-17);//12
 line(440-i,210+i-17,440-i,230+i-17);//13
 //side
 line(440-i,230+i-17,497-i,210+i-17);//14
 setfillstyle(SOLID_FILL, 8);
 ellipse(515-i,210+i-17,0,360,16,20);//15
 floodfill(515-i, 210+i, WHITE);
 line(530-i,200+i-17,582-i,181+i-17);//16
 ellipse(600-i,185+i-17,0,360,16,20);//17
 floodfill(600-i, 185+i, WHITE);
 line(600-i,100+i-17,620-i,135+i-17);//18
 line(620-i,135+i-17,660-i,120+i-17);//19
 line(660-i,120+i-17,660-i,152+i-17);//20
 line(660-i,152+i-17,612-i,170+i-17);//21
 line(660-i,120+i-17,613-i,85+i-17);//22
 line(613-i,85+i-17,585-i,94+i-17);//23
//  setfillstyle(SOLID_FILL, RED);
// floodfill(630-i, 100+i, WHITE);
//setcolor(RED);
 line(530-i,200+i-17,578-i,154+i-17);
 line(578-i,154+i-17,565-i,180+i-17);
 line(565-i,180+i-17,580-i,169+i-17);
 line(573-i,185+i-17,580-i,169+i-17);
 setfillstyle(SOLID_FILL, RED);
 floodfill(565-i,181+i-17,WHITE);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(630-i, 100+i, WHITE);
 //setcolor(WHITE);
// line(200,200,1500,50);

 //fractal*************************************************************




















 }
 nosound();
j=i;
//rotate ghosts hand
for(i=0;i<30;i+=2)
{
delay(50);
cleardevice();

line(0,470,1700,180);

  setcolor(GREEN);
  line(580,319,578,420);
 fractal(40,90*3.14/180,550,405);
fractal(40,90*3.14/180,520,406);
fractal(40,90*3.14/180,490,408);
fractal(40,90*3.14/180,460,410);
fractal(40,90*3.14/180,430,411);
fractal(40,90*3.14/180,400,413);
fractal(40,90*3.14/180,370,420);
fractal(40,90*3.14/180,340,425);
fractal(40,90*3.14/180,310,425);
 fractal(40,90*3.14/180,280,430);
fractal(40,90*3.14/180,250,430);
fractal(40,90*3.14/180,225,432);
fractal(40,90*3.14/180,210,435);
fractal(40,90*3.14/180,190,440);
fractal(40,90*3.14/180,250,445);
 fractal(40,90*3.14/180,160,450);
fractal(40,90*3.14/180,120,455);
fractal(40,90*3.14/180,100,458);
fractal(40,90*3.14/180,80,460);

line(600,400,600,150);
line(605,400,605,150);
line(609,405,609,200);
line(615,405,609,170);
line(620,405,609,250);
fractal(120,90*3.14/180,600,150);
fractal(120,90*3.14/180,609,200);
fractal(120,90*3.14/180,605,170);
fractal(40,90*3.14/180,600,200);
fractal(40,90*3.14/180,605,180);
fractal(40,90*3.14/180,609,150);
fractal(40,90*3.14/180,609,200);
setcolor(YELLOW);
fractal(40,90*3.14/180,600,100);
fractal(40,90*3.14/180,610,120);


    setcolor(WHITE);
    circle(450,50,25);

ellipse(110,91,360,0,17,19);
ellipse(110,86,10,170,25,22);
//line(93,105,127,91);
rectangle(93,96,127,130);
//setcolor(RED);
line(135,84,139,175);//hair
//setcolor(YELLOW);
line(123,105,130,175);
line(139,175,130,175);
//setcolor(BLUE);
line(85,84,81,175);
//setcolor(WHITE);
line(97,105,91,175);
//setcolor(BLUE);
arc(110,90,252,290,47);
line(85,128,76,134);//lsleeves
line(76,134,54,230);
line(76,170,100,180);
line(54,230,100,180);
setcolor(WHITE);
line(135,128,146,134);//rsleeves
//setcolor(RED);
line(146,134,155+i,230-i);
//setcolor(YELLOW);
line(117+i,176+i,155+i,230-i);
//setcolor(GREEN);
line(143,170,117+i,176+i);
//setcolor(BLUE);
line(143,170,132,175);
line(81,200,40,300); //dress
line(132,175,165,303);
//line(40,300,165,300);
arc(106,243,218,318,85);

setcolor(WHITE);
line(117,215,117,170); //candle
line(102,215,102,170);
line(117,215,102,215);
line(117,170,102,170);
ellipse(110,164,90,270,4,6);
ellipse(110,164,270,90,4,6);

 line(117,360,117,315); //candle 1
line(102,360,102,315);
line(117,360,102,360);
line(117,315,102,315);
ellipse(110,309,90,270,4,6);
ellipse(110,309,270,90,4,6);
 line(147,345,147,300); //candle 2
line(132,345,132,300);
line(147,345,132,345);
line(147,300,132,300);
ellipse(140,294,90,270,4,6);
ellipse(140,294,270,90,4,6);
 line(177,320,177,275); //candle 3
line(162,320,162,275);
line(177,320,162,320);
line(177,275,162,275);
ellipse(170,269,90,270,4,6);
ellipse(170,269,270,90,4,6);
 line(80,345,80,300); //candle 4
line(65,345,65,300);
line(80,345,65,345);
line(80,300,65,300);
ellipse(73,294,90,270,4,6);
ellipse(73,294,270,90,4,6);
 line(60,320,60,275); //candle 5
line(45,320,45,275);
line(60,320,45,320);
line(60,275,45,275);
ellipse(53,269,90,270,4,6);
ellipse(53,269,270,90,4,6);

setfillstyle(SOLID_FILL,BLUE);
floodfill(95,175,WHITE);
floodfill(77,134,WHITE);
floodfill(133,177,WHITE);
floodfill(146,138,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(110,180,WHITE);
floodfill(110,318,WHITE);
floodfill(110,357,WHITE);
floodfill(145,303,WHITE);
floodfill(145,340,WHITE);
floodfill(164,278,WHITE);
floodfill(66,302,WHITE);
floodfill(66,344,WHITE);
floodfill(46,276,WHITE);
floodfill(46,319,WHITE);
floodfill(145,340,WHITE);
 setfillstyle(SOLID_FILL, RED);
 //ooooooooooooooooooooooooooooooooooooooooooooooooooo
  setfillstyle(SOLID_FILL,RED);
floodfill(110,308,WHITE);
floodfill(140,293,WHITE);
floodfill(170,268,WHITE);
//floodfill(73,283,WHITE);
floodfill(170,268,WHITE);


//oooooooooooooooooooooooooooooooooooooooooooooooooooo
 setfillstyle(SOLID_FILL, YELLOW);
 line(475-j,100+j-17,550-j,75+j-17);//1
 line(550-j,75+j-17,600-j,100+j-17);//2
 line(600-j,100+j-17,525-j,125+j-17);//3
 line(525-j,125+j-17,475-j,100+j-17); //4
 floodfill(500-j, 100+j-17, WHITE);
 line(475-j,100+j-17,445-j,140+j-17);//5
 line(445-j,140+j-17,505-j,175+j-17);//6
 line(505-j,175+j-17,525-j,125+j-17);//7
 line(395-j,175+j-17,445-j,140+j-17);//8
 line(395-j,175+j-17,440-j,210+j-17);//9
 line(505-j,175+j-17,440-j,210+j-17);//10
 floodfill(440-j, 200+j-17, WHITE);
 line(395-j,195+j-17,395-j,175+j-17);//11
 line(440-j,230+j-17,395-j,195+j-17);//12
 line(440-j,210+j-17,440-j,230+j-17);//13
 //side
 line(440-j,230+j-17,497-j,210+j-17);//14
 setfillstyle(SOLID_FILL, 8);
 ellipse(515-j,210+j-17,0,360,16,20);//15
 floodfill(515-j, 210+j, WHITE);
 line(530-j,200+j-17,582-j,181+j-17);//16
 ellipse(600-j,185+j-17,0,360,16,20);//17
 floodfill(600-j, 185+j, WHITE);
 line(600-j,100+j-17,620-j,135+j-17);//18
 line(620-j,135+j-17,660-j,120+j-17);//19
 line(660-j,120+j-17,660-j,152+j-17);//20
 line(660-j,152+j-17,612-j,170+j-17);//21
 line(660-j,120+j-17,613-j,85+j-17);//22
 line(613-j,85+j-17,585-j,94+j-17);//23
//  setfillstyle(SOLID_FILL, RED);
// floodfill(630-j, 100+j, WHITE);
//setcolor(RED);
 line(530-j,200+j-17,578-j,154+j-17);
 line(578-j,154+j-17,565-j,180+j-17);
 line(565-j,180+j-17,580-j,169+j-17);
 line(573-j,185+j-17,580-j,169+j-17);
 setfillstyle(SOLID_FILL, RED);
 floodfill(565-j,181+j-17,WHITE);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(630-j, 100+j, WHITE);

}
for(i=0;i<30;i+=2)
{
delay(70);
cleardevice();

line(0,470,1700,180);

  setcolor(GREEN);
  line(580,319,578,420);
 fractal(40,90*3.14/180,550,405);
fractal(40,90*3.14/180,520,406);
fractal(40,90*3.14/180,490,408);
fractal(40,90*3.14/180,460,410);
fractal(40,90*3.14/180,430,411);
fractal(40,90*3.14/180,400,413);
fractal(40,90*3.14/180,370,420);
fractal(40,90*3.14/180,340,425);
fractal(40,90*3.14/180,310,425);
 fractal(40,90*3.14/180,280,430);
fractal(40,90*3.14/180,250,430);
fractal(40,90*3.14/180,225,432);
fractal(40,90*3.14/180,210,435);
fractal(40,90*3.14/180,190,440);
fractal(40,90*3.14/180,250,445);
 fractal(40,90*3.14/180,160,450);
fractal(40,90*3.14/180,120,455);
fractal(40,90*3.14/180,100,458);
fractal(40,90*3.14/180,80,460);

line(600,400,600,150);
line(605,400,605,150);
line(609,405,609,200);
line(615,405,609,170);
line(620,405,609,250);
fractal(120,90*3.14/180,600,150);
fractal(120,90*3.14/180,609,200);
fractal(120,90*3.14/180,605,170);
fractal(40,90*3.14/180,600,200);
fractal(40,90*3.14/180,605,180);
fractal(40,90*3.14/180,609,150);
fractal(40,90*3.14/180,609,200);
setcolor(YELLOW);
fractal(40,90*3.14/180,600,100);
fractal(40,90*3.14/180,610,120);


    setcolor(WHITE);
    circle(450,50,25);


ellipse(110,91,360,0,17,19);
ellipse(110,86,10,170,25,22);
//line(93,105,127,91);
rectangle(93,96,127,130);
line(135,84,139,175);//hair
line(123,105,130,175);
line(139,175,130,175);
line(85,84,81,175);
line(97,105,91,175);
//setcolor(BLUE);
arc(110,90,252,290,47);
line(85,128,76,134);//lsleeves
line(76,134,54,230);
line(76,170,100,180);
line(54,230,100,180);
setcolor(WHITE);
line(135,128,146,134);//rsleeves
//setcolor(RED);
line(146,134,155+30+i+10,230-30-i-5);
//setcolor(YELLOW);
line(117+30+i+30,176+30-i-5,155+30+i+10,230-30-i-5);
//setcolor(GREEN);
line(143+i+5,170+i-5,117+30+i+30,176+30-i-5);
//setcolor(BLUE);
line(143+i+5,170-5+i,132,175);
line(81,200,40,300); //dress
line(132,175,165,303);
//line(40,300,165,300);
arc(106,243,218,318,85);

setcolor(WHITE);
line(117,215,117,170); //candle
line(102,215,102,170);
line(117,215,102,215);
line(117,170,102,170);
ellipse(110,164,90,270,4,6);
ellipse(110,164,270,90,4,6);

 line(117,360,117,315); //candle 1
line(102,360,102,315);
line(117,360,102,360);
line(117,315,102,315);
ellipse(110,309,90,270,4,6);
ellipse(110,309,270,90,4,6);
 line(147,345,147,300); //candle 2
line(132,345,132,300);
line(147,345,132,345);
line(147,300,132,300);
ellipse(140,294,90,270,4,6);
ellipse(140,294,270,90,4,6);
 line(177,320,177,275); //candle 3
line(162,320,162,275);
line(177,320,162,320);
line(177,275,162,275);
ellipse(170,269,90,270,4,6);
ellipse(170,269,270,90,4,6);
 line(80,345,80,300); //candle 4
line(65,345,65,300);
line(80,345,65,345);
line(80,300,65,300);
ellipse(73,294,90,270,4,6);
ellipse(73,294,270,90,4,6);
 line(60,320,60,275); //candle 5
line(45,320,45,275);
line(60,320,45,320);
line(60,275,45,275);
ellipse(53,269,90,270,4,6);
ellipse(53,269,270,90,4,6);
setfillstyle(SOLID_FILL,BLUE);
floodfill(95,175,WHITE);
floodfill(77,134,WHITE);
floodfill(133,177,WHITE);
floodfill(146,138,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(110,180,WHITE);
floodfill(110,318,WHITE);
floodfill(110,357,WHITE);
floodfill(145,303,WHITE);
floodfill(145,340,WHITE);
floodfill(164,278,WHITE);
floodfill(66,302,WHITE);
floodfill(66,344,WHITE);
floodfill(46,276,WHITE);
floodfill(46,319,WHITE);
floodfill(145,340,WHITE);
 setfillstyle(SOLID_FILL, RED);
 //ooooooooooooooooooooooooooooooooooooooooooooooooooo
  setfillstyle(SOLID_FILL,RED);
floodfill(110,308,WHITE);
floodfill(140,293,WHITE);
floodfill(170,268,WHITE);
//floodfill(73,283,WHITE);
floodfill(170,268,WHITE);

//oooooooooooooooooooooooooooooooooooooooooooooooooooo
 setfillstyle(SOLID_FILL, YELLOW);
 line(475-j,100+j-17,550-j,75+j-17);//1
 line(550-j,75+j-17,600-j,100+j-17);//2
 line(600-j,100+j-17,525-j,125+j-17);//3
 line(525-j,125+j-17,475-j,100+j-17); //4
 floodfill(500-j, 100+j-17, WHITE);
 line(475-j,100+j-17,445-j,140+j-17);//5
 line(445-j,140+j-17,505-j,175+j-17);//6
 line(505-j,175+j-17,525-j,125+j-17);//7
 line(395-j,175+j-17,445-j,140+j-17);//8
 line(395-j,175+j-17,440-j,210+j-17);//9
 line(505-j,175+j-17,440-j,210+j-17);//10
 floodfill(440-j, 200+j-17, WHITE);
 line(395-j,195+j-17,395-j,175+j-17);//11
 line(440-j,230+j-17,395-j,195+j-17);//12
 line(440-j,210+j-17,440-j,230+j-17);//13
 //side
 line(440-j,230+j-17,497-j,210+j-17);//14
 setfillstyle(SOLID_FILL, 8);
 ellipse(515-j,210+j-17,0,360,16,20);//15
 floodfill(515-j, 210+j, WHITE);
 line(530-j,200+j-17,582-j,181+j-17);//16
 ellipse(600-j,185+j-17,0,360,16,20);//17
 floodfill(600-j, 185+j, WHITE);
 line(600-j,100+j-17,620-j,135+j-17);//18
 line(620-j,135+j-17,660-j,120+j-17);//19
 line(660-j,120+j-17,660-j,152+j-17);//20
 line(660-j,152+j-17,612-j,170+j-17);//21
 line(660-j,120+j-17,613-j,85+j-17);//22
 line(613-j,85+j-17,585-j,94+j-17);//23
//  setfillstyle(SOLID_FILL, RED);
// floodfill(630-j, 100+j, WHITE);
//setcolor(RED);
 line(530-j,200+j-17,578-j,154+j-17);
 line(578-j,154+j-17,565-j,180+j-17);
 line(565-j,180+j-17,580-j,169+j-17);
 line(573-j,185+j-17,580-j,169+j-17);
 setfillstyle(SOLID_FILL, RED);
 floodfill(565-j,181+j-17,WHITE);
 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(630-j, 100+j, WHITE);

}

//fire
 for(i=0;i<20;i++)
 {
 delay(65);
// cleardevice();
 setcolor(YELLOW);
 arc(250+i+10,205,135,25,10+i);
 //setcolor(RED);
 x=250+i+10+10+i;
 xnew=250+i+10-10-i+2 ;
 line(xnew,200,250+i+10,180-i);
// setcolor(WHITE);
 line(250+i+10,180-i,x,200);

 setfillstyle(SOLID_FILL, YELLOW);
 floodfill(260+i,205, YELLOW);

}
 getch();
 closegraph();

}
