/**
 * 	Assignment 002 - even/odd
 *
 * Given an integer 'a' as input print to the standard output
 * the string 'par' if 'a' is even or print 'impar' if 'a' is
 * odd.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);
	if (num % 2 == 0)
		puts("par");
	else
		puts("impar");
	return 0;
}
