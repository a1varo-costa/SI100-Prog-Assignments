/**
 * 	Assignment 16 - Euclidean Distance
 *
 * The program takes as input four real numbers x1, y1,
 * x2, y2, representing the coordinates of two points
 * in 2d space. After computing their Euclidean distance,
 * the program prints "os pontos sao iguais" if the distance
 * is less than 0.0000001, and "os pontos nao sao iguais"
 * otherwise.
 *
 * Autor: Álvaro A. Costa
 */

#include <stdio.h>
#include <math.h>

struct Ponto {
	double x, y;
} pontoA, pontoB;

int main(void)
{
	double dist;

	scanf("%lf %lf", &pontoA.x, &pontoA.y);
	scanf("%lf %lf", &pontoB.x, &pontoB.y);

	dist = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));

	if (dist < 0.0000001) puts("os pontos sao iguais");
	else puts("os pontos nao sao iguais");

	return 0;
}
