/**
 *	Assignment 023 - operations with complex numbers
 *
 * The program takes as input an operation (addition or multiplication)
 * with complex numbers and returns its result. The input follows the
 * format:
 * 		a b op c d
 *
 * Where 'a' and 'b' are the real and imaginary part, respectively, of
 * the first complex number, and 'c' and 'd' are the real and imaginary
 * part of the second one. The character 'op' tells the operation to
 * be performed ('+' or '*').
 *
 * The output follows the format:
 * 		a + bi
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


void complex_sum(int *real_A, int *complex_A, int real_B, int complex_B)
{
	*real_A += real_B;
	*complex_A += complex_B;
}


void complex_mult(int *real_A, int *complex_A, int real_B, int complex_B)
{
	int r, c;

	r = (*real_A * real_B) - (*complex_A * complex_B);
	c = (*real_A * complex_B) + (*complex_A * real_B);

	*real_A = r;
	*complex_A = c;
}


int main()
{
	int real_A, complex_A;
	int real_B, complex_B;
	char op;

	scanf("%d %d %c %d %d", &real_A,
	                        &complex_A,
	                        &op,
	                        &real_B,
	                        &complex_B);

	if (op == '+')
		complex_sum(&real_A, &complex_A, real_B, complex_B);
	else
		complex_mult(&real_A, &complex_A, real_B, complex_B);

	printf("%d + %di\n", real_A, complex_A);
	return 0;
}
