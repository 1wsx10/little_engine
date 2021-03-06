#include "main.h"

int main(int argc, char **argv) {

	test_v3d();

	player1.coord.x = 0.0f;
	player1.coord.z = 0.0f;
	player1.rot = 0.0f;
	player1.radius = 0.1f;
	player1.line = 0.2f;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL - Creating a triangle");
	glutDisplayFunc(draw);
	glutKeyboardFunc(keyDown);
	glutKeyboardUpFunc(keyUp);
	glutIdleFunc(mainloop);
	glutMainLoop();

	return EXIT_SUCCESS;

}

