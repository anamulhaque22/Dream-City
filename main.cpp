#include <cstdio>
#include <windows.h>
#include <math.h>
#define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>



GLfloat position2 = 0.0f;
GLfloat speed2 = -0.002f;
void cloud(int value)
{
    if(position2 < -1.00)
        position2 =1.00f;
    position2 += speed2;
    glutPostRedisplay();
    glutTimerFunc(100, cloud, 0);
}

void cloud1()
{
    int i;

    GLfloat x=.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


}

void cloud2()
{

    int i;

    GLfloat x=-.5f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=-.55f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-.45f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=-.52f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=-.6f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}
void cloud3()
{

    int i;

    GLfloat x=0.0f;
    GLfloat y=.86f;
    GLfloat radius =.05f;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat a=.05f;
    GLfloat b=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            a + (radius * cos(i *  twicePi / triangleAmount)),
            b + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat c=-0.05f;
    GLfloat d=.83f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            c + (radius * cos(i *  twicePi / triangleAmount)),
            d + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat e=.02f;
    GLfloat f=.8f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            e + (radius * cos(i *  twicePi / triangleAmount)),
            f+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    GLfloat g=.1f;
    GLfloat h=.82f;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            g + (radius * cos(i *  twicePi / triangleAmount)),
            h+ (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}


void mountainArea(){
    glBegin(GL_POLYGON); // sky
    glColor3ub(152, 219, 248);
    glVertex2f(-1.00f,0.40f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(1.00f,1.00f);
    glVertex2f(-1.00f,1.00f);

    glEnd();
    glBegin(GL_POLYGON); // middle mountain
    glColor3ub(39, 178, 77);
    glVertex2f(-0.15f,0.35f);
    glVertex2f(0.05f,0.58f);
    glVertex2f(0.12f,0.55f);
    glVertex2f(0.29f,0.61f);
    glVertex2f(1.00f,0.35f);
    glVertex2f(0.20f,0.30f);


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

void tunnel()
{
    glBegin(GL_POLYGON); // tunnel
    glColor3ub(16, 16, 16);
    glVertex2f(0.12f,0.20f);
    glVertex2f(0.12f,0.25f);
    glVertex2f(0.04f,0.27f);
    glVertex2f(0.02f,0.23f);


    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(82, 82, 82);
    glVertex2f(0.04f,0.27f);
    glVertex2f(0.03f,0.225f);
     glVertex2f(0.02f,0.23f);


    glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(82, 82, 82);


    glVertex2f(0.12f,0.25f);
    glVertex2f(0.12f,0.20f);
     glVertex2f(0.11f,0.20f);



glEnd();


}
 void river()
 {

     glBegin(GL_POLYGON); // river front

    glColor3ub(56, 180, 232);
    glVertex2f(1.00f,-0.30);
    glVertex2f(0.90f,-0.29f);
    glVertex2f(0.80f,-0.28f);
    glVertex2f(0.70f,-0.38f);
    glVertex2f(0.59f,-0.50f);
    glVertex2f(0.51f,-0.53f);
    glVertex2f(0.46f,-0.67f);
    glVertex2f(0.40f,-0.78f);
    glVertex2f(0.35f,-0.88f);
    glVertex2f(0.26f,-0.84f);
    glVertex2f(0.10f,-1.00f);
    glVertex2f(1.00f,-1.00f);


    glEnd();





 }


void jhaugass1()
{
    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(71, 145, 70);
    glVertex2f(-0.90f,-0.80f);
    glVertex2f(-0.93f,-0.85f);
    glVertex2f(-0.87f,-0.85f);

    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(126, 194, 73);
    glVertex2f(-0.92f,-0.85f);
    glVertex2f(-0.88f,-0.85f);
    glVertex2f(-0.86f,-0.89f);
    glVertex2f(-0.94f,-0.89f);


    glEnd();

    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(70, 146, 74);
    glVertex2f(-0.93f,-0.89f);
    glVertex2f(-0.87f,-0.89f);
    glVertex2f(-0.85f,-0.93f);
    glVertex2f(-0.95f,-0.93f);


    glEnd();



    glBegin(GL_POLYGON); //jhaugass
    glColor3ub(153, 117, 91);
    glVertex2f(-0.91f,-0.93f);
    glVertex2f(-0.89f,-0.93f);
    glVertex2f(-0.89f,-0.97f);
    glVertex2f(-0.91f,-0.97f);


    glEnd();

}


GLfloat position1=.50f;
GLfloat speed1=-.004f;
void boat(int value)
{
    if(position1 < -0.25)
        position1 = 0.60f;
    position1 += speed1;
    glutPostRedisplay();
    glutTimerFunc(100, boat, 0);
}


void boat()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0.50f, -0.95f);
    glVertex2f(0.65f, -0.95f);
    glVertex2f(0.70f, -0.90);
    glVertex2f(0.45f, -0.90f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 0);
    glVertex2f(0.50f, -0.90f);
    glVertex2f(0.65f,-0.90f);
    glVertex2f(0.63f, -0.87f);
    glVertex2f(0.60f, -0.85f);
    glVertex2f(0.55f, -0.85f);
    glVertex2f(0.52f, -0.87f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,25,25);
    glVertex2f(0.52f, -0.82f);
    glVertex2f(0.63f, -0.83f);
    glVertex2f(0.63f, -0.68f);
    glVertex2f(0.52f, -0.67f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(136,204,0);
    glVertex2f(0.57f, -0.85f);
    glVertex2f(0.58f, -0.85f);
    glVertex2f(0.58f, -0.65f);
    glVertex2f(0.57f, -0.65f);
    glEnd();

}



void display(void)
{
     /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */


    glBegin(GL_POLYGON); // green background main
    glColor3ub(166, 210, 131);
    glVertex2f(-1.00f,-1.00f);
    glVertex2f(1.00f,-1.00f);
    glVertex2f(1.00f,0.40f);
    glVertex2f(-1.00f,0.40f);
    glEnd();
	// clear color and depth buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	greenBackground();
	mountainArea();
	roadBlock();
    tunnel();
    river();

    glPushMatrix(); //cloud
    glTranslatef(position2,0.0f, 0.0f);
    cloud1();
    cloud2();
    cloud3();

    glPopMatrix();


    // Jhaugass 1
    glPushMatrix();
    glTranslatef(0.63f, 0.30f, 0.00f);
    glScalef(0.40f, 0.40f, 0.00f);
    jhaugass1();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(0.75f, 0.33f, 0.00f);
    glScalef(0.50f, 0.50f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.81f, 0.29f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(1.03f, 0.35f, 0.00f);
    glScalef(0.50f, 0.50f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.00f, 0.35f, 0.00f);
    glScalef(0.53f, 0.53f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.03f, 0.25f, 0.00f);
    glScalef(0.55f, 0.55f, 0.00f);
    jhaugass1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.06f, 0.28f, 0.00f);
    glScalef(0.53f, 0.53f, 0.00f);
    jhaugass1();

    glPopMatrix();




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
    glutTimerFunc(100, cloud, 0);



	glutMainLoop();
	return 0;
}
