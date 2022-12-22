/*
 *  Copyright 2022 Au Doan Ngoc
 *
 *  Author: Au Doan Ngoc
 *  Date: Dec 21, 2022
 *  Describe: create a window
*/

#include <iostream>
#include <unistd.h>
#include <GL/freeglut.h>

using namespace std;

static void RenderSceneCB()
{
    static GLclampf c = 0.0f;
    glClearColor(c, c, c, c); // glClearColor(Red, Green, Blue, Alpha)
    c += 1.0f/256.0f;

    if(c > 1.0f)
    {
        c = 0.0f;
    }

    glClear(GL_COLOR_BUFFER_BIT);
    glutPostRedisplay();
    glutSwapBuffers();
    usleep(10000);
}

int main(int argc, char** argv)
{
    cout << "Hello world!\n";
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    int width = 1024;
    int height = 600;
    glutInitWindowSize(width, height);

    int x = 200;
    int y = 100;
    glutInitWindowPosition(x,y);
    int win = glutCreateWindow("tutorial-1");
    printf("Windown ID: %d\n", win);

    // GLclampf Red = 1.0f, Green = 0.0f, Blue = 0.0f, Alpha = 0.0f;
    // glClearColor(Red, Green, Blue, Alpha);

    glutDisplayFunc(RenderSceneCB);

    glutMainLoop();
    return 0;
}