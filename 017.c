/**
 * 	Assignment 017 - rectangles
 *
 * The program takes as input 8 integers, x1, y1, x2, y2 of two
 * rectangles R1 and R2, where (x1, y1) is the coordinate of the
 * bottom left corner and (x2, y2) is the upper right corner of
 * a single rectangle.
 *
 * The output is the string "o segundo retangulo esta contido
 * no primeiro" if R2 is completely inside R1, and "segundo
 * retangulo nao esta contido no primeiro" otherwise.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <math.h>

typedef struct {
	int x, y;
} Ponto;

typedef struct {
	Ponto esq, dir;
} Retangulo;


int main(void)
{
	Retangulo retA, retB;
	int contido;

	scanf("%d %d", &retA.esq.x, &retA.esq.y);
	scanf("%d %d", &retA.dir.x, &retA.dir.y);

	scanf("%d %d", &retB.esq.x, &retB.esq.y);
	scanf("%d %d", &retB.dir.x, &retB.dir.y);

	contido = (retB.esq.x >= retA.esq.x) &&
		  (retB.dir.x <= retA.dir.x) &&
		  (retB.esq.y >= retA.esq.y) &&
		  (retB.dir.y <= retA.dir.y);

	if (contido) puts("o segundo retangulo esta contido no primeiro");
	else puts("o segundo retangulo nao esta contido no primeiro");

	return 0;
}
