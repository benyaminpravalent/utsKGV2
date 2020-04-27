#include <iostream>
#include <string>
#include <glut.h>
#include <stdlib.h>
using namespace std;

float r, x, a, y, xd, yd;
float xp[14] = { 23, 35, 70, 90, 35, 40, 68, 78, 12, 12, 113, 113, 30, 90 };
float yp[14] = { 188, 208, 208, 188, 193, 203, 203, 193, 168, 189, 189, 168, 166, 166 };
bool done = false;

void loadingBar()
{
	glColor3f(1, 0, 1);
	glBegin(GL_POLYGON);
	glVertex2f(xp[0], yp[0]);
	glVertex2f(xp[1], yp[1]);
	glVertex2f(xp[2], yp[2]);
	glVertex2f(xp[3], yp[3]);
	glEnd();
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(xp[4], yp[4]);
	glVertex2f(xp[5], yp[5]);
	glColor3f(0, 1, 1);
	glVertex2f(xp[6], yp[6]);
	glVertex2f(xp[7], yp[7]);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex2f(xp[8], yp[8]);
	glVertex2f(xp[9], yp[9]);
	glColor3f(0, 0, 1);
	glVertex2f(xp[10], yp[10]);
	glVertex2f(xp[11], yp[11]);
	glEnd();
	glColor3f(1, 1, 0.5);
	glBegin(GL_POLYGON);
	r = 10;
	a = 6.28 / 1000;
	for (int i = 0; i < 1000; i++) {
		x = xp[12] + r * cos(i * a);
		y = yp[12] + r * sin(i * a);
		glVertex2f(x, y);
	}
	glEnd();
	glColor3f(0.5, 0, 1);
	glBegin(GL_POLYGON);
	r = 10;
	a = 6.28 / 1000;
	for (int i = 0; i < 1000; i++) {
		x = xp[13] + r * cos(i * a);
		y = yp[13] + r * sin(i * a);
		glVertex2f(x, y);
	}
	glEnd();

}
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 13: //tombol escape exit(0);
		exit(0);
		break;
	case 'd':
	case 'D':
		for (int i = 0; i <= 13; i++) {
			xp[i] += 30;
		}
		break;
	case 'a':
	case 'A':
		for (int i = 0; i <= 13; i++) {
			xp[i] -= 30;
		}
		break;
	case 'w':
	case 'W':
		if (yp[13] + 30 < 200) {
			for (int i = 0; i <= 13; i++) {
				yp[i] += 30;
			}
		}
		else {
			for (int i = 0; i <= 13; i++) {
				yp[i] += 0;
			}
		}
		break;
		break;
	case 's':
	case 'S':
		if (yp[13] - 30 > 150) {
			for (int i = 0; i <= 13; i++) {
				yp[i] -= 30;
			}
		}
		else {
			for (int i = 0; i <= 13; i++) {
				yp[i] -= 0;
			}
		}
		break;
	}
	if (xp[8] > 480) {
		xp[0] = 25; xp[1] = 35;
		xp[2] = 70; xp[3] = 90;
		xp[4] = 35; xp[5] = 40;
		xp[6] = 68; xp[7] = 78;
		xp[8] = 12; xp[9] = 12;
		xp[10] = 113; xp[11] = 113;
		xp[12] = 30; xp[13] = 90;
	}
	if (xp[10] < 0) {
		xp[0] = 381; xp[1] = 391;
		xp[2] = 426; xp[3] = 446;
		xp[4] = 391; xp[5] = 396;
		xp[6] = 424; xp[7] = 434;
		xp[8] = 368; xp[9] = 368;
		xp[10] = 469; xp[11] = 469;
		xp[12] = 386; xp[13] = 446;
	}
	glutPostRedisplay();
}
static void display(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//bangun1
	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2f(200, 200);
	glVertex2f(0, 400);
	glColor3ub(255, 205, 230);
	glVertex2f(60, 400);
	glVertex2f(60, 200);
	glEnd();
	//jendela
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(10, 250);
	glVertex2f(10, 270);
	glColor3ub(255, 255, 255);
	glVertex2f(20, 270);
	glVertex2f(20, 250);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(40, 250);
	glVertex2f(40, 270);
	glColor3ub(255, 255, 255);
	glVertex2f(50, 270);
	glVertex2f(50, 250);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(10, 290);
	glVertex2f(10, 310);
	glColor3ub(255, 255, 255);
	glVertex2f(20, 310);
	glVertex2f(20, 290);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(40, 290);
	glVertex2f(40, 310);
	glColor3ub(255, 255, 255);
	glVertex2f(50, 310);
	glVertex2f(50, 290);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(10, 330);
	glVertex2f(10, 350);
	glColor3ub(255, 255, 255);
	glVertex2f(20, 350);
	glVertex2f(20, 330);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(40, 330);
	glVertex2f(40, 350);
	glColor3ub(255, 255, 255);
	glVertex2f(50, 350);
	glVertex2f(50, 330);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(10, 370);
	glVertex2f(10, 390);
	glColor3ub(255, 255, 255);
	glVertex2f(20, 390);
	glVertex2f(20, 370);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(40, 370);
	glVertex2f(40, 390);
	glColor3ub(255, 255, 255);
	glVertex2f(50, 390);
	glVertex2f(50, 370);
	glEnd();
	//pintu1
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(20, 200);
	glVertex2f(20, 230);
	glColor3ub(100, 100, 100);
	glVertex2f(40, 230);
	glVertex2f(40, 200);
	glEnd();
	//bangun2
	glBegin(GL_POLYGON);
	glColor3ub(200, 255, 0);
	glVertex2f(70, 200);
	glVertex2f(70, 380);
	glColor3ub(255, 205, 230);
	glVertex2f(140, 380);
	glVertex2f(140, 200);
	glEnd();
	//jendela2
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(80, 260);
	glVertex2f(80, 280);
	glColor3ub(255, 255, 255);
	glVertex2f(90, 280);
	glVertex2f(90, 260);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(120, 260);
	glVertex2f(120, 280);
	glColor3ub(255, 255, 255);
	glVertex2f(130, 280);
	glVertex2f(130, 260);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(80, 300);
	glVertex2f(80, 320);
	glColor3ub(255, 255, 255);
	glVertex2f(90, 320);
	glVertex2f(90, 300);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(120, 300);
	glVertex2f(120, 320);
	glColor3ub(255, 255, 255);
	glVertex2f(130, 320);
	glVertex2f(130, 300);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(80, 340);
	glVertex2f(80, 360);
	glColor3ub(255, 255, 255);
	glVertex2f(90, 360);
	glVertex2f(90, 340);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(120, 340);
	glVertex2f(120, 360);
	glColor3ub(255, 255, 255);
	glVertex2f(130, 360);
	glVertex2f(130, 340);
	glEnd();
	//pintu2
	glBegin(GL_POLYGON);
	glColor3ub(100, 205, 255);
	glVertex2f(95, 200);
	glVertex2f(95, 230);
	glColor3ub(255, 150, 200);
	glVertex2f(115, 230);
	glVertex2f(115, 200);
	glEnd();
	//bangun3
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 100);
	glVertex2f(160, 200);
	glVertex2f(160, 300);
	glColor3ub(255, 255, 0);
	glVertex2f(280, 300);
	glVertex2f(280, 200);
	glEnd();
	
	//jendela
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(170, 250);
	glVertex2f(170, 270);
	glColor3ub(255, 255, 255);
	glVertex2f(190, 270);
	glVertex2f(190, 250);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(210, 250);
	glVertex2f(210, 270);
	glColor3ub(255, 255, 255);
	glVertex2f(230, 270);
	glVertex2f(230, 250);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(100, 255, 255);
	glVertex2f(250, 250);
	glVertex2f(250, 270);
	glColor3ub(255, 255, 255);
	glVertex2f(270, 270);
	glVertex2f(270, 250);
	glEnd();
	//pintu3
	glBegin(GL_POLYGON);
	glColor3ub(100, 195, 255);
	glVertex2f(200, 200);
	glVertex2f(200, 230);
	glColor3ub(255, 255, 255);
	glVertex2f(240, 230);
	glVertex2f(240, 200);
	glEnd();
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3ub(255, 255, 0);
	glVertex2f(220, 200);
	glVertex2f(220, 230);
	glEnd();
	
	glBegin(GL_POLYGON);
	xd = 250;
	yd = 460;
	r = 30;
	a = 6.28 / 1000;
	for (int i = 0; i < 1000; i++) {
		glColor3f(0, 0, 0.5);
		x = xd + r * cos(i * a);
		y = yd + r * sin(i * a);
		glVertex2f(x, y);
	}
	for (int i = 0; i < 1000; i++) {
		glColor3f(0.5, 1, 0);
		x = xd + 80 * cos(i * a);
		y = yd + 80 * sin(i * a);
		glVertex2f(x, y);
	}
	glEnd();

	loadingBar();
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(10, 10);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("UTS KGV BENYAMIN");
	gluOrtho2D(0, 480, 0, 480);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMainLoop();
	return EXIT_SUCCESS;
}