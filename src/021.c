/**
 *	Assignment 021 - calculator
 *
 * The program reads from stdin a simple
 * binary arithmetic operation of real
 * numbers (+, -, *, /, ^). The result
 * is printed to stdout.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <math.h>

double add(double a, double b);
double sub(double a, double b);
double mult(double a, double b);
double div(double a, double b);


int main()
{
	double num1, num2, res;
	char op;

	scanf("%lf %c %lf", &num1, &op, &num2);

	switch (op) {
	case '+':
		res = add(num1, num2);
		break;
	case '-':
		res = sub(num1, num2);
		break;
	case '*':
		res = mult(num1, num2);
		break;
	case '/':
		res = div(num1, num2);
		break;
	case '^':
		res = pow(num1, num2);
		break;
	}

	printf("%.3lf\n", res);
	return 0;
}


double add(double a, double b)
{
	return a + b;
}

double sub(double a, double b)
{
	return a - b;
}


double mult(double a, double b)
{
	return a * b;
}

double div(double a, double b)
{
	return a / b;
}

