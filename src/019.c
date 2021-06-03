/**
 *	Assignment 019 - sphere volume
 *
 * The program takes as input the radius of a sphere
 * and outputs its volume.
 * This is an introduction to functions in C.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

#define PI 3.14159


double volume_esfera(double r)
{
	return (4.0 / 3.0) * PI * r * r * r;
}

int main()
{
	double raio;

	scanf("%lf", &raio);
	printf("%.2f\n", volume_esfera(raio));

	return 0;
}
