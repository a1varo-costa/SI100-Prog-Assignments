/**
 * 	Assignment 004 - simple calculator
 *
 * Program that reads from standard input a math expression with
 * two operands (floating point) and one operator (+, -, /, *).
 * After identifying the operation to be performed, it evaluates
 * and print the result.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

int main(void)
{
	double num1, num2, answer;
	char operator;

	scanf("%lf %c %lf", &num1, &operator, &num2);

	if (operator == '+')
		answer = num1 + num2;
	else if (operator == '-')
		answer = num1 - num2;
	else if (operator == '*')
		answer = num1 * num2;
	else if (operator == '/')
		answer = num1 / num2;
	else {
		puts("Operador invalido");
		return 0;
	}
	printf("%.3lf%c%.3lf=%.3lf\n", num1, operator, num2, answer);

	return 0;
}
