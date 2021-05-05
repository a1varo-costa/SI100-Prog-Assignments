/**
 * 	Assignment 010 - array
 *
 * The program receives as input 10 integers representing
 * the amount of products sold, followed by 10 floats
 * representing the products' unitary price. These values
 * are stored in 2 arrays.
 *
 * Based on the input, the program prints the total amount
 * of products sold and the profit.
 *
 * Autor: Álvaro A. Costa
 */

#include <stdio.h>


int main(void)
{
	int i, total_sold, sold[10];
	float earning, price[10];

	for (i = 0, total_sold = 0; i < 10; i++) {
		scanf("%d", &sold[i]);
		total_sold += sold[i];
	}

	for (i = 0, earning = 0.f; i < 10; i++) {
		scanf("%f", &price[i]);
		earning += price[i] * sold[i];
	}
	printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n",
	       earning, total_sold);
	return 0;
}

