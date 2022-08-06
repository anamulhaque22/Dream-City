#include <cstdio>
//#include <windows.h>
#include <math.h>
#define PI 3.14259265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
//#include<MMSystem.h>
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



    glBegin(GL_POLYGON); // river back 3
    glColor3ub(56, 180, 232);
    glVertex2f(0.27f,0.25f);
    glVertex2f(0.15f,0.05f);
    glVertex2f(0.11f,0.05f);
    glVertex2f(0.24f,0.24f);



    glEnd();


 }
void mountainArea()
{
    glBegin(GL_POLYGON); // sky
    glColor3ub(152, 219, 248);
    glVertex2f(-1.00f, 0.40f);
    glVertex2f(1.00f, 0.40f);
    glVertex2f(1.00f, 1.00f);
    glVertex2f(-1.00f, 1.00f);

    glEnd();
    glBegin(GL_POLYGON); // behind mountain left
    glColor3ub(11, 131, 129);
    glVertex2f(-0.40f, 0.55f);
    glVertex2f(-0.30f, 0.60f);
    glVertex2f(-0.18f, 0.55f);
    glVertex2f(-0.07f, 0.57f);
    glVertex2f(0.03f, 0.53f);
    glVertex2f(-0.12f, 0.37f);
    glEnd();

    glBegin(GL_POLYGON); // behind mountain right
    glColor3ub(11, 131, 129);
    glVertex2f(0.50f, 0.53f);
    glVertex2f(0.55f, 0.58f);
    glVertex2f(0.68f, 0.56f);
    glVertex2f(0.80f, 0.60f);
    glVertex2f(0.95f, 0.56f);
    glVertex2f(1.00f, 0.56f);
    glVertex2f(1.00f, 0.35f);
    glVertex2f(0.85f, 0.35f);
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

// ground road block
void roadBlock()
{

    glBegin(GL_POLYGON); // road back 1
    glColor3ub(88, 92, 90);
    glVertex2f(0.12f, 0.20f);
    glVertex2f(0.02f, 0.23f);
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

void university()

{
    glBegin(GL_POLYGON); // university road
    glColor3ub(88, 92, 90);
    glVertex2f(-0.60f, -0.15f);
    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.45f, -0.49f);
    glVertex2f(-0.55f, -0.60f);
    glEnd();

    glLineWidth(2); // university road lines
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.56f, -0.15f);
    glVertex2f(-0.50f, -0.50f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(200, 100, 600);
    glVertex2f(-0.82f,-0.08f);
    glVertex2f(-0.74f,-0.20f);
    glVertex2f(-0.36f,-0.20f);
    glVertex2f(-0.44f,-0.08f);

    glEnd();

    glBegin(GL_POLYGON);       ////left side
    glColor3ub(300,200,100);
    glVertex2f(-0.75f, -0.10f);
    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.69f, 0.30);
    glVertex2f(-0.75f, 0.20f);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);        ////left side border
    glColor3ub(300,100, 200);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.75f, 0.00f);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.75f, 0.11f);
    glEnd();

    glBegin(GL_POLYGON); ;   ////next to left below section
    glColor3ub(120,225,90);
    glVertex2f(-0.69f, -0.15f);
    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON);     ////next to left middle section
    glColor3ub(225,201,473);

    glVertex2f(-0.61f, 0.05);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glEnd();

    glBegin(GL_POLYGON);   ////next to left top section
    glColor3ub(85,85,85);
    glVertex2f(-0.69f, 0.17);
    glVertex2f(-0.61f, 0.17f);
    glVertex2f(-0.61f, 0.30);
    glVertex2f(-0.69f, 0.30f);

glEnd();

    glBegin(GL_POLYGON);   ////middle section whole
    glColor3ub(105,226,0);
    glVertex2f(-0.61f, -0.15f);
    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.51f, 0.33);
    glVertex2f(-0.61f, 0.33f);
    glEnd();

    glBegin(GL_POLYGON);   ////middle section triangle
    glColor3ub(131,133,135);

    glVertex2f(-0.61f, 0.33f);
    glVertex2f(-0.61f, 0.30f);
    glVertex2f(-0.62f, 0.30);
    glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);       ////next to left side border
    glColor3ub(331,111,511);
    glVertex2f(-0.69f, 0.05f);
    glVertex2f(-0.61f, 0.05f);
    glVertex2f(-0.69f, 0.17f);
    glVertex2f(-0.61f, 0.17f);

    glEnd();

    glBegin(GL_POLYGON); ;  ////right section whole
    glColor3ub(185,185,195);
    glVertex2f(-0.51f, -0.15f);
    glVertex2f(-0.45f, -0.15f);
    glVertex2f(-0.45f, 0.36);
    glVertex2f(-0.51f, 0.36f);
    glEnd();


    glBegin(GL_POLYGON); ;  ////right section triangle
    glColor3ub(131,133,135);
    glVertex2f(-0.51f, 0.36);
    glVertex2f(-0.51f, 0.33f);
    glVertex2f(-0.52f, 0.33f);

    glEnd();

    glBegin(GL_POLYGON);    ////next to left middle section window
    glColor3ub(208,216,209);
    glVertex2f(-0.63f, 0.07);
    glVertex2f(-0.67f, 0.07f);
     glVertex2f(-0.67f, 0.15);
    glVertex2f(-0.63f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);   ////next to left middle section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, 0.075);
    glVertex2f(-0.665f, 0.075f);
    glVertex2f(-0.665f, 0.145);
    glVertex2f(-0.635f, 0.145f);
    glEnd();

glLineWidth(1);
    glBegin(GL_LINES);      ////next to left middle section window b
    glColor3ub(168,168,168);

glVertex2f(-0.649f, 0.075);
    glVertex2f(-0.649f, 0.145f);
    glEnd();

    glBegin(GL_POLYGON);    ////next to left top section window
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, 0.20);
    glVertex2f(-0.67f, 0.20f);
    glVertex2f(-0.67f, 0.28);
    glVertex2f(-0.63f, 0.28f);
    glEnd();

glBegin(GL_POLYGON);       ////next to top middle section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, 0.205);
    glVertex2f(-0.665f, 0.205f);
    glVertex2f(-0.665f, 0.275);
    glVertex2f(-0.635f, 0.275f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);    ////next to left top section window b
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, 0.205);
    glVertex2f(-0.649f, 0.275f);
    glEnd();

    glBegin(GL_POLYGON);   ////next to left below section window
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, -0.05);
    glVertex2f(-0.67f, -0.05f);
    glVertex2f(-0.67f, 0.03);
    glVertex2f(-0.63f, 0.03f);
    glEnd();

    glBegin(GL_POLYGON);    ////next to left below section window a
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, -0.045);
    glVertex2f(-0.665f, -0.045f);
    glVertex2f(-0.665f, 0.025);
    glVertex2f(-0.635f, 0.025f);
    glEnd();

glLineWidth(1);
    glBegin(GL_LINES);     ////next to left below section window b
    glColor3ub(168,168,168);

    glVertex2f(-0.649f, -0.045);
    glVertex2f(-0.649f, 0.025f);
    glEnd();

glBegin(GL_POLYGON);      ////next to left below section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.63f, -0.14);
    glVertex2f(-0.67f, -0.14f);
    glVertex2f(-0.67f, -0.06);
    glVertex2f(-0.63f, -0.06f);
    glEnd();

    glBegin(GL_POLYGON);   ////next to left below section window a 2
    glColor3ub(241,255,241);

    glVertex2f(-0.635f, -0.135f);
    glVertex2f(-0.665f, -0.135f);
    glVertex2f(-0.665f, -0.065);
    glVertex2f(-0.635f, -0.065f);
    glEnd();

glLineWidth(1);
    glBegin(GL_LINES);    ////next to left below section window b 2
    glColor3ub(168,168,168);

glVertex2f(-0.649f, -0.135);
    glVertex2f(-0.649f, -0.065f);
    glEnd();
    glBegin(GL_POLYGON);   //// middle section window 1
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, -0.12);
    glVertex2f(-0.58f, -0.12f);
    glVertex2f(-0.58f, -0.04);
    glVertex2f(-0.54f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);    //// middle section window 1
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, -0.115f);
    glVertex2f(-0.575f, -0.115f);
    glVertex2f(-0.575f, -0.045);
    glVertex2f(-0.545f, -0.045f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);   //// middle section window 1
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, -0.115);
    glVertex2f(-0.559f, -0.045f);
    glEnd();

glBegin(GL_POLYGON);  //// middle section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, 0.07);
    glVertex2f(-0.58f, 0.07f);
    glVertex2f(-0.58f, 0.15);
    glVertex2f(-0.54f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);   //// middle section window 2
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, 0.075f);
    glVertex2f(-0.575f, 0.075f);
    glVertex2f(-0.575f, 0.145);
    glVertex2f(-0.545f, 0.145f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);   //// middle section window 2
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, 0.075);
    glVertex2f(-0.559f, 0.145f);
    glEnd();


    glBegin(GL_POLYGON);  //// middle section window 3 top
    glColor3ub(208,216,209);

    glVertex2f(-0.54f, 0.20);
    glVertex2f(-0.58f, 0.20f);
    glVertex2f(-0.58f, 0.28);
    glVertex2f(-0.54f, 0.28f);
    glEnd();

    glBegin(GL_POLYGON);  //// middle section window 3 top
    glColor3ub(241,255,241);

    glVertex2f(-0.545f, 0.205f);
    glVertex2f(-0.575f, 0.205f);
    glVertex2f(-0.575f, 0.275);
    glVertex2f(-0.545f, 0.275f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);   //// middle section window 3 top
    glColor3ub(168,168,168);

    glVertex2f(-0.559f, 0.205);
    glVertex2f(-0.559f, 0.275f);
    glEnd();


    glBegin(GL_POLYGON);   //// right most section window 1
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, -0.12);
    glVertex2f(-0.50f, -0.12f);
    glVertex2f(-0.50f, -0.04);
    glVertex2f(-0.46f, -0.04f);
    glEnd();

    glBegin(GL_POLYGON);  ///right most section window 1
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, -0.115f);
    glVertex2f(-0.495f, -0.115f);
    glVertex2f(-0.495f, -0.045);
    glVertex2f(-0.465f, -0.045f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //right most section window 1
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, -0.115);
    glVertex2f(-0.479f, -0.045f);
    glEnd();
glBegin(GL_POLYGON);// right most section window 2
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, -0.02);
    glVertex2f(-0.50f, -0.02f);
    glVertex2f(-0.50f, 0.06);
    glVertex2f(-0.46f, 0.06f);
    glEnd();

    glBegin(GL_POLYGON); //right most section window 2
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, -0.015f);
    glVertex2f(-0.495f, -0.015f);
    glVertex2f(-0.495f, 0.055);
    glVertex2f(-0.465f, 0.055f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); ////right most section window 2
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, -0.015);
    glVertex2f(-0.479f, 0.055f);
    glEnd();

glBegin(GL_POLYGON);  //// right most section window 3
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.08);
    glVertex2f(-0.50f, 0.08f);
    glVertex2f(-0.50f, 0.16);
    glVertex2f(-0.46f, 0.16f);
    glEnd();

    glBegin(GL_POLYGON); ////right most section window 3
    glColor3ub(241,255,241);

glVertex2f(-0.465f, 0.085f);
    glVertex2f(-0.495f, 0.085f);
    glVertex2f(-0.495f, 0.155);
    glVertex2f(-0.465f, 0.155f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); ////right most section window 3
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.085);
    glVertex2f(-0.479f, 0.155f);
    glEnd();

glBegin(GL_POLYGON);    //// right most section window 4
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.18);
    glVertex2f(-0.50f, 0.18f);
    glVertex2f(-0.50f, 0.26);
    glVertex2f(-0.46f, 0.26f);
    glEnd();

    glBegin(GL_POLYGON); ////right most section window 4
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, 0.185f);
    glVertex2f(-0.495f, 0.185f);
    glVertex2f(-0.495f, 0.255);
    glVertex2f(-0.465f, 0.255f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); ////right most section window 4
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.185);
    glVertex2f(-0.479f, 0.255f);
    glEnd();


    glBegin(GL_POLYGON);  //// right most section window 5
    glColor3ub(208,216,209);

    glVertex2f(-0.46f, 0.28);
    glVertex2f(-0.50f, 0.28f);
    glVertex2f(-0.50f, 0.34);
    glVertex2f(-0.46f, 0.34f);
    glEnd();
    glBegin(GL_POLYGON);    ////right most section window 4
    glColor3ub(241,255,241);

    glVertex2f(-0.465f, 0.285f);
    glVertex2f(-0.495f, 0.285f);
    glVertex2f(-0.495f, 0.335);
    glVertex2f(-0.465f, 0.335f);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES);  ////right most section window 4
    glColor3ub(168,168,168);

    glVertex2f(-0.479f, 0.285);
    glVertex2f(-0.479f, 0.335f);
    glEnd();
}
void tunnel()
{
    glBegin(GL_POLYGON); // tunnel
    glColor3ub(16, 16, 16);
    glVertex2f(0.12f, 0.20f);
    glVertex2f(0.12f, 0.25f);
    glVertex2f(0.04f, 0.27f);
    glVertex2f(0.02f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(82, 82, 82);
    glVertex2f(0.04f, 0.27f);
    glVertex2f(0.03f, 0.225f);
    glVertex2f(0.02f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(82, 82, 82);

    glVertex2f(0.12f, 0.25f);
    glVertex2f(0.12f, 0.20f);
    glVertex2f(0.11f, 0.20f);

    glEnd();
}
void house()

{
    glBegin(GL_POLYGON); ////roof top
    glColor3ub(196, 120, 86);

    glVertex2f(0.60f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.74f, 0.00);
    glVertex2f(0.58f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON); ////left side
    glColor3ub(242, 239, 220);

    glVertex2f(0.59f, 0.00f);
    glVertex2f(0.735f, 0.00f);
    glVertex2f(0.735f, -0.15);
    glVertex2f(0.59f, -0.15f);
    glEnd();

    glBegin(GL_POLYGON); ////right side
    glColor3ub(230, 215, 186);
    glVertex2f(0.735f, 0.00);
    glVertex2f(0.735f, -0.15f);
    glVertex2f(0.80f, -0.15f);
    glVertex2f(0.80f, 0.00f);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);

    glEnd();

    glBegin(GL_POLYGON); ////right side fireplace
    glColor3ub(230, 215, 186);
    glVertex2f(0.77f, 0.10f);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.77f, 0.13f);

    glEnd();

    glBegin(GL_POLYGON); ////right side fireplace a
    glColor3ub(246, 230, 214);
    glVertex2f(0.75f, 0.10f);
    glVertex2f(0.75f, 0.13f);
    glVertex2f(0.74f, 0.126f);
    glVertex2f(0.74f, 0.10f);

    glEnd();

    glBegin(GL_POLYGON); ////left side door frame
    glColor3ub(255, 207, 176);

    glVertex2f(0.69f, -0.15);
    glVertex2f(0.64f, -0.15f);
    glVertex2f(0.64f, 0.00f);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.69f, 0.00f);

    glEnd();
    glBegin(GL_POLYGON); ////left side door
    glColor3ub(188, 138, 105);

    glVertex2f(0.68f, -0.15);
    glVertex2f(0.65f, -0.15f);
    glVertex2f(0.65f, -0.03f);
    glVertex2f(0.68f, -0.03f);

    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES); ////left side door frame roof border left side
    glColor3ub(180, 97, 65);
    glVertex2f(0.665f, 0.04f);
    glVertex2f(0.64f, 0.00f);
    glEnd();

    glBegin(GL_POLYGON); ////left side door frame roof border right side
    glColor3ub(180, 97, 65);
    glVertex2f(0.665f, 0.05f);
    glVertex2f(0.69f, 0.05f);
    glVertex2f(0.71f, 0.00f);
    glVertex2f(0.69f, 0.00);
    glEnd();

    glLineWidth(9); ////left side door frame wall inside
    glBegin(GL_LINES);
    glColor3ub(235, 219, 193);
    glVertex2f(0.697f, 0.00f);
    glVertex2f(0.697f, -0.15f);
    glEnd();

    glBegin(GL_POLYGON); ////left side window
    glColor3ub(173, 118, 98);

    glVertex2f(0.605f, -0.03f);
    glVertex2f(0.63f, -0.03f);
    glVertex2f(0.63f, -0.12);
    glVertex2f(0.605f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); ////left side window a blue
    glColor3ub(172, 213, 231);

    glVertex2f(0.61f, -0.035f);
    glVertex2f(0.625f, -0.035f);
    glVertex2f(0.625f, -0.115);
    glVertex2f(0.61f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); ////left side window middle border
    glColor3ub(173, 118, 98);

    glVertex2f(0.61f, -0.075f);
    glVertex2f(0.625f, -0.075f);
    glEnd();

    glBegin(GL_POLYGON); ////left side window 2
    glColor3ub(173, 118, 98);

    glVertex2f(0.71f, -0.03f);
    glVertex2f(0.73f, -0.03f);
    glVertex2f(0.73f, -0.12);
    glVertex2f(0.71f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); ////left side window a blue 2
    glColor3ub(172, 213, 231);

    glVertex2f(0.714f, -0.035f);
    glVertex2f(0.725f, -0.035f);
    glVertex2f(0.725f, -0.115);
    glVertex2f(0.714f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); ////left side window middle border 2
    glColor3ub(173, 118, 98);

    glVertex2f(0.71f, -0.075f);
    glVertex2f(0.725f, -0.075f);
    glEnd();

    glBegin(GL_POLYGON); ////right side window
    glColor3ub(173, 118, 98);

    glVertex2f(0.745f, -0.03f);
    glVertex2f(0.79f, -0.03f);
    glVertex2f(0.79f, -0.12);
    glVertex2f(0.745f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); ////right side window a blue
    glColor3ub(172, 213, 231);

    glVertex2f(0.75f, -0.035f);
    glVertex2f(0.786f, -0.035f);
    glVertex2f(0.786f, -0.115);
    glVertex2f(0.75f, -0.115f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); ////right side window middle border
    glColor3ub(173, 118, 98);

    glVertex2f(0.75f, -0.075f);
    glVertex2f(0.786f, -0.075f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES); ////right side window middle border top to bottom
    glColor3ub(173, 118, 98);

    glVertex2f(0.768f, -0.03f);
    glVertex2f(0.768f, -0.12f);
    glEnd();

    glBegin(GL_POLYGON); ////Attic  window
    glColor3ub(173, 118, 98);

    glVertex2f(0.755f, 0.003f);
    glVertex2f(0.778f, 0.003f);
    glVertex2f(0.778f, 0.055);
    glVertex2f(0.755f, 0.055f);
    glEnd();

    glBegin(GL_POLYGON); ////Attic window a blue
    glColor3ub(172, 213, 231);

    glVertex2f(0.76f, 0.01f);
    glVertex2f(0.775f, 0.01f);
    glVertex2f(0.775f, 0.05);
    glVertex2f(0.76f, 0.05f);
    glEnd();
}

void school()
{

    ////school road
    glBegin(GL_POLYGON);
    glColor3ub(192, 192, 192);

    glVertex2f(-0.05f, 0.08f);
    glVertex2f(0.40f, 0.08f);

    glVertex2f(0.35f, .00f);
    glVertex2f(-.10f, .00f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 106, 102);

    glVertex2f(0.00f, 0.04f);
    glVertex2f(0.30f, 0.04f);

    glVertex2f(0.30f, 0.12f);
    glVertex2f(0.00f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 94, 100);

    glVertex2f(-0.02f, 0.12f);
    glVertex2f(0.32f, 0.12f);
    glVertex2d(.28f, .16f);
    glVertex2d(.02f, .16f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(189, 106, 102);
    glVertex2d(.02f, .16f);
    glVertex2d(.28f, .16f);

    glVertex2d(.28f, .24f);
    glVertex2d(.02f, .24f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(105, 94, 100);

    glVertex2d(.00f, .24f);
    glVertex2d(.30f, .24f);

    glVertex2d(.26f, .28f);
    glVertex2d(.04f, .28f);
    glEnd();

    ////window 1

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.03f, .09f);
    glVertex2d(.07f, .09f);

    glVertex2d(.07f, .12f);
    glVertex2d(.03f, .12f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.04f, .10f);
    glVertex2d(.06f, .10f);

    glVertex2d(.06f, .12f);
    glVertex2d(.04f, .12f);
    glEnd();

    ////window 2
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.13f, .09f);
    glVertex2d(.17f, .09f);

    glVertex2d(.17f, .12f);
    glVertex2d(.13f, .12f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.14f, .10f);
    glVertex2d(.16f, .10f);

    glVertex2d(.16f, .12f);
    glVertex2d(.14f, .12f);
    glEnd();

    ////window 3

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.23f, .09f);
    glVertex2d(.27f, .09f);

    glVertex2d(.27f, .12f);
    glVertex2d(.23f, .12f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(0.24f, 0.10f);
    glVertex2d(0.26f, 0.10f);

    glVertex2d(0.26f, 0.12f);
    glVertex2d(0.24f, 0.12f);

    glEnd();

    ////2nd floor windows.............

    ////window 1
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.03f, .21f);
    glVertex2d(.07f, .21f);

    glVertex2d(.07f, .24f);
    glVertex2d(.03f, .24f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.04f, .22f);
    glVertex2d(.06f, .22f);

    glVertex2d(.06f, .24f);
    glVertex2d(.04f, .24f);
    glEnd();

    ////window 2
    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.13f, .21f);
    glVertex2d(.17f, .21f);

    glVertex2d(.17f, .24f);
    glVertex2d(.13f, .24f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);

    glVertex2d(.14f, .22f);
    glVertex2d(.16f, .22f);

    glVertex2d(.16f, .24f);
    glVertex2d(.14f, .24f);
    glEnd();

    ////window 3

    glBegin(GL_POLYGON);

    glColor3ub(245, 253, 255);

    glVertex2d(.23f, .21f);
    glVertex2d(.27f, .21f);

    glVertex2d(.27f, .24f);
    glVertex2d(.23f, .24f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(25, 31, 45);
    glVertex2d(.24f, .22f);
    glVertex2d(.26f, .22f);

    glVertex2d(.26f, .24f);
    glVertex2d(.24f, .24f);
    glEnd();
}

void prayerplace()
{

    int i; ////Ground

    GLfloat x9 = 0.14f;
    GLfloat y9 = -0.25f;
    GLfloat radius = .16f;
    int triangleAmount = 20;
    float twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(180, 180, 180);
    glVertex2f(x9, y9); //// center of circle
    for (i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x9 + (radius * cos(i * twicePi / triangleAmount)),
            y9 + (radius * sin(i * twicePi / triangleAmount)));
    }

    glEnd();

    glBegin(GL_POLYGON); ////left side
    glColor3ub(159, 155, 196);

    glVertex2f(0.02f, -0.28f);
    glVertex2f(0.10f, -0.30f);

    glVertex2f(0.10f, 0.03f);
    glVertex2f(0.00f, 0.0f);

    glEnd();

    glBegin(GL_POLYGON); ////left side shadow
    glColor3ub(89, 82, 72);

    glVertex2f(0.00f, 0.0f);
    glVertex2f(-0.01f, 0.008f);

    glVertex2f(0.10f, 0.04f);
    glVertex2f(0.10f, 0.03f);

    glEnd();

    glBegin(GL_POLYGON); ////left side roof
    glColor3ub(159, 155, 196);
    glVertex2f(-0.01f, 0.008f);
    glVertex2f(-0.01f, 0.018f);
    glVertex2f(0.10f, 0.06f);

    glVertex2f(0.10f, 0.04f);

    glEnd();

    glBegin(GL_POLYGON); ////right side main
    glColor3ub(111, 106, 156);
    glVertex2f(0.10f, 0.03f);
    glVertex2f(0.30f, -0.01f);
    glVertex2f(0.27f, -0.25f);
    glVertex2f(0.25f, -0.20f);
    glVertex2f(0.095f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON); ////right side shadow
    glColor3ub(89, 82, 72);

    glVertex2f(0.10f, 0.03f);
    glVertex2f(0.30f, -0.01f);

    glVertex2f(0.307f, 0.00f);
    glVertex2f(0.10f, 0.04f);

    glEnd();

    glBegin(GL_POLYGON); ////right side roof
    glColor3ub(111, 106, 156);
    glVertex2f(0.10f, 0.04f);
    glVertex2f(0.10f, 0.06f);
    glVertex2f(0.307f, 0.018f);
    glVertex2f(0.307f, 0.00f);

    glEnd();

    glBegin(GL_POLYGON); ////right side grill
    glColor3ub(168, 73, 13);
    glVertex2f(0.13f, -0.08f);
    glVertex2f(0.27f, -0.10f);

    glVertex2f(0.27f, -0.30f);
    glVertex2f(0.13f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON); ////right side grill
    glColor3ub(98, 106, 109);
    glVertex2f(0.19f, -0.18f);
    glVertex2f(0.20f, -0.18f);

    glVertex2f(0.20f, -0.30f);
    glVertex2f(0.19f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON); ////right side grill
    glColor3ub(146, 170, 180);
    glVertex2f(0.20f, -0.18f);
    glVertex2f(0.23f, -0.19f);
    glVertex2f(0.23f, -0.30f);
    glVertex2f(0.20f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON); ////right side grill
    glColor3ub(237, 244, 237);
    glVertex2f(0.205f, -0.21f);
    glVertex2f(0.205f, -0.30f);
    glVertex2f(0.225f, -0.30f);
    glVertex2f(0.225f, -0.22f);
    glVertex2f(0.215f, -0.20f);

    glEnd();

    glBegin(GL_POLYGON); ////right side grill depth triangle
    glColor3ub(159, 155, 196);
    glVertex2f(0.13f, -0.08f);
    glVertex2f(0.11f, -0.29f);
    glVertex2f(0.13f, -0.30f);

    glEnd();

    glBegin(GL_POLYGON); ////right side top window
    glColor3ub(2, 35, 66);
    glVertex2f(0.14f, -0.02f);
    glVertex2f(0.27f, -0.05f);
    glVertex2f(0.27f, -0.075f);
    glVertex2f(0.14f, -0.05f);

    glEnd();

    glBegin(GL_POLYGON); ////left side top window
    glColor3ub(2, 35, 66);

    glVertex2f(0.005f, -0.03f);
    glVertex2f(0.09f, -0.005f);
    glVertex2f(0.09f, -0.035f);
    glVertex2f(0.01f, -0.055f);

    glEnd();

    glBegin(GL_POLYGON); ////left side Door
    glColor3ub(188, 138, 105);

    glVertex2f(0.03f, -0.285f);
    glVertex2f(0.07f, -0.295f);

    glVertex2f(0.07f, -0.12f);
    glVertex2f(0.02f, -0.14f);

    glEnd();

    glBegin(GL_POLYGON); ////Below border left side
    glColor3ub(102, 104, 103);

    glVertex2f(0.01f, -0.27f);
    glVertex2f(0.095f, -0.298f);
    glVertex2f(0.095f, -0.315f);
    glVertex2f(0.01f, -0.285f);

    glEnd();

    glBegin(GL_POLYGON); ////right side border below 1
    glColor3ub(102, 104, 103);

    glVertex2f(0.095f, -0.30f);
    glVertex2f(0.095f, -0.315f);

    glVertex2f(0.11f, -0.295f);
    glVertex2f(0.11f, -0.275f);

    glEnd();

    glBegin(GL_POLYGON); ////right side border below 2
    glColor3ub(102, 104, 103);

    glVertex2f(0.13f, -0.314f);
    glVertex2f(0.11f, -0.30f);
    glVertex2f(0.11f, -0.275f);
    glVertex2f(0.13f, -0.295f);

    glEnd();

    glBegin(GL_POLYGON); ////right side border final
    glColor3ub(102, 104, 103);
    glVertex2f(0.13f, -0.296f);
    glVertex2f(0.27f, -0.30f);
    glVertex2f(0.27f, -0.315f);

    glVertex2f(0.13f, -0.315f);

    glEnd();
}

void college()
{
    glBegin(GL_POLYGON); ////Floor
    glColor3ub(168, 169, 173);
    glVertex2f(-0.58f, 0.05f);
    glVertex2f(-0.45f, -0.18f);
    glVertex2f(-0.20f, -0.18f);
    glVertex2f(-0.25f, 0.05f);

    glEnd();

    glBegin(GL_POLYGON); ////Full building
    glColor3ub(30, 144, 255);
    glVertex2f(-0.44f, -0.10f);
    glVertex2f(-0.28f, -0.10f);
    glVertex2f(-0.28f, 0.25f);
    glVertex2f(-0.44f, 0.25f);

    glEnd();
    glBegin(GL_POLYGON); ////Door-portion
    glColor3ub(0, 255, 255);
    glVertex2f(-0.38f, -0.10f);
    glVertex2f(-0.34f, -0.10f);
    glVertex2f(-0.34f, -0.02f);
    glVertex2f(-0.38f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON); ////Main-Door
    glColor3ub(128, 128, 128);
    glVertex2f(-0.38f, -0.10f);
    glVertex2f(-0.35f, -0.09f);
    glVertex2f(-0.35f, -0.03f);
    glVertex2f(-0.38f, -0.02f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow left
    glColor3ub(105, 105, 105);
    glVertex2f(-0.44f, 0.25f);
    glVertex2f(-0.44f, -0.10f);
    glVertex2f(-0.439f, -0.10f);
    glVertex2f(-0.439f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow bottom
    glColor3ub(105, 105, 105);
    glVertex2f(-0.44f, -0.10f);
    glVertex2f(-0.28f, -0.10f);
    glVertex2f(-0.28f, -0.102f);
    glVertex2f(-0.44f, -0.102f);

    glEnd();

    glBegin(GL_POLYGON); ////right-side
    glColor3ub(30, 144, 255);
    glVertex2f(-0.28f, -0.10f);
    glVertex2f(-0.25f, -0.06f);
    glVertex2f(-0.25f, 0.29f);
    glVertex2f(-0.28f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON); ////Upper-side shadow
    glColor3ub(105, 105, 105);
    glVertex2f(-0.278f, 0.248f);
    glVertex2f(-0.246f, 0.292f);
    glVertex2f(-0.402f, 0.292f);
    glVertex2f(-0.444f, 0.248f);

    glEnd();

    glBegin(GL_POLYGON); ////Upper-side
    glColor3ub(30, 144, 255);
    glVertex2f(-0.28f, 0.25f);
    glVertex2f(-0.25f, 0.29f);
    glVertex2f(-0.40f, 0.29f);
    glVertex2f(-0.44f, 0.25f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow bold left section up
    glColor3ub(105, 105, 105);
    glVertex2f(-0.443f, 0.25f);
    glVertex2f(-0.277f, 0.25f);
    glVertex2f(-0.277f, 0.23f);
    glVertex2f(-0.443f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow bold right section up
    glColor3ub(105, 105, 105);
    glVertex2f(-0.28f, 0.25f);
    glVertex2f(-0.25f, 0.29f);
    glVertex2f(-0.25f, 0.27f);
    glVertex2f(-0.28f, 0.23f);

    glEnd();
    glBegin(GL_POLYGON); ////black-shadow bold 2
    glColor3ub(105, 105, 105);
    glVertex2f(-0.443f, 0.145f);
    glVertex2f(-0.277f, 0.145f);
    glVertex2f(-0.277f, 0.125f);
    glVertex2f(-0.443f, 0.125f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow bold 2.2 middle section right
    glColor3ub(105, 105, 105);
    glVertex2f(-0.28f, 0.145f);
    glVertex2f(-0.25f, 0.185f);
    glVertex2f(-0.25f, 0.165f);
    glVertex2f(-0.28f, 0.125f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow bold 3
    glColor3ub(105, 105, 105);
    glVertex2f(-0.443f, 0.04f);
    glVertex2f(-0.277f, 0.04f);
    glVertex2f(-0.277f, 0.02f);
    glVertex2f(-0.443f, 0.02f);

    glEnd();
    glBegin(GL_POLYGON); ////black-shadow bold 3.3
    glColor3ub(105, 105, 105);
    glVertex2f(-0.28f, 0.04f);
    glVertex2f(-0.25f, 0.08f);
    glVertex2f(-0.25f, 0.06f);
    glVertex2f(-0.28f, 0.02f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow
    glColor3ub(105, 105, 105);
    glVertex2f(-0.25f, -0.06f);
    glVertex2f(-0.25f, 0.29f);
    glVertex2f(-0.252f, 0.29f);
    glVertex2f(-0.252f, -0.06f);

    glEnd();

    glBegin(GL_POLYGON); ////black-shadow-right
    glColor3ub(105, 105, 105);
    glVertex2f(-0.28f, -0.10f);
    glVertex2f(-0.28f, 0.25f);
    glVertex2f(-0.281f, 0.25f);
    glVertex2f(-0.281f, -0.10f);

    glEnd();

    glBegin(GL_POLYGON); //// black-shadow
    glColor3ub(105, 105, 105);
    glVertex2f(-0.28f, -0.10f);
    glVertex2f(-0.25f, -0.06f);
    glVertex2f(-0.249f, -0.05f);
    glVertex2f(-0.276f, -0.102f);

    glEnd();

    glBegin(GL_POLYGON); //// Window bottom left
    glColor3ub(241, 220, 203);
    glVertex2f(-0.42f, -0.07f);
    glVertex2f(-0.39f, -0.07f);
    glVertex2f(-0.39f, 0.00f);
    glVertex2f(-0.42f, 0.00f);

    glEnd();

    glBegin(GL_POLYGON); //// Window bottom left a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.418f, -0.068f);
    glVertex2f(-0.392f, -0.068f);
    glVertex2f(-0.392f, -0.002f);
    glVertex2f(-0.418f, -0.002f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window bottom left middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.405f, -0.07f);
    glVertex2f(-0.405f, -0.00f);

    glEnd();

    glBegin(GL_POLYGON); //// Window middle left
    glColor3ub(241, 220, 203);
    glVertex2f(-0.42f, 0.05f);
    glVertex2f(-0.39f, 0.05f);
    glVertex2f(-0.39f, 0.12f);
    glVertex2f(-0.42f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON); //// Window middle left a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.418f, 0.054f);
    glVertex2f(-0.392f, 0.054f);
    glVertex2f(-0.392f, 0.116f);
    glVertex2f(-0.418f, 0.116f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window middle left middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.405f, 0.05f);
    glVertex2f(-0.405f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON); //// Window top left
    glColor3ub(241, 220, 203);
    glVertex2f(-0.42f, 0.15f);
    glVertex2f(-0.39f, 0.15f);
    glVertex2f(-0.39f, 0.22f);
    glVertex2f(-0.42f, 0.22f);

    glEnd();

    glBegin(GL_POLYGON); //// Window top left a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.418f, 0.155f);
    glVertex2f(-0.392f, 0.155f);
    glVertex2f(-0.392f, 0.218f);
    glVertex2f(-0.418f, 0.218f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window middle top middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.405f, 0.15f);
    glVertex2f(-0.405f, 0.22f);

    glEnd();

    glBegin(GL_POLYGON); //// Window bottom right
    glColor3ub(241, 220, 203);
    glVertex2f(-0.32f, -0.07f);
    glVertex2f(-0.29f, -0.07f);
    glVertex2f(-0.29f, 0.00f);
    glVertex2f(-0.32f, 0.00f);

    glEnd();

    glBegin(GL_POLYGON); //// Window bottom right a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.318f, -0.068f);
    glVertex2f(-0.292f, -0.068f);
    glVertex2f(-0.292f, -0.002f);
    glVertex2f(-0.318f, -0.002f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window bottom right middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.305f, -0.07f);
    glVertex2f(-0.305f, -0.00f);

    glEnd();

    glBegin(GL_POLYGON); //// Window middle right
    glColor3ub(241, 220, 203);
    glVertex2f(-0.32f, 0.05f);
    glVertex2f(-0.29f, 0.05f);
    glVertex2f(-0.29f, 0.12f);
    glVertex2f(-0.32f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON); //// Window middle right a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.318f, 0.054f);
    glVertex2f(-0.292f, 0.054f);
    glVertex2f(-0.292f, 0.116f);
    glVertex2f(-0.318f, 0.116f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window middle right middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.305f, 0.05f);
    glVertex2f(-0.305f, 0.12f);

    glEnd();

    glBegin(GL_POLYGON); //// Window top right
    glColor3ub(241, 220, 203);
    glVertex2f(-0.32f, 0.15f);
    glVertex2f(-0.29f, 0.15f);
    glVertex2f(-0.29f, 0.22f);
    glVertex2f(-0.32f, 0.22f);

    glEnd();

    glBegin(GL_POLYGON); //// Window top right a
    glColor3ub(112, 164, 177);
    glVertex2f(-0.318f, 0.152f);
    glVertex2f(-0.292f, 0.152f);
    glVertex2f(-0.292f, 0.218f);
    glVertex2f(-0.318f, 0.218f);

    glEnd();

    glLineWidth(1);
    glBegin(GL_LINES); //// Window right top middle border
    glColor3ub(241, 220, 203);
    glVertex2f(-0.305f, 0.15f);
    glVertex2f(-0.305f, 0.22f);

    glEnd();
}
// Dasplay Function
void display(void)
{
    // clear color and depth buffers

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    greenBackground();
    mountainArea();
    roadBlock();
    tunnel();

    // buildings method
    glPushMatrix();
    glTranslatef(-0.10f, -0.04f, 0.00f);
    glScalef(0.80f, 0.80f, 0.00f);
    college();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.00f, 0.05f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    prayerplace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.45f, 0.00f, 0.00f);
    glScalef(0.65f, 0.80f, 0.00f);
    school();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.10f, -0.08f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    university();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.10f, -0.10f, 0.00f);
    glScalef(0.90f, 0.90f, 0.00f);
    house();
    glPopMatrix();
    // end of buildings method

    glFlush();
    glColor3ub(82, 82, 82);
    glVertex2f(0.04f, 0.27f);
    glVertex2f(0.03f, 0.225f);
    glVertex2f(0.02f, 0.23f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(82, 82, 82);

    glVertex2f(0.12f, 0.25f);
    glVertex2f(0.12f, 0.20f);
    glVertex2f(0.11f, 0.20f);

    glEnd();
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
