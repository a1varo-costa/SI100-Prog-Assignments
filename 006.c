/**
 * 	Assignment 006 - combination of numbers
 *
 * Given two integers 'n' and 's', this program calculates the
 * number of combinations of 'n' objects taken 's' at a time,
 * without repetition.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


unsigned int fact(unsigned int n)
{
	unsigned int x = 1;
	for (; n > 0; n--)
		x *= n;
	return x;
}

int main(void)
{
	unsigned int n, s, combination;

	scanf("%u %u", &n, &s);
	
	combination = fact(n) / (fact(s)*fact(n - s));
	printf("%u\n", combination);

	return 0;
}
