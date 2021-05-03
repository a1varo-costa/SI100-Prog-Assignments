/**
 * 	Assignment 008 - Floyd's Triangle
 *
 * Floyd's Triangle is a triangular array of natural numbers. The lines are
 * filled with consecutive numbers, from 1 to N, as shown below for N = 3:
 * 
 * 	1
 * 	2 3
 * 	4 5 6
 * 
 * This program prints a slightly modified version of Floyd's Triangle. If
 * a line is even it is filled with 0s. Otherwise, 1s are used. When the
 * line is odd, it should be printed at the end how many numbers the line
 * has. At the end, the amount of 0s and 1s used is printed.
 *
 * Example (N = 3):
 *
 * 	1=1
 * 	0 0
 * 	1 1 1=3
 * 	6
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


int main(void)
{
	int rows, total_printed, row, col;

	scanf("%d", &rows);
	total_printed = 0;

	for (row = 1; row <= rows; row++) {
		for (col = 1; col <= row; col++) {
			if (row & 1) printf("1");
			else printf("0");
			total_printed++;
		}
		if (row & 1) printf("=%d", row);
		printf("\n");
	}
	printf("%d\n", total_printed);
	return 0;
}
