#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>

static GLfloat spin =  0.0;//spin korar jonne initial degree
float p=150.0;
float q=150.0;
float b=150.0;

void init(void)
{
    //glClearColor(R,G,B,A);
    glClearColor(0.15, 0.53, 0.86, 0); //Glfloat red,green,blue,alpha initial
    glOrtho(-150,150,-150,150,-150,0);
    //gluOrtho2D(0.0,300.0,0.0,300.0);// orthographic representation
}

void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 3.1416;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i=0;i<361;i++)
    {
        angle = i*PI /180;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();
}

void fire(){
    glColor3f(0.89, 0.91, 0);
    circle(5.0, 2.0 ,-22, -35);

    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-27,-35,0);
    glVertex3f(-17,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-18,-50,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-19,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-22,-60,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-23,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-26,-50,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-27,-35,0.0);
    glEnd();

    glColor3f(0.89, 0.91, 0);
    circle(5.0, 2.0 ,22, -35);

    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(27,-35,0);
    glVertex3f(17,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(18,-50,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(19,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(22,-60,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(23,-35,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(26,-50,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(27,-35,0.0);
    glEnd();

    glutPostRedisplay();
}

void footfire(){
    glColor3f(0.89, 0.91, 0);
    circle(5.0, 2.0 ,-8, -72);

    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-13,-72,0);
    glVertex3f(-3,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-4,-90,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-5,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-7,-100,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-9,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(-11,-90,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(-12,-72,0.0);
    glEnd();

    glColor3f(0.89, 0.91, 0);
    circle(5.0, 2.0 ,8, -72);

    glBegin(GL_POLYGON);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(13,-72,0);
    glVertex3f(3,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(4,-90,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(5,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(8,-100,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(9,-72,0.0);
    glColor3f(1, 0.61, 0);
    glVertex3f(12,-90,0.0);
    glColor3f(0.89, 0.91, 0);
    glVertex3f(13,-72,0.0);
    glEnd();

    glutPostRedisplay();
}

void cloud(void){

    //moving logic
    if(p>=-200)   //moving limit with the display measurement
       p=p-0.25;  //changing the object position for redisplaying

    else
       p=100;    // For backing the object continuously

    if(q>=-150)   //moving limit with the display measurement
       q=q-0.15;  //changing the object position for redisplaying

    else
       q=100;    // For backing the object continuously

    //cloud1
    glColor3f(1,1,1);
    circle(10.0, 5.0 ,-75.5, p+20);
    glColor3f(1,1,1);
    circle(5.0, 5.0 ,-75.5, p+25);
    glColor3f(1,1,1);
    circle(10.0, 8.0 ,-55.5, p+23);
    glColor3f(0.83, 0.83, 0.83);
    circle(10.0, 6.0 ,-65.5, p+25);
    glColor3f(1,1,1);
    circle(10.0, 9.0 ,-66.5, p+25);
    glColor3f(1,1,1);
    circle(3.0, 3.0 ,-65.5, p+20);
    glColor3f(0.83, 0.83, 0.83);
    circle(3.0, 3.0 ,-75.5, p+20);
    glColor3f(1,1,1);
    circle(3.0, 5.0 ,-74.5, p+20);


    //cloud2
    glColor3f(1,1,1);
    circle(13.0, 10.0 ,75.5, q+5);
    glColor3f(1,1,1);
    circle(10.0, 10.0 ,80.5, q);
    glColor3f(1,1,1);
    circle(8.0, 8.0 ,73.5, q-8);
    glColor3f(0.83, 0.83, 0.83);
    circle(15.0, 10.0 ,65.5, q);
    glColor3f(1,1,1);
    circle(15.0, 13.0 ,64.5, q);
    glColor3f(1,1,1);
    circle(10.0, 10.0 ,55.5, q);

    glutPostRedisplay();

}

void house(void){

    if(b>=-150)
       b=b-0.05;

    glColor3f(0.63, 0.88, 0.8);
    glRectf(-75,b-180,-5,-150);
    glRectf(-70,b-175,-10,-150);
    glRectf(-60,b-170,-50,-150);
    glRectf(-40,b-155,-15,-150);
    circle(10.0,12.0,-27.5,b-155.0);

    glColor3f(0.83, 0.98, 0.93);
    glRectf(140,b-130,90,-150);
    glRectf(135,b-110,136,-150);


    glColor3f(0.71, 0.88, 0.83);
    glRectf(-150,b-180,-85,-150);
    glRectf(-145,b-170,-90,-150);
    glRectf(-130,b-160,-105,-150);

    glColor3f(0.83, 0.98, 0.93);
    glRectf(-100,b-230,-60,-150);
    glRectf(-90,b-220,-70,-150);
    glRectf(-65,b-200,-63,-150);

    glColor3f(0.55, 0.69, 0.65);
    glRectf(-50,b-200,-20,-150);
    glRectf(-26,b-160,-25,-150);

    glColor3f(0.55, 0.69, 0.65);
    glRectf(100,b-220,60,-150);
    glRectf(95,b-160,65,-150);
    circle(10.0,12.0,80,b-160.0);

    glColor3f(0.71, 0.88, 0.83);
    glRectf(55,b-220,0,-150);
    glRectf(52,b-215,2,-150);
    glRectf(50,b-213,4,-150);
    glRectf(45,b-190,9,-150);
    glBegin(GL_TRIANGLES);
    glVertex3f(40,b-190,0.0);
    glVertex3f(27,b-180,0.0);
    glVertex3f(14,b-190,0.0);
    glEnd();





    glutPostRedisplay();

}

void spinDisplay_bottom(void)
{
   spin = spin + 7.5; //speed control
   if (spin > 10.0)
      spin = spin - 18.0;
   glutPostRedisplay(); //bar bar bivinno angle a aka hochhe
//   glutTimerFunc(25,spinDisplay_left,0); //continuously rotate er jonno
}

void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
         glutIdleFunc(spinDisplay_bottom);
         break;
     // case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
         glutIdleFunc(cloud);
         //glutIdleFunc(NULL); // make idle function inactive
      //break;
     //default:
    //break;
   }
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    house();

    //Ironman Structure Start
    //..............................
    //..............................

    //face
    glColor3f(0,0,0);
    circle(8.0,10.0,0.0,16.0);
    glColor3f(0.68, 0.1, 0.04);
    circle(7.5,9.5,0.0,16.0);

    glBegin(GL_POLYGON);
    glColor3f(0.98,0.74,0.27);
    glVertex3f(-5,18,0.0);
    glVertex3f(-6,20,0.0);
    glVertex3f(-5,22,0.0);
    glVertex3f(-3,24.0,0.0);
    glVertex3f(2.0,20,0.0);
    glVertex3f(3,22.0,0.0);
    glVertex3f(3,24.0,0.0);
    glVertex3f(5,22,0.0);
    glVertex3f(6,20,0.0);
    glVertex3f(5,18,0.0);
    glVertex3f(6,14,0.0);
    glVertex3f(6,12,0.0);
    glVertex3f(5,12,0.0);
    glVertex3f(5,11,0.0);
    glVertex3f(4,11,0.0);
    glVertex3f(3,8,0.0);
    glVertex3f(-3,8,0.0);
    glVertex3f(-4,11,0.0);
    glVertex3f(-5,11,0.0);
    glVertex3f(-5,12,0.0);
    glVertex3f(-6,12,0.0);
    glVertex3f(-6,14,0.0);
    glVertex3f(-5,16,0.0);
    glEnd();

    //ear
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(-8.0,14.0,0);
    glVertex3f(-9.0,14.0,0.0);
    glVertex3f(-9.0,18.0,0.0);
    glVertex3f(-8.0,18.0,0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-7.8,13.8,0);
    glVertex3f(-8.8,13.8,0.0);
    glVertex3f(-8.8,17.8,0.0);
    glVertex3f(-7.8,17.8,0.0);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3f(0,0,0);
    glVertex3f(8.0,14.0,0);
    glVertex3f(9.0,14.0,0.0);
    glVertex3f(9.0,18.0,0.0);
    glVertex3f(8.0,18.0,0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(7.8,13.8,0);
    glVertex3f(8.8,13.8,0.0);
    glVertex3f(8.8,17.8,0.0);
    glVertex3f(7.8,17.8,0.0);
    glEnd();

    //Eye
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(-5,17.0,0);
    glVertex3f(-5,18.5,0.0);
    glVertex3f(-2,18.5,0.0);
    glVertex3f(-2,17,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(5,17.0,0);
    glVertex3f(5,18.5,0.0);
    glVertex3f(2,18.5,0.0);
    glVertex3f(2,17,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(-5,16.0,0);
    glVertex3f(-5,17,0.0);
    glVertex3f(-1,17,0.0);
    glVertex3f(-1,16,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(5,16.0,0);
    glVertex3f(5,17,0.0);
    glVertex3f(1,17,0.0);
    glVertex3f(1,16,0.0);
    glEnd();

    //mouth
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex3f(-2,11.0,0);
    glVertex3f(2,11,0.0);
    glVertex3f(2,10,0.0);
    glVertex3f(-2,10,0.0);
    glEnd();

    glLineWidth(0.1);
    glBegin(GL_LINES);
    glColor3f(0,0,0);
    glVertex3f(2,10,0.0);
    glVertex3f(3,7,0.0);
    glVertex3f(-2,10,0.0);
    glVertex3f(-3,7,0.0);
    glEnd();

    //body
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(4,7.0,0);
    glVertex3f(6,6,0.0);
    glVertex3f(6,5,0.0);
    glVertex3f(0,5,0.0);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-4,7.0,0);
    glVertex3f(-6,6,0.0);
    glVertex3f(-6,5,0.0);
    glVertex3f(0,5,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-15,5.0,0.0);
    glVertex3f(15,5,0.0);
    glVertex3f(15,-10,0.0);
    glVertex3f(-15,-10.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-10,-17.0,0.0);
    glVertex3f(-15,-10.0,0.0);
    glVertex3f(15,-10,0.0);
    glVertex3f(10,-17,0.0);
    glVertex3f(10,-20.0,0.0);
    glVertex3f(8,-22.0,0.0);
    glVertex3f(-8,-22.0,0.0);
    glVertex3f(-10,-20.0,0.0);
    glEnd();


    //hand
    glColor3f(0,0,0);
    circle(8.0,6.5,11.0,0.0);
    glColor3f(0.68, 0.1, 0.04);
    circle(7.8,6.5,10.5,-0.5);
    glColor3f(0.98,0.74,0.27);
    circle(8.0,6.5,10.5,-1.9);
    glColor3f(0.68, 0.1, 0.04);
    circle(7.8,6.5,9.0,-2);

    glColor3f(0,0,0);
    circle(8.0,6.5,-11.0,0.0);
    glColor3f(0.68, 0.1, 0.04);
    circle(7.8,6.5,-10.5,-0.5);
    glColor3f(0.98,0.74,0.27);
    circle(8.0,6.5,-10.5,-1.9);
    glColor3f(0.68, 0.1, 0.04);
    circle(7.8,6.5,-9.0,-2);

    glColor3f(0.68, 0.1, 0.04);
    circle(4,10.0 ,18.0,-8.0);
    glColor3f(0.98,0.74,0.27);
    circle(2.5,9.0,18.0,-8.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(4,10.0 ,-18.0,-8.0);
    glColor3f(0.98,0.74,0.27);
    circle(2.5,9.0,-18.0,-8.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(3.5,10.0 ,20.0,-22.0);
    glColor3f(0,0,0);
    circle(3.0,9.5 ,20.0,-22.5);
    glColor3f(0.68, 0.1, 0.04);
    circle(3.3,8.5 ,19.8,-23.5);

    glColor3f(0.68, 0.1, 0.04);
    circle(3.5,10.0 ,-20.0,-22.0);
    glColor3f(0,0,0);
    circle(3.0,9.5 ,-20.0,-22.5);
    glColor3f(0.68, 0.1, 0.04);
    circle(3.3,8.5 ,-19.8,-23.5);

    //fire
    glPushMatrix();//static part static thakbe
    glRotatef(spin, -35.0, 0.0, 0.0);//x,y,z er shapekkhe
    fire();
    glPopMatrix();

    //Arm

    glColor3f(0.68, 0.1, 0.04);
    circle(1.0, 4.0 ,-18.0, -32.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(5.0, 2.0 ,-22.0, -32.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(1.0, 4.0 ,18.0, -32.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(5.0, 2.0 ,22.0, -32.0);


    //Leg

    glColor3f(0.68, 0.1, 0.04);
    circle(6,17.0,6.0,-34.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(6,17.0,-6.0,-34.0);

    glColor3f(0.98,0.74,0.27);
    circle(5,14.0,6.0,-35.0);

    glColor3f(0.98,0.74,0.27);
    circle(5,14.0,-6.0,-35.0);

    glBegin(GL_TRIANGLES);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-9,-21.0,0.0);
    glVertex3f(9,-21,0.0);
    glVertex3f(0,-31,0.0);
    glEnd();

    glColor3f(0.68, 0.1, 0.04);
    circle(4.0,13.0,6.0,-54.0);
    glColor3f(0.98,0.74,0.27);
    circle(3.0,12.0,6.0,-54.0);
    glColor3f(0.68, 0.1, 0.04);
    circle(2.5,13.0,5.8,-54.5);

    glColor3f(0.68, 0.1, 0.04);
    circle(4.0,13.0,-6.0,-54.0);
    glColor3f(0.98,0.74,0.27);
    circle(3.0,12.0,-6.0,-54.0);
    glColor3f(0.68, 0.1, 0.04);
    circle(2.5,13.0,-5.8,-54.5);

    //footfire
    glPushMatrix();//static part static thakbe
    glRotatef(spin, -72.0, 0.0, 0.0);//x,y,z er shapekkhe
    footfire();
    glPopMatrix();

    //leg feet
    glColor3f(0.68, 0.1, 0.04);
    circle(5.0, 2.0 ,-9.0, -70.0);

    glColor3f(0.68, 0.1, 0.04);
    circle(5.0, 2.0 ,9.0, -70.0);

    glBegin(GL_TRIANGLES);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(-3,-71.8,0.0);
    glVertex3f(-12,-71.8,0.0);
    glVertex3f(-3,-60,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.68, 0.1, 0.04);
    glVertex3f(3,-71.8,0.0);
    glVertex3f(12,-71.8,0.0);
    glVertex3f(3,-60,0.0);
    glEnd();


    //heart
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(-5,-5.0,0);
    glVertex3f(-4,-4,0.0);
    glVertex3f(4,-4,0.0);
    glVertex3f(5,-5,0.0);
    glVertex3f(1,-10,0.0);
    glVertex3f(-1,-10,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.33, 0.68, 1);
    glVertex3f(-3,-5.0,0.0);
    glColor3f(1,1,1);
    glVertex3f(3,-5,0.0);
    glVertex3f(0,-9,0.0);
    glEnd();

    //body line
    glLineWidth(2);
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-9,-22.0,0.0);
    glVertex3f(-4.5,-24.0,0.0);
    glVertex3f(0,-31,0.0);
    glVertex3f(4.5,-24.0,0.0);
    glVertex3f(9,-22,0.0);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.98,0.74,0.27);
    glVertex3f(-4.5,-23.0,0.0);
    glVertex3f(-6.5,-19.0,0.0);
    glVertex3f(-10,-17.0,0.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.98,0.74,0.27);
    glVertex3f(4.5,-23.0,0.0);
    glVertex3f(6.5,-19.0,0.0);
    glVertex3f(10,-17.0,0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex3f(-6.5,-17.5,0.0);
    glVertex3f(-8.5,-12.0,0.0);
    glVertex3f(-15,-9.0,0.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,1);
    glVertex3f(6.5,-17.5,0.0);
    glVertex3f(8.5,-12.0,0.0);
    glVertex3f(15,-9.0,0.0);
    glEnd();

    glLineWidth(0.1);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.0,-5.0,0.0);
    glVertex3f(-10.0,4.0,0.0);
    glEnd();
    glLineWidth(0.1);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(5.0,-5.0,0.0);
    glVertex3f(10.0,4.0,0.0);
    glEnd();

    glLineWidth(1);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-3.5,-24.0,0.0);
    glVertex3f(3.5,-24.0,0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.5,-19.0,0.0);
    glVertex3f(-3.0,-21.0,0.0);
    glVertex3f(3.0,-21.0,0.0);
    glVertex3f(5.5,-19.0,0.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-6.5,-15.0,0.0);
    glVertex3f(-4.0,-17.0,0.0);
    glVertex3f(4.0,-17.0,0.0);
    glVertex3f(6.5,-15.0,0.0);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-22.0,-32.0,0.0);
    glVertex3f(-27.0,-32.0,0.0);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(22.0,-32.0,0.0);
    glVertex3f(27.0,-32.0,0.0);
    glEnd();

    //Ironman Structure End
    //..............................
    //..............................

    cloud();

    glFlush();
}

int main()
{
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(200,100);
    glutInitWindowSize(800,800);
    glutCreateWindow("Iron Man");
    init();
    glutDisplayFunc(myDisplay);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;

}
