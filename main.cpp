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