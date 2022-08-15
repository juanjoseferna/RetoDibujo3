#include "Arbol.h"

void Arbol::dibujarArbol(float x, float y, float z)
{
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidSphere(1, 20, 20);
	glutSolidCylinder(0.5, 1.5, 20, 20);
	glPopMatrix();
}