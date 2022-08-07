#include <cstdio>
#include <windows.h>
#include <math.h>
#define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>

float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = 0.0;
static GLfloat spin = 0.0;
float spin_x=1.0;
float spin_y=0.0;
float spin_z=0.0;
int day=1;
bool rain=false;
bool carv=false;
bool planev=false;
bool top=false;
int flag=0;
bool help=false;

void plane()
{
    static float a=-300.0f;
    static float b=0.0f;
    if(a>=1324)
    {
         a=-300.0f;
         b=0.0f;

    }
    else
    {
        a+=0.1f;
        b+=0.005f;
        //glColor3ub(r,g,b);
    }
    //Body
    glColor3ub(66, 66, 66);
    glPushMatrix();
    glTranslatef(a,b,0);
    glBegin(GL_QUADS);
    glVertex3i(30,700,0);
    glVertex3i(100,700,0);
    glVertex3i(100,715,0);
    glVertex3i(35,715,0);
    glEnd();

    //front
    glBegin(GL_TRIANGLES);
    glVertex3i(100,700,0);
    glVertex3i(110,707,0);
    glVertex3i(100,715,0);
    glEnd();

    //fanback
    glBegin(GL_QUADS);
    glVertex3i(37,715,0);
    glVertex3i(57,715,0);
    glVertex3i(40,730,0);
    glVertex3i(20,730,0);
    glEnd();

    //fanFrontUp
    glBegin(GL_QUADS);
    glVertex3i(70,715,0);
    glVertex3i(80,715,0);
    glVertex3i(60,735,0);
    glVertex3i(50,735,0);
    glEnd();

    //FanFrontDown
    glBegin(GL_QUADS);
    glVertex3i(70,700,0);
    glVertex3i(80,700,0);
    glVertex3i(60,680,0);
    glVertex3i(50,680,0);
    glEnd();

    //window
    glColor3ub(255,255,255);
    glBegin(GL_POINTS);
    glVertex3i(95,710,0);
    glVertex3i(90,710,0);
    glVertex3i(85,710,0);
    glVertex3i(80,710,0);
    glVertex3i(75,710,0);
    glVertex3i(70,710,0);
    glVertex3i(65,710,0);
    glVertex3i(60,710,0);
    glVertex3i(55,710,0);
    glEnd();
    glPopMatrix();
    glutPostRedisplay();

}

void planeTwo()
{
     static float a=550.0f;
     static float b=0.0f;
    if(a<=-1300)
    {
         a=550.0f;
         b=0.0f;

    }
    else
    {
        a-=0.2f;
        b-=0.02f;
        //glColor3ub(r,g,b);
    }


    //Body
    glColor3ub(128, 128, 128);
    glPushMatrix();
    glTranslatef(a,b,0);
    glBegin(GL_QUADS);
    glVertex3i(919,650,0);
    glVertex3i(989,650,0);
    glVertex3i(989,665,0);
    glVertex3i(919,665,0);
    glEnd();

    //Front
    glBegin(GL_TRIANGLES);
    glVertex3i(919,650,0);
    glVertex3i(909,657,0);
    glVertex3i(919,665,0);
    glEnd();

    //FanBack
    glBegin(GL_QUADS);
    glVertex3i(987,665,0);
    glVertex3i(1010,680,0);
    glVertex3i(990,680,0);
    glVertex3i(967,665,0);
    glEnd();

    //FanFrontUp
    glBegin(GL_QUADS);
    glVertex3i(949,665,0);
    glVertex3i(959,665,0);
    glVertex3i(979,685,0);
    glVertex3i(969,685,0);
    glEnd();

    //FanFrontDown
    glBegin(GL_QUADS);
    glVertex3i(949,650,0);
    glVertex3i(969,630,0);
    glVertex3i(979,630,0);
    glVertex3i(959,650,0);
    glEnd();

    int x=924;
    //Window
    glColor3ub(255,255,255);
    glBegin(GL_POINTS);
    for(int i=9;i>=0;i--)
    {
        glVertex3i(x,660,0);
        x+=5;
    }
    glEnd();
    glPopMatrix();
    glutPostRedisplay();

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

void keyboard(unsigned char key, int x, int y)
{
//-------- spin --------

if(key=='p')
{
    planev=true;
}

else if(key==27)
{
    exit(0);
}
}


void SpecialKeys(int key, int x, int y)
{
    switch (key)
	{
		case GLUT_KEY_LEFT:
            if(translate_x<200)
            {
                translate_x+=5;
                glutPostRedisplay();
            }
			break;

		case GLUT_KEY_RIGHT:
            if(translate_x>-300)
            {
                translate_x-=5;
                glutPostRedisplay();
            }
			break;

        case GLUT_KEY_UP:
            spin-=5;
            if(spin>=360)
            {
                spin=0;
            }
            glutPostRedisplay();
			break;

        case GLUT_KEY_DOWN:
            spin+=5;
            if(spin<=360)
            {
                spin=0;
            }
            glutPostRedisplay();
			break;
	}
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
    if(planev)
    {
        plane();
        planeTwo();
    }
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
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(SpecialKeys);

	glutMainLoop();
	return 0;
}
