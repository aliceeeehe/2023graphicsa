#include <GL/glut.h>
void display()
{

    ///glutSolidTeapot(0.5);
    glBegin(GL_POLYGON);
        glColor3f(1,0,1); glVertex2f(0.6,0.6);
        glColor3f(1,1,1); glVertex2f(-0.6,0.6);
        glColor3f(1,0,0); glVertex2f(-0.6,-0.6);
        glColor3f(1,0,0); glVertex2f(0.6,-0.6);
    glEnd();


    glColor3f(0,0,0);
    glutSolidTeapot(0.2);//�e�X�@�ӹ�ߪ������A�����j�p0.3
    glutSwapBuffers();//��GLUT��e��swap�e����ܪ���m
}
int main(int argc, char *argv[])
{///�W���O�S�O���禡 main()�禡,���ܦh�Ѽ�
    glutInit(&argc, argv);///��GLUT�}�_��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");//�n�}����
    glutDisplayFunc(display);//�n��ܹ����禡
    glutMainLoop();//�̫��main�j��A���b�̫᭱
}
