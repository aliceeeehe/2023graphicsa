#include <stdio.h>
#include <GL/glut.h>
#include "glm.h"
GLMmodel*body=NULL;
GLMmodel*head=NULL;
GLMmodel*leftarm=NULL;
GLMmodel*leftuparm=NULL;
GLMmodel*leftleg=NULL;
GLMmodel*leftupleg=NULL;
GLMmodel*rightarm=NULL;
GLMmodel*rightuparm=NULL;
GLMmodel*rightleg=NULL;
GLMmodel*rightupleg=NULL;
int show[10] = {1,1,1,1,1,1,1,1,1,1};
int ID=0;
void keyboard(unsigned char key,int x,int y){
    if(key=='0') ID=0;
    if(key=='1') ID=1;
    if(key=='2') ID=2;
    if(key=='3') ID=3;
    if(key=='4') ID=4;
    if(key=='5') ID=5;
    if(key=='6') ID=6;
    if(key=='7') ID=7;
    if(key=='8') ID=8;
    if(key=='9') ID=9;
    glutPostRedisplay();
}
FILE*fout=NULL;
FILE*fin=NULL;
float teapotX=0,teapotY=0;
float angle=0,angle2=0,angle3=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glScalef(0.2,0.2,0.2);
        if(body==NULL){
            body=glmReadOBJ("model/body.obj");
            head=glmReadOBJ("model/head.obj");
            leftarm=glmReadOBJ("model/leftarm.obj");
            leftuparm=glmReadOBJ("model/leftuparm.obj");
            leftleg=glmReadOBJ("model/leftleg.obj");
            leftupleg=glmReadOBJ("model/leftupleg.obj");
            rightarm=glmReadOBJ("model/rightarm.obj");
            rightuparm=glmReadOBJ("model/rightuparm.obj");
            rightleg=glmReadOBJ("model/rightleg.obj");
            rightupleg=glmReadOBJ("model/rightupleg.obj");
        }
        if(ID==0) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[0]) glmDraw(body,GLM_MATERIAL);

        if(ID==1) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[1]) glmDraw(head, GLM_MATERIAL);

        if(ID==2) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[2]) glmDraw(leftarm, GLM_MATERIAL);

        if(ID==3) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[3]) glmDraw(leftuparm, GLM_MATERIAL);

        if(ID==4) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[4]) glmDraw(leftleg, GLM_MATERIAL);

        if(ID==5) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[5]) glmDraw(leftupleg, GLM_MATERIAL);

        if(ID==6) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[6]) glmDraw(rightarm, GLM_MATERIAL);

        if(ID==7) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[7]) glmDraw(rightuparm, GLM_MATERIAL);

        if(ID==8) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[8]) glmDraw(rightleg, GLM_MATERIAL);

        if(ID==9) glColor3f(1,0,0);
        else glColor3f(1,1,1);
        if(show[9]) glmDraw(rightupleg, GLM_MATERIAL);
        glPushMatrix();
            glTranslatef(teapotX,teapotY,0);
            glPopMatrix();

        glPopMatrix();
        glutSwapBuffers();
}
int oldX=0, oldY=0;
void motion(int x,int y){
    teapotX += (x-oldX)/150.0;
    teapotY += (y-oldY)/150.0;
    oldX = x;
    oldY = y;
    printf("glTranslatef(%f, %f, 0);\n",teapotX,teapotY);
    glutPostRedisplay();
}
void mouse(int button,int state,int x,int y)
{
    if(state==GLUT_DOWN)
    {
        oldX = x;
        oldY = y;
        angle = x;
    }
    display();
}
/*void keyboard(unsigned char key,int x,int y)
{
    if(fin==NULL)
    {
        fclose(fout);
        fin=fopen("file4.txt","r");
    }
    fscanf(fin,"%f %f",&teapotX,&teapotY);
    display();
}*/
int main(int argc,char** argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("Week12");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
