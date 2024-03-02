#include <iostream>
#include <GL/glut.h>


void display(void) {
  
  // clear the buffer bit of color
  glClear(GL_COLOR_BUFFER_BIT);
  
  // set color
  glColor3f(0.0, 1.0, 0.0);
  
  glBegin(GL_LINES);
  
  glVertex2f(2.0, 4.0);

  glVertex2f(8.0, 4.0);

  glVertex2f(8.0, 6.0);

  glVertex2f(2.0, 6.0);
  
  glEnd();
  
  glFlush(); // excute 

}
  
  
int main(int argc, char** argv) {
  
  // Create window to work with
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
  
  // Position the window
  glutInitWindowPosition(100, 100);
  
  // Set size
  glutInitWindowSize(420, 420);
  
  // create the window 
  glutCreateWindow("My First Graphics");
  
  // Set the background color
  glClearColor(0.0, 0.0, 0.0, 0.0);
  
  // 
  glMatrixMode(GL_PROJECTION);
  
  // this means excute the above command
  glLoadIdentity();
  
  // projects our drawing onto the window
  glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 0.0);
  
  glutDisplayFunc(display);
  glutMainLoop();
  
}

