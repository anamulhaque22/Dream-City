#include <cstdio>
//#include <windows.h>
#include <math.h>
#define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
//#include<MMSystem.h>

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

// road block
void roadBlock()
{
	glBegin(GL_POLYGON); // road back 1
	glColor3ub(168, 169, 173);
	glVertex2f(-0.13f, 0.40f);
	glVertex2f(-0.13f, 0.38f);
	glVertex2f(-0.32f, 0.31f);
	glVertex2f(-0.35f, 0.33f);

	glEnd();

	glBegin(GL_POLYGON); // road back 2
	glColor3ub(168, 169, 173);
	glVertex2f(-0.32f, 0.31f);
	glVertex2f(-0.29f, 0.33f);
	glVertex2f(0.12f, 0.20f);
	glVertex2f(0.00f, 0.16f);
	glEnd();

	glBegin(GL_POLYGON); // road back 3
	glColor3ub(168, 169, 173);
	glVertex2f(0.12f, 0.20f);
	glVertex2f(0.00f, 0.20f);
	glVertex2f(-0.74f, -0.80f);
	glVertex2f(-0.49f, -0.81f);
	glEnd();

	glBegin(GL_POLYGON); // road back 4
	glColor3ub(168, 169, 173);
	glVertex2f(-0.74f, -0.80f);
	glVertex2f(-0.49f, -0.81f);
	glVertex2f(-0.40f, -1.00f);
	glVertex2f(-0.72f, -1.00f);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES); // road back 1 inside
	glColor3ub(129, 130, 134);
	glVertex2f(-0.13f, 0.39f);
	glVertex2f(-0.313f, 0.32f);

	glEnd();

	glBegin(GL_POLYGON); // road back 2 inside
	glColor3ub(129, 130, 134);
	glVertex2f(0.08f, 0.19f);
	glVertex2f(0.05f, 0.16f);
	glVertex2f(-0.31f, 0.32f);
	glVertex2f(-0.31f, 0.33f);
	glEnd();

	glBegin(GL_POLYGON); // road back 3 inside
	glColor3ub(129, 130, 134);
	glVertex2f(0.07f, 0.19f);
	glVertex2f(0.03f, 0.19f);
	glVertex2f(-0.66f, -0.80f);
	glVertex2f(-0.57f, -0.81f);
	glEnd();

	glBegin(GL_POLYGON); // road back 4 inside
	glColor3ub(129, 130, 134);
	glVertex2f(-0.66f, -0.80f);
	glVertex2f(-0.57f, -0.81f);
	glVertex2f(-0.50f, -1.00f);
	glVertex2f(-0.62f, -1.00f);
	glEnd();
}

void display(void)
{
	// clear color and depth buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	greenBackground();
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