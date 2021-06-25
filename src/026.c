/**
 *		Assignment 026 - polynomial
 *
 *  Given the degree N of a polynomial, a list of coefficients and
 *  the value of the variable x, the program computes and prints to
 *  stdout the polynomial's evaluation.
 *
 *  Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct poly {
	int n;
	float *coefs;
};


float calc_poly(struct poly *poly, float x)
{
	float res = 0;
	int i;
	for (i = 0; i < poly->n; i++) {
		res += poly->coefs[i] * pow(x, i);
	}
	return res;
}


int main()
{
	struct poly poly;
	float x;
	int i;

	scanf("%d", &poly.n);

	// soma 1 pois se a ordem do polinômio é N,
	// haverá N+1 coeficientes:
	// 	P(x) = a1 * x^N + a2 * x^N-1 + ... + aN+1 * x^0
	poly.n += 1;

	poly.coefs = (float *) malloc(poly.n * sizeof(float));
	if (poly.coefs == NULL) {
		printf("ERR: alocacao falhou!\n");
		return 1;
	}

	for (i = 0; i < poly.n; i++) {
		scanf("%f", &poly.coefs[i]);
	}
	scanf("%f", &x);

	printf("%.2f\n", calc_poly(&poly, x));

	free(poly.coefs);
	return 0;
}
