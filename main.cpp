#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
float a=0;
float b=0;
float m=0;
float n=0;
float x=0;
float y=0;
float o=0;

void myInit ()
{
    //glClearColor(0.0, 1.0, 0.0, 0.0);
    //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
    //glColor3f(0.0, 0.2, 0.0);
    glClearColor(128.0f/255.0f,0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // setting window dimension in X- and Y- direction
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}

void circlecar(float x,float y,float rad, float r,float g,float b)
{
    float x1,y1,x2,y2;

    x1=x;
    y1=y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(r,g,b);
    glVertex2f(x1,y1);
    float angle;
    for (angle=0; angle<=360; angle+=0.5)
    {
        x2 = x1+sin((angle*3.1416)/180)*rad;
        y2 = y1+cos((angle*3.1416)/180)*rad;
        glVertex2f(x2,y2);
    }
    glEnd();
}
void circleWheel(float x1,float y1,float rx, float ry)
{
    float x2,y2;
    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0; angle<=360; angle++) //0,90,180,270
    {
        glColor3ub(1,1,1); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }
    glEnd();
}

void circleD(float x1,float y1,float rx, float ry)
{
    float x2,y2;
    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,41,41); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0; angle<=360; angle++) //0,90,180,270
    {
        glColor3ub(255,41,41); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }
    glEnd();
}

void sun(float x1,float y1,float rx, float ry)
{
    float x2,y2;
    //glBegin(GL_POLYGON);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,10,0); //Center Color of Circle
    glVertex2f(x1,y1); //Center Vertex
    int angle;
    for (angle=0; angle<=360; angle++) //0,90,180,270
    {
        glColor3ub(240,215,0); //Edge color of Circle
        x2 = x1+rx*sin((angle*3.1416)/180);  // convert degree to radian
        y2 = y1+ry*cos((angle*3.1416)/180);
        glVertex2f(x2,y2);
    }
    glEnd();
}

void circle(int h, int k, int rx, int ry, float r, float g, float b)
{
    glColor3f(r / 255.0, g / 255.0, b / 255.0);
    glBegin(GL_POLYGON);
    for (int i = 1; i <= 360; i++)
    {
        glVertex2f(h + rx * cos(3.14159 * i / 180), k + ry * sin(3.14159 * i / 180));
    }
    glEnd();
    glFlush();
}


void display()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);   //AKASH
    glColor3ub(255,255,255);
    glVertex2f( 500, 250);
    glVertex2f( 0, 250);

    glColor3ub(101,193,246);
    glVertex2f( 0, 500);
    glVertex2f( 500, 500);
    glEnd();

    glColor3ub (51, 255, 51); //LeftBackground
    glBegin(GL_QUADS);
    glVertex2d (100, 220);
    glVertex2d (100, 100);
    glVertex2d (0, 100);
    glVertex2d (0, 220);
    glEnd();

    glColor3ub (251, 255, 203);  //Ab4Front Road
    glBegin(GL_POLYGON);
    glVertex2d (0, 50);
    glVertex2d (0, 100);
    glVertex2d (75, 230);
    glVertex2d (100, 230);
    glEnd();

    glColor3ub (251, 255, 203); //Ab1Front Road
    glBegin(GL_POLYGON);
    glVertex2d (0, 220);
    glVertex2d (0, 250);
    glVertex2d (500, 250);
    glVertex2d (500, 220);
    glEnd();

    glColor3ub (191, 191, 191); //Mosque
    glBegin(GL_POLYGON);
    glVertex2d (400, 250);
    glVertex2d (460, 250);
    glVertex2d (490, 330);
    glVertex2d (370, 330);
    glEnd();

    glColor3ub (1, 1, 1); //Mosque Inside Upper
    glBegin(GL_POLYGON);
    glVertex2d (405, 310);
    glVertex2d (455, 310);
    glVertex2d (455, 317);
    glVertex2d (405, 317);
    glEnd();

    glColor3ub (88, 9, 9); //Mosque Front1
    glBegin(GL_POLYGON);
    glVertex2d (405, 300);
    glVertex2d (455, 300);
    glVertex2d (455, 250);
    glVertex2d (405, 250);
    glEnd();

    glColor3ub (191, 191, 191); //Mosque Front2
    glBegin(GL_POLYGON);
    glVertex2d (415, 250);
    glVertex2d (445, 250);
    glVertex2d (445, 290);
    glVertex2d (415, 290);
    glEnd();

    glColor3ub (0, 150, 250); //Mosque Front 3 Square
    glBegin(GL_POLYGON);
    glVertex2d (420, 250);
    glVertex2d (440, 250);
    glVertex2d (440, 275);
    glVertex2d (420, 275);
    glEnd();

    glColor3ub (0, 150, 250); //Mosque Front 3 Triangle
    glBegin(GL_POLYGON);
    glVertex2d (440, 275);
    glVertex2d (420, 275);
    glVertex2d (430, 280);
    glEnd();

    glColor3ub (1, 1, 1); //Mosque Upper BarBlack
    glBegin(GL_POLYGON);
    glVertex2d (364, 329);
    glVertex2d (496, 329);
    glVertex2d (496, 341);
    glVertex2d (364, 341);
    glEnd();

    glColor3ub (191, 191, 191); //Mosque Upper Bar Normal
    glBegin(GL_POLYGON);
    glVertex2d (365, 330);
    glVertex2d (495, 330);
    glVertex2d (495, 340);
    glVertex2d (365, 340);
    glEnd();

    sun(a+200,b+300,30,30);

    circlecar(m+100, n+425, 10, 255, 255, 255); //MEGH1
    circlecar(m+110, n+430, 10, 255, 255, 255);
    circlecar(m+90, n+430, 10, 255, 255, 255);
    circlecar(m+100, n+440, 10, 255, 255, 255);

    circlecar(m+180, n+445, 10,  255, 255, 255); //MEGH2
    circlecar(m+190, n+450, 10,  255, 255, 255);
    circlecar(m+170, n+450, 10,  255, 255, 255);
    circlecar(m+180, n+460, 10,  255, 255, 255);

    circlecar(m+260, n+445, 10,  255, 255, 255); //MEGH3
    circlecar(m+270, n+450, 10,  255, 255, 255);
    circlecar(m+250, n+450, 10, 255, 255, 255);
    circlecar(m+260, n+460, 10, 255, 255, 255);

    if(a<150)
    {
        a+=0.5;
        b+=0.5;
    }
    glColor3ub (233, 233, 233); // AB1 Part 1
    glBegin(GL_POLYGON);
    glVertex2d (60, 250);
    glVertex2d (130, 250);
    glVertex2d (130, 400);
    glVertex2d (60, 400);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 6thFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 395);
    glVertex2d (65, 375);
    glVertex2d (85, 375);
    glVertex2d (85, 395);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 6thFloor RightWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 395);
    glVertex2d (100, 375);
    glVertex2d (125, 375);
    glVertex2d (125, 395);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 5thFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 370);
    glVertex2d (65, 350);
    glVertex2d (85, 350);
    glVertex2d (85, 370);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 5thFloor RightWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 370);
    glVertex2d (100, 350);
    glVertex2d (125, 350);
    glVertex2d (125, 370);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 4thFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 345);
    glVertex2d (65, 325);
    glVertex2d (85, 325);
    glVertex2d (85, 345);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 4thFloor RightWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 345);
    glVertex2d (100, 325);
    glVertex2d (125, 325);
    glVertex2d (125, 345);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 3rdFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 320);
    glVertex2d (65, 300);
    glVertex2d (85, 300);
    glVertex2d (85, 320);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 3rdFloor RighttWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 320);
    glVertex2d (100, 300);
    glVertex2d (125, 300);
    glVertex2d (125, 320);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 2ndFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 295);
    glVertex2d (65, 275);
    glVertex2d (85, 275);
    glVertex2d (85, 295);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 2ndFloor RightWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 295);
    glVertex2d (100, 275);
    glVertex2d (125, 275);
    glVertex2d (125, 295);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 1stFloor LeftWindow
    glBegin(GL_POLYGON);
    glVertex2d (65, 270);
    glVertex2d (65, 250);
    glVertex2d (85, 250);
    glVertex2d (85, 270);
    glEnd();

    glColor3ub (188, 56, 56); // AB1 Part1 1stFloor RightWindow
    glBegin(GL_POLYGON);
    glVertex2d (100, 270);
    glVertex2d (100, 250);
    glVertex2d (125, 250);
    glVertex2d (125, 270);
    glEnd();

//-------------------------------------------

    glColor3ub (233, 233, 233); //AB1 Part 2
    glBegin(GL_POLYGON);
    glVertex2d (130, 250);
    glVertex2d (180, 250);
    glVertex2d (180, 390);
    glVertex2d (130, 400);
    glEnd();

    glColor3ub (1, 1, 1); //6th Floor Lines
    glBegin(GL_LINES);
    glVertex2d (130, 375);
    glVertex2d (180, 368);
    glEnd();

    glColor3ub (127, 16, 16); //AB1 Part2 6thFloor 1stWindow
    glBegin(GL_POLYGON);
    glVertex2d (135, 395);
    glVertex2d (135, 380);
    glVertex2d (150, 377);
    glVertex2d (150, 391);
    glEnd();

    glColor3ub (127, 16, 16); //AB1 Part2 6thFloor 2ndWindow
    glBegin(GL_POLYGON);
    glVertex2d (160, 390);
    glVertex2d (160, 377);
    glVertex2d (175, 374);
    glVertex2d (175, 386);
    glEnd();

    glColor3ub (127, 16, 16); //5th Floor Lines
    glBegin(GL_LINES);
    glVertex2d (130, 350);
    glVertex2d (180, 343);
    glEnd();

    glColor3ub (127, 16, 16); //AB1 Part2 5thFloor 1stWindow
    glBegin(GL_POLYGON);
    glVertex2d (135, 370);
    glVertex2d (135, 355);
    glVertex2d (150, 352);
    glVertex2d (150, 366);
    glEnd();

    glColor3ub (127, 16, 16); //AB1 Part2 5hFloor 2ndWindow
    glBegin(GL_POLYGON);
    glVertex2d (160, 365);
    glVertex2d (160, 350);
    glVertex2d (175, 347);
    glVertex2d (175, 361);
    glEnd();

    glColor3ub (180, 56, 56); //AB1 Part2 Another Building
    glBegin(GL_POLYGON);
    glVertex2d (130, 250);
    glVertex2d (130, 345);
    glVertex2d (165, 340);
    glVertex2d (177, 335);
    glVertex2d (177, 250);
    glEnd();

//----------------------------------------------------------------

    glColor3ub (233, 233, 233); //AB1 Part 3
    glBegin(GL_POLYGON);
    glVertex2d (180, 250);
    glVertex2d (266, 250);
    glVertex2d (266, 390);
    glVertex2d (180, 390);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 6thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (185, 385);
    glVertex2d (185, 370);
    glVertex2d (220, 370);
    glVertex2d (220, 385);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 6thFloor Box 2
    glBegin(GL_POLYGON);
    glVertex2d (227, 385);
    glVertex2d (227, 370);
    glVertex2d (262, 370);
    glVertex2d (262, 385);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 5thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (185, 363);
    glVertex2d (185, 348);
    glVertex2d (220, 348);
    glVertex2d (220, 363);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 5thFloor Box 2
    glBegin(GL_POLYGON);
    glVertex2d (227, 363);
    glVertex2d (227, 348);
    glVertex2d (262, 348);
    glVertex2d (262, 363);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 4thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (185, 338);
    glVertex2d (185, 323);
    glVertex2d (220, 323);
    glVertex2d (220, 338);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 4thFloor Box 2
    glBegin(GL_POLYGON);
    glVertex2d (227, 338);
    glVertex2d (227, 323);
    glVertex2d (262, 323);
    glVertex2d (262, 338);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 3rdFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (185, 312);
    glVertex2d (185, 297);
    glVertex2d (220, 297);
    glVertex2d (220, 312);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 3rdFloor Box 2
    glBegin(GL_POLYGON);
    glVertex2d (227, 312);
    glVertex2d (227, 297);
    glVertex2d (262, 297);
    glVertex2d (262, 312);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 2ndFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (185, 286);
    glVertex2d (185, 271);
    glVertex2d (220, 271);
    glVertex2d (220, 286);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 3 2ndFloor Box 2
    glBegin(GL_POLYGON);
    glVertex2d (227, 286);
    glVertex2d (227, 271);
    glVertex2d (262, 271);
    glVertex2d (262, 286);
    glEnd();
//------------------------------------------------------------------------------

    glColor3ub (233, 233, 233); //AB1 Part 4
    glBegin(GL_POLYGON);
    glVertex2d (266, 250);
    glVertex2d (266, 367);
    glVertex2d (293, 367);
    glVertex2d (293, 250);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 4 5thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (269, 363);
    glVertex2d (269, 348);
    glVertex2d (289, 348);
    glVertex2d (289, 363);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 4 4thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (269, 338);
    glVertex2d (269, 323);
    glVertex2d (289, 323);
    glVertex2d (289, 338);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 4 3rdFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (269, 312);
    glVertex2d (269, 297);
    glVertex2d (289, 297);
    glVertex2d (289, 312);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 4 2ndFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (269, 286);
    glVertex2d (269, 271);
    glVertex2d (289, 271);
    glVertex2d (289, 286);
    glEnd();

//--------------------------------------------------------------------------

    glColor3ub (233, 233, 233); //AB1 Part 5
    glBegin(GL_POLYGON);
    glVertex2d (293, 250);
    glVertex2d (293, 343);
    glVertex2d (320, 343);
    glVertex2d (320, 250);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 5 4thFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (296, 338);
    glVertex2d (296, 323);
    glVertex2d (316, 323);
    glVertex2d (316, 338);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 5 3rdFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (296, 312);
    glVertex2d (296, 297);
    glVertex2d (316, 297);
    glVertex2d (316, 312);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 5 2ndFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (296, 286);
    glVertex2d (296, 271);
    glVertex2d (316, 271);
    glVertex2d (316, 286);
    glEnd();

//--------------------------------------------------------------------

    glColor3ub (233, 233, 233); //AB1 Part 6
    glBegin(GL_POLYGON);
    glVertex2d (316, 250);
    glVertex2d (316, 316);
    glVertex2d (348, 316);
    glVertex2d (348, 250);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 6 3rdFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (323, 312);
    glVertex2d (323, 297);
    glVertex2d (343, 297);
    glVertex2d (343, 312);
    glEnd();

    glColor3ub (188, 56, 56); //AB1 Part 6 2ndFloor Box 1
    glBegin(GL_POLYGON);
    glVertex2d (323, 286);
    glVertex2d (323, 271);
    glVertex2d (343, 271);
    glVertex2d (343, 286);
    glEnd();

    glColor3ub (60, 185, 72); //Field
    glBegin(GL_POLYGON);
    glVertex2d (0, 50);
    glVertex2d (0, 0);
    glVertex2d (500, 0);
    glVertex2d (500, 220);
    glVertex2d (93, 220);
    glEnd();

    glColor3ub (255, 255, 255);
    glBegin(GL_LINES);
    glVertex2d (296, 205); //Field Middle Line
    glVertex2d (230, 0);

    glVertex2d (108, 205); //Field  Line Left
    glVertex2d (8, 0);

    glVertex2d (485, 205); //Field Line Upper
    glVertex2d (108, 205);

    glVertex2d (470, 0); //Field Line Right
    glVertex2d (485, 205);

    glVertex2d (49, 110); //Field GoalBar Right LineLeft
    glVertex2d (53, 92);

    glVertex2d (70, 154); //Field GoalBar Right LineRight
    glVertex2d (75, 139);

    glVertex2d (70, 154); //Field GoalBar Right LineUP
    glVertex2d (49, 110);

    glVertex2d (476, 80); //Field GoalBar Right LineLeft
    glVertex2d (483, 97);

    glVertex2d (486, 130); //Field GoalBar Right LineUP
    glVertex2d (483, 97);

    glVertex2d (486, 130); //Field GoalBar Right LineUP
    glVertex2d (477, 110);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 1 Every Tree Distance 30
    glBegin(GL_POLYGON);
    glVertex2d (122, 210);
    glVertex2d (122, 217);
    glVertex2d (124, 217);
    glVertex2d (124, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 1 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (117, 216);
    glVertex2d (123, 225);
    glVertex2d (129, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 1 Upper Leaf
    glVertex2d (117, 220);
    glVertex2d (123, 229);
    glVertex2d (129, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 2
    glBegin(GL_POLYGON);
    glVertex2d (152, 210);
    glVertex2d (152, 217);
    glVertex2d (154, 217);
    glVertex2d (154, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 2 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (147, 216);
    glVertex2d (153, 225);
    glVertex2d (159, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 2 Upper Leaf
    glVertex2d (147, 220);
    glVertex2d (153, 229);
    glVertex2d (159, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 3
    glBegin(GL_POLYGON);
    glVertex2d (182, 210);
    glVertex2d (182, 217);
    glVertex2d (184, 217);
    glVertex2d (184, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 3 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (177, 216);
    glVertex2d (183, 225);
    glVertex2d (189, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 3 Upper Leaf
    glVertex2d (177, 220);
    glVertex2d (183, 229);
    glVertex2d (189, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 4
    glBegin(GL_POLYGON);
    glVertex2d (212, 210);
    glVertex2d (212, 217);
    glVertex2d (214, 217);
    glVertex2d (214, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 4 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (207, 216);
    glVertex2d (213, 225);
    glVertex2d (219, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 4 Upper Leaf
    glVertex2d (207, 220);
    glVertex2d (213, 229);
    glVertex2d (219, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 5
    glBegin(GL_POLYGON);
    glVertex2d (242, 210);
    glVertex2d (242, 217);
    glVertex2d (244, 217);
    glVertex2d (244, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 5 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (237, 216);
    glVertex2d (243, 225);
    glVertex2d (249, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 5 Upper Leaf
    glVertex2d (237, 220);
    glVertex2d (243, 229);
    glVertex2d (249, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 6
    glBegin(GL_POLYGON);
    glVertex2d (272, 210);
    glVertex2d (272, 217);
    glVertex2d (274, 217);
    glVertex2d (274, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 6 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (267, 216);
    glVertex2d (273, 225);
    glVertex2d (279, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 6 Upper Leaf
    glVertex2d (267, 220);
    glVertex2d (273, 229);
    glVertex2d (279, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 7
    glBegin(GL_POLYGON);
    glVertex2d (302, 210);
    glVertex2d (302, 217);
    glVertex2d (304, 217);
    glVertex2d (304, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 7 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (297, 216);
    glVertex2d (303, 225);
    glVertex2d (309, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 7 Upper Leaf
    glVertex2d (297, 220);
    glVertex2d (303, 229);
    glVertex2d (309, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 8
    glBegin(GL_POLYGON);
    glVertex2d (332, 210);
    glVertex2d (332, 217);
    glVertex2d (334, 217);
    glVertex2d (334, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 8 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (327, 216);
    glVertex2d (333, 225);
    glVertex2d (339, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 8 Upper Leaf
    glVertex2d (327, 220);
    glVertex2d (333, 229);
    glVertex2d (339, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 9
    glBegin(GL_POLYGON);
    glVertex2d (362, 210);
    glVertex2d (362, 217);
    glVertex2d (364, 217);
    glVertex2d (364, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 9 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (357, 216);
    glVertex2d (363, 225);
    glVertex2d (369, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 9 Upper Leaf
    glVertex2d (357, 220);
    glVertex2d (363, 229);
    glVertex2d (369, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 10
    glBegin(GL_POLYGON);
    glVertex2d (392, 210);
    glVertex2d (392, 217);
    glVertex2d (394, 217);
    glVertex2d (394, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 10 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (387, 216);
    glVertex2d (393, 225);
    glVertex2d (399, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 10 Upper Leaf
    glVertex2d (387, 220);
    glVertex2d (393, 229);
    glVertex2d (399, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 11
    glBegin(GL_POLYGON);
    glVertex2d (422, 210);
    glVertex2d (422, 217);
    glVertex2d (424, 217);
    glVertex2d (424, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 11 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (417, 216);
    glVertex2d (423, 225);
    glVertex2d (429, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 11 Upper Leaf
    glVertex2d (417, 220);
    glVertex2d (423, 229);
    glVertex2d (429, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 12
    glBegin(GL_POLYGON);
    glVertex2d (452, 210);
    glVertex2d (452, 217);
    glVertex2d (454, 217);
    glVertex2d (454, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 12 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (447, 216);
    glVertex2d (453, 225);
    glVertex2d (459, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 12 Upper Leaf
    glVertex2d (447, 220);
    glVertex2d (453, 229);
    glVertex2d (459, 220);
    glEnd();

    glColor3ub (153, 0, 0); //Tree 13
    glBegin(GL_POLYGON);
    glVertex2d (482, 210);
    glVertex2d (482, 217);
    glVertex2d (484, 217);
    glVertex2d (484, 210);
    glEnd();

    glColor3ub (0, 102, 0); //Tree 13 Lower Leaf
    glBegin(GL_POLYGON);
    glVertex2d (477, 216);
    glVertex2d (483, 225);
    glVertex2d (489, 216);
    glEnd();

    glBegin(GL_POLYGON); // Tree 13 Upper Leaf
    glVertex2d (477, 220);
    glVertex2d (483, 229);
    glVertex2d (489, 220);
    glEnd();




    if(m<250)
    {
        m+=0.3;
    }
    else
    {
        m=-50;
    }



   //Men 1

    glColor3ub (255,160,122); //Hand
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2d (o+264, 260);
    glVertex2d (o+256, 257);
    glEnd();

    glColor3ub (255,160,122);
    glLineWidth(4.0f);
    glBegin(GL_LINES);

    glVertex2d (o+266, 260);
    glVertex2d (o+275, 257);
    glEnd();

    glColor3ub (197, 30, 255); //Body
    glBegin(GL_POLYGON);
    glVertex2d (o+260, 250);
    glVertex2d (o+270, 250);
    glVertex2d (o+266, 265);
    glVertex2d (o+264, 265);

    glEnd();
    circlecar(o+265,267,3,0,0,0); //Head

    glColor3ub (149,149,149); //Leg
    glBegin(GL_POLYGON);
    glVertex2d (o+260, 250);
    glVertex2d (o+265, 250);
    glVertex2d (o+260, 240);
    glEnd();

    glColor3ub (149,149,149);
    glBegin(GL_POLYGON);

    glVertex2d (o+265, 250);
    glVertex2d (o+270, 250);
    glVertex2d (o+268, 240);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (o+263, 240);
    glVertex2d (o+258, 240);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (o+270, 240);
    glVertex2d (o+265, 240);
    glEnd();

    if(o<250)
    {
        o+=0.2;
    }
    else
    {
        o=-250;
    }

   //Men 2

    glColor3ub (255,160,122); //Hand
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2d (34, 160);
    glVertex2d (26, 157);
    glEnd();

    glColor3ub (255,160,122);
    glLineWidth(4.0f);
    glBegin(GL_LINES);

    glVertex2d (36, 160);
    glVertex2d (45, 157);
    glEnd();

    glColor3ub (255, 0, 25); //Body
    glBegin(GL_POLYGON);
    glVertex2d (30, 150);
    glVertex2d (40, 150);
    glVertex2d (36, 165);
    glVertex2d (34, 165);

    glEnd();
    circlecar(35,167,3,0,0,0); //Head

    glColor3ub (149,149,149); //Leg
    glBegin(GL_POLYGON);
    glVertex2d (30, 150);
    glVertex2d (35, 150);
    glVertex2d (30, 140);
    glEnd();

    glColor3ub (149,149,149);
    glBegin(GL_POLYGON);

    glVertex2d (35, 150);
    glVertex2d (40, 150);
    glVertex2d (38, 140);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (33, 140);
    glVertex2d (28, 140);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (40, 140);
    glVertex2d (35, 140);
    glEnd();

    //Men 3

    glColor3ub (255,160,122); //Hand
    glLineWidth(4.0f);
    glBegin(GL_LINES);
    glVertex2d (164, 260);
    glVertex2d (156, 257);
    glEnd();

    glColor3ub (255,160,122);
    glLineWidth(4.0f);
    glBegin(GL_LINES);

    glVertex2d (166, 260);
    glVertex2d (175, 257);
    glEnd();

    glColor3ub (0, 0, 255); //Body
    glBegin(GL_POLYGON);
    glVertex2d (160, 250);
    glVertex2d (170, 250);
    glVertex2d (166, 265);
    glVertex2d (164, 265);

    glEnd();
    circlecar(165,267,3,0,0,0); //Head

    glColor3ub (149,149,149); //Leg
    glBegin(GL_POLYGON);
    glVertex2d (160, 250);
    glVertex2d (165, 250);
    glVertex2d (160, 240);
    glEnd();

    glColor3ub (149,149,149);
    glBegin(GL_POLYGON);

    glVertex2d (165, 250);
    glVertex2d (170, 250);
    glVertex2d (168, 240);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (163, 240);
    glVertex2d (158, 240);
    glEnd();

    glColor3ub (0,0,105);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glVertex2d (170, 240);
    glVertex2d (165, 240);
    glEnd();

    glColor3ub (56, 132, 63);
    glBegin(GL_POLYGON);

    glVertex2d (x+250, 230); //Bus1 Body
    glVertex2d (x+250, 240);
    glVertex2d (x+256, 255);
    glVertex2d (x+310, 255);
    glVertex2d (x+310, 230);
    glEnd();

    glColor3ub (1, 1, 1); //Bus Window Black
    glBegin(GL_POLYGON);
    glVertex2d (x+308, 253);
    glVertex2d (x+308, 243);
    glVertex2d (x+265, 243);
    glVertex2d (x+265, 253);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White1
    glBegin(GL_POLYGON);
    glVertex2d (x+267, 251);
    glVertex2d (x+267, 245);
    glVertex2d (x+275, 245);
    glVertex2d (x+275, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White2
    glBegin(GL_POLYGON);
    glVertex2d (x+277, 251);
    glVertex2d (x+277, 245);
    glVertex2d (x+285, 245);
    glVertex2d (x+285, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White3
    glBegin(GL_POLYGON);
    glVertex2d (x+287, 251);
    glVertex2d (x+287, 245);
    glVertex2d (x+295, 245);
    glVertex2d (x+295, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White4
    glBegin(GL_POLYGON);
    glVertex2d (x+297, 251);
    glVertex2d (x+297, 245);
    glVertex2d (x+305, 245);
    glVertex2d (x+305, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Door
    glBegin(GL_POLYGON);
    glVertex2d (x+258, 247);
    glVertex2d (x+258, 233);
    glVertex2d (x+264, 233);
    glVertex2d (x+264, 247);
    glEnd();

    circleWheel(x+266,227,4,4); //BusWheel1
    circleWheel(x+296,227,4,4); //BusWheel2
    circleD(x+274,237,4,4); //D

    glColor3ub (56, 132, 63); //D body
    glBegin(GL_POLYGON);
    glVertex2d (x+273, 242);
    glVertex2d (x+273, 230);
    glVertex2d (x+264, 230);
    glVertex2d (x+264, 242);
    glEnd();

    glColor3ub (255, 41, 41); //I body
    glBegin(GL_POLYGON);
    glVertex2d (x+280, 241);
    glVertex2d (x+280, 234);
    glVertex2d (x+283, 234);
    glVertex2d (x+283, 241);
    glEnd();

    glColor3ub (255, 41, 41); //U body
    glBegin(GL_POLYGON);
    glVertex2d (x+286, 241);
    glVertex2d (x+286, 234);
    glVertex2d (x+292, 234);
    glVertex2d (x+292, 241);
    glEnd();

    glColor3ub (56, 132, 63); //U body Upper
    glBegin(GL_POLYGON);
    glVertex2d (x+288, 241);
    glVertex2d (x+288, 236);
    glVertex2d (x+290, 236);
    glVertex2d (x+290, 241);
    glEnd();

//-------------------------------------------------------------------

    glColor3ub (56, 132, 63);
    glBegin(GL_POLYGON);

    glVertex2d (x+370, 230); //Bus2 Body
    glVertex2d (x+370, 240);
    glVertex2d (x+376, 255);
    glVertex2d (x+430, 255);
    glVertex2d (x+430, 230);
    glEnd();

    glColor3ub (1, 1, 1); //Bus Window Black
    glBegin(GL_POLYGON);
    glVertex2d (x+428, 253);
    glVertex2d (x+428, 243);
    glVertex2d (x+385, 243);
    glVertex2d (x+385, 253);
    glEnd();

    glColor3ub (x+255, 255, 255); //Bus Window White1
    glBegin(GL_POLYGON);
    glVertex2d (x+387, 251);
    glVertex2d (x+387, 245);
    glVertex2d (x+395, 245);
    glVertex2d (x+395, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White2
    glBegin(GL_POLYGON);
    glVertex2d (x+397, 251);
    glVertex2d (x+397, 245);
    glVertex2d (x+405, 245);
    glVertex2d (x+405, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White3
    glBegin(GL_POLYGON);
    glVertex2d (x+407, 251);
    glVertex2d (x+407, 245);
    glVertex2d (x+415, 245);
    glVertex2d (x+415, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Window White4
    glBegin(GL_POLYGON);
    glVertex2d (x+417, 251);
    glVertex2d (x+417, 245);
    glVertex2d (x+425, 245);
    glVertex2d (x+425, 251);
    glEnd();

    glColor3ub (255, 255, 255); //Bus Door
    glBegin(GL_POLYGON);
    glVertex2d (x+378, 247);
    glVertex2d (x+378, 233);
    glVertex2d (x+384, 233);
    glVertex2d (x+384, 247);
    glEnd();

    circleWheel(x+386,227,4,4); //BusWheel1
    circleWheel(x+416,227,4,4); //BusWheel2
    circleD(x+394,237,4,4); //D

    glColor3ub (56, 132, 63); //D body
    glBegin(GL_POLYGON);
    glVertex2d (x+393, 242);
    glVertex2d (x+393, 230);
    glVertex2d (x+384, 230);
    glVertex2d (x+384, 242);
    glEnd();

    glColor3ub (255, 41, 41); //I body
    glBegin(GL_POLYGON);
    glVertex2d (x+400, 241);
    glVertex2d (x+400, 234);
    glVertex2d (x+403, 234);
    glVertex2d (x+403, 241);
    glEnd();

    glColor3ub (255, 41, 41); //U body
    glBegin(GL_POLYGON);
    glVertex2d (x+406, 241);
    glVertex2d (x+406, 234);
    glVertex2d (x+412, 234);
    glVertex2d (x+412, 241);
    glEnd();

    glColor3ub (56, 132, 63); //U body Upper
    glBegin(GL_POLYGON);
    glVertex2d (x+408, 241);
    glVertex2d (x+408, 236);
    glVertex2d (x+410, 236);
    glVertex2d (x+410, 241);
    glEnd();

    if(x>-430)
    {
        x-=0.7;
    }
    else
    {
        x=250;
    }

    glFlush ();
}
void update(int val)
{
    glutPostRedisplay();
    glutTimerFunc(15, update, 0);
}
int main (int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// giving window size in X- and Y- direction
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 0);
// Giving name to window
    glutCreateWindow("202-15-3825 Rashik Shahriar");
    myInit();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    update(0);
    glutMainLoop();
}
