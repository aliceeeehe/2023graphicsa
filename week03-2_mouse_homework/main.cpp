#include <GL/glut.h>
#include <stdio.h>
void display()
{


    glBegin(GL_POLYGON);
    {
   glVertex2f(-0.768,0.244);
   glVertex2f(-0.768,0.360);
   glVertex2f(-0.668,0.424);
   glVertex2f(-0.640,0.316);
   glVertex2f(-0.592,0.284);
   glVertex2f(-0.564,0.364);
   glVertex2f(-0.596,0.512);
   glVertex2f(-0.400,0.472);
   glVertex2f(-0.392,0.336);
   glVertex2f(-0.364,0.272);
   glVertex2f(-0.272,0.220);
   glVertex2f(-0.140,0.216);
   glVertex2f(0.080,0.200);
   glVertex2f(0.492,0.184);
   glVertex2f(0.472,0.276);
   glVertex2f(0.596,0.356);
   glVertex2f(0.664,0.212);
   glVertex2f(0.700,0.084);
   glVertex2f(0.812,0.044);
   glVertex2f(0.884,-0.104);
   glVertex2f(0.744,-0.124);
   glVertex2f(0.760,-0.228);
   glVertex2f(0.908,-0.336);
   glVertex2f(0.912,-0.452);
   glVertex2f(0.788,-0.444);
   glVertex2f(0.680,-0.336);
   glVertex2f(0.572,-0.264);
   glVertex2f(0.104,-0.304);
   glVertex2f(-0.496,-0.320);
   glVertex2f(-0.608,-0.396);
   glVertex2f(-0.764,-0.584);
   glVertex2f(-0.748,-0.380);
   glVertex2f(-0.832,-0.392);
   glVertex2f(-0.952,-0.400);
   glVertex2f(-0.924,-0.264);
   glVertex2f(-0.768,-0.120);
   glVertex2f(-0.772,-0.008);
    }

    glEnd();
    glutSwapBuffers();
}
///#include<stdio.h>
void mouse(int button,int state,int x,int y)
{
    float X=(x-250)/250.0;
    float Y=-(y-250)/250.0;
    if(state==GLUT_DOWN){
        printf("   glVertex2f(%.3f,%.3f);\n",X,Y);
    }
}
int main(int argc,char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}
