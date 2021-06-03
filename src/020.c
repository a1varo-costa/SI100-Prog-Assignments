/**
 *	Assignment 020 - mean
 *
 * The program reads from stdin a character,
 * 'A' or 'B', followed by two floats and computes
 * the mean of these values. If 'A' is given, it
 * computes the arithmetic mean. If 'B' is given,
 * it computes the geometric mean.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <math.h>


double media(double num1, double num2, char op);

int main()
{
	char op;
	double num1, num2;

	scanf("%c %lf %lf", &op, &num1, &num2);

	printf("%.3f\n", media(num1, num2, op));
	return 0;
}

double media(double num1, double num2, char op)
{
	if (op == 'A') return (num1 + num2) / 2;
	else return sqrt(num1 * num2);
}
