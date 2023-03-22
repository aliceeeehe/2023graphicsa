#include <GL/glut.h>
float angle=0;
void drawHand()
{
    glPushMatrix();
        glScalef(1,0.3,0.3);
        glutSolidCube(0.5);
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景

    glPushMatrix();///右上手臂
        glTranslatef(0.25,0,0);///掛上去
        glRotatef(angle,0,0,1);///轉動
        glTranslatef(0.25,0,0);///把中心，放在正中心

        drawHand();///右上手肘
        glPushMatrix();
            glTranslatef(0.25,0,0);///掛上去
            glRotatef(angle,0,0,1);///轉動
            glTranslatef(0.25,0,0);///把中心，放在正中心
            drawHand();
        glPopMatrix();
    glPopMatrix();
    ///

    glPushMatrix();///左上手臂
        glTranslatef(-0.25,0,0);///掛上去
        glRotatef(angle,0,0,1);///轉動
        glTranslatef(-0.25,0,0);///把中心，放在正中心

        drawHand();///左下手肘
        glPushMatrix();
            glTranslatef(-0.25,0,0);///掛上去
            glRotatef(angle,0,0,1);///轉動
            glTranslatef(-0.25,0,0);///把中心，放在正中心
            drawHand();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}
int main(int argc,char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
