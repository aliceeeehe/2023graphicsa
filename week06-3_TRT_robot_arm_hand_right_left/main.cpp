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
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��

    glPushMatrix();///�k�W���u
        glTranslatef(0.25,0,0);///���W�h
        glRotatef(angle,0,0,1);///���
        glTranslatef(0.25,0,0);///�⤤�ߡA��b������

        drawHand();///�k�W��y
        glPushMatrix();
            glTranslatef(0.25,0,0);///���W�h
            glRotatef(angle,0,0,1);///���
            glTranslatef(0.25,0,0);///�⤤�ߡA��b������
            drawHand();
        glPopMatrix();
    glPopMatrix();
    ///

    glPushMatrix();///���W���u
        glTranslatef(-0.25,0,0);///���W�h
        glRotatef(angle,0,0,1);///���
        glTranslatef(-0.25,0,0);///�⤤�ߡA��b������

        drawHand();///���U��y
        glPushMatrix();
            glTranslatef(-0.25,0,0);///���W�h
            glRotatef(angle,0,0,1);///���
            glTranslatef(-0.25,0,0);///�⤤�ߡA��b������
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
