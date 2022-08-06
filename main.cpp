#include<cstdio>
#include<MMSystem.h>
#include<math.h>
# define PI 3.14259265358979323846
#include <GL/gl.h>
#include <windows.h>
#include <GL/glut.h>

void university()

{
    glBegin(GL_POLYGON);
    glColor3ub(300, 69, 90);
    glVertex2f(-0.82f,-0.08f);
    glVertex2f(-0.74f,-0.20f);
    glVertex2f(-0.36f,-0.20f);
    glVertex2f(-0.44f,-0.08f);

    glEnd();

    glEnd();

    glBegin(GL_POLYGON); //left side
    glColor3ub(233,231,332);

    glVertex2f(-0.75f, -0.10f);
    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.69f, 0.30);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); //left side border
    glColor3ub(211,211,211);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.75f, 0.00f);

    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.75f, 0.11f);
    glEnd();

    glBegin(GL_POLYGON); ;//next to left below section
    glColor3ub(50,205,50);

    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON);//next to left middle section
    glColor3ub(255,221,173);

    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glEnd();

    glBegin(GL_POLYGON); ////next to left top section
    glColor3ub(85,85,85);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glVertex2f(-0.61f, 0.30);
    glVertex2f(-0.69f, 0.30f);

glEnd();

    glBegin(GL_POLYGON); //middle section whole
    glColor3ub(255,166,0);

    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.51f, 0.33);
    glVertex2f(-0.61f, 0.33f);
    glEnd();

    glBegin(GL_POLYGON); //middle section triangle
    glColor3ub(131,133,135);

    glVertex2f(-0.61f, 0.33f);
    glVertex2f(-0.61f, 0.30f);
    glVertex2f(-0.62f, 0.30);
    glEnd();


    glLineWidth(6);
    glBegin(GL_LINES); //next to left side border
    glColor3ub(211,211,211);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.61f, 0.05f);

    glVertex2f(-0.69f, 0.17f);
    glVertex2f(-0.61f, 0.17f);

    glEnd();

    glBegin(GL_POLYGON); ;//right section whole
    glColor3ub(85,85,85);

    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.45f, -0.15f);
    glVertex2f(-0.45f, 0.36);
    glVertex2f(-0.51f, 0.36f);
    glEnd();


    glBegin(GL_POLYGON); ;//right section triangle
    glColor3ub(131,133,135);
    glVertex2f(-0.51f, 0.36);
    glVertex2f(-0.51f, 0.33f);
    glVertex2f(-0.52f, 0.33f);

    glEnd();

    glBegin(GL_POLYGON);////next to left middle section window
    glColor3ub(208,216,209);
    glVertex2f(-0.63f, 0.07);
    glVertex2f(-0.67f, 0.07f);
     glVertex2f(-0.67f, 0.15);
    glVertex2f(-0.63f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);////next to left middle section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, 0.075);
    glVertex2f(-0.665f, 0.075f);
    glVertex2f(-0.665f, 0.145);
    glVertex2f(-0.635f, 0.145f);
    glEnd();

glLineWidth(1);
    glBegin(GL_LINES);////next to left middle section window b
    glColor3ub(168,168,168);





