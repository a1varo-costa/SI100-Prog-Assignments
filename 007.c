/**
 * 	Assignment 007 - parity
 *
 * Given 10 integers, print how many are odd and how many
 * are even.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


int main(void)
{
	int odd, even, num, i;
	odd = even = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);

		if (num & 1) odd++;
		else even++;
	}
	printf("%d pares, %d impares\n", even, odd);

	return 0;
}
