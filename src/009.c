/**
 * 	Assignment 009 - array
 *
 * The program receives as input 20 floats representing grades
 * and stores them in an array. Then, it receives an arbitrary
 * number of grades to be searched in the array. If the searched
 * grade is present in the array, the program prints the string
 * "existe". Otherwise, it prints "nao existe".
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


int main(void)
{
	float notas[20], x;
	int i;

	for (i = 0; i < 20; i++) {
		scanf("%f", &notas[i]);
	}

	for (x = 0.f; ; ) {
		scanf("%f", &x);
		if (x < 0.f) break;

		for (i = 0; i < 20 && notas[i] != x; i++)
			;

		if (i < 20) puts("existe");
		else puts("nao existe");
	}
	return 0;
}

