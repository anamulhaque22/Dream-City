#include <cstdio>
//#include <windows.h>
#include <math.h>
#define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
//#include<MMSystem.h>


void mountainArea(){
    glBegin(GL_POLYGON); // sky
    glColor3ub(152, 219, 248);
    glVertex2f(-1.00f,0.40f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(1.00f,1.00f);
    glVertex2f(-1.00f,1.00f);

    glEnd();
    glBegin(GL_POLYGON); // behind mountain left
    glColor3ub(11, 131, 129);
    glVertex2f(-0.40f,0.55f);
    glVertex2f(-0.30f,0.60f);
    glVertex2f(-0.18f,0.55f);
    glVertex2f(-0.07f,0.57f);
    glVertex2f(0.03f,0.53f);
    glVertex2f(-0.12f,0.37f);
    glEnd();

    glBegin(GL_POLYGON); // behind mountain right
    glColor3ub(11, 131, 129);
    glVertex2f(0.50f,0.53f);
    glVertex2f(0.55f,0.58f);
    glVertex2f(0.68f,0.56f);
    glVertex2f(0.80f,0.60f);
    glVertex2f(0.95f,0.56f);
    glVertex2f(1.00f,0.56f);
    glVertex2f(1.00f,0.35f);
    glVertex2f(0.85f,0.35f);
    glEnd();
}

void greenBackground()
{
	// green ground background main
	glBegin(GL_POLYGON);
	glColor3ub(152, 237, 138);
	glVertex2f(-1.00f, -1.00f);
	glVertex2f(1.00f, -1.00f);
	glVertex2f(1.00f, 0.40f);
	glVertex2f(-1.00f, 0.40f);

	glEnd();
}

//ground road block
void roadBlock()
{

	glBegin(GL_POLYGON); // road back 1
	glColor3ub(88, 92, 90);
	glVertex2f(0.12f, 0.20f);
	glVertex2f(0.00f, 0.20f);
	glVertex2f(-0.74f, -0.80f);
	glVertex2f(-0.49f, -0.81f);
	glEnd();

	glBegin(GL_POLYGON); // road back 2
	glColor3ub(88, 92, 90);
	glVertex2f(-0.74f, -0.80f);
	glVertex2f(-0.49f, -0.81f);
	glVertex2f(-0.40f, -1.00f);
	glVertex2f(-0.72f, -1.00f);
	glEnd();

	glBegin(GL_POLYGON); // road back 1 inside
	glColor3ub(129, 130, 134);
	glVertex2f(0.07f, 0.19f);
	glVertex2f(0.03f, 0.19f);
	glVertex2f(-0.66f, -0.80f);
	glVertex2f(-0.57f, -0.81f);
	glEnd();

	glBegin(GL_POLYGON); // road back 2 inside
	glColor3ub(129, 130, 134);
	glVertex2f(-0.66f, -0.80f);
	glVertex2f(-0.57f, -0.81f);
	glVertex2f(-0.50f, -1.00f);
	glVertex2f(-0.62f, -1.00f);
	glEnd();
}




//Dasplay Function
void display(void)
{
	// clear color and depth buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	greenBackground();
	mountainArea();
	roadBlock();

	glFlush();
}

void windowModel(void)
{
	/* select clearing (background) color */
	glClearColor(0.0, 0.0, 0.0, 0.0);
	/* initialize viewing values */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1, 1, -1, 1, -10.0, 10.0);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Dream City");
	windowModel();
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
