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
    glutSolidTeapot(0.2);//畫出一個實心的茶壺，它的大小0.3
    glutSwapBuffers();//請GLUT把畫面swap送到顯示的位置
}
int main(int argc, char *argv[])
{///上面是特別的函式 main()函式,有很多參數
    glutInit(&argc, argv);///把GLUT開起來
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");//要開視窗
    glutDisplayFunc(display);//要顯示對應函式
    glutMainLoop();//最後用main迴圈，壓在最後面
}
