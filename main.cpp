/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

// PROGRAM MENGGAMBAR POLIGON

#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void trapesium()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.2, 1.0);

    glBegin(GL_POLYGON);

    glVertex2f(0.2, 0.3);   // Titik 1
    glVertex2f(0.7, 0.3);   // Titik 2
    glVertex2f(0.8, 0.7);   // Titik 3
    glVertex2f(0.3, 0.7);   // Titik 4

    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glLineWidth(4.0);

    glBegin(GL_LINES);

    glColor3f(0.1, 1.0, 0.0);
    glVertex2f(0.2, 0.3);   // Garis 1
    glVertex2f(0.7, 0.3);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.7, 0.3);   // Garis 2
    glVertex2f(0.8, 0.7);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.8, 0.7);   // Garis 3
    glVertex2f(0.3, 0.7);

    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(0.3, 0.7);   // Garis 4
    glVertex2f(0.2, 0.3);

    glEnd();

    glFlush();
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv){
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Point");
    Initialize();
    glutDisplayFunc(trapesium);
    glutMainLoop();
    return 0;
}
