/**
 * 	Assignment 012 - matrix transpose
 *
 * The program takes as input a N by M matrix
 * (N <= 20 and M <= 20) and prints the transpose
 * of this matrix.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

#define MAX_N 20

int main(void)
{
	int nrow, ncol, row, col;
	int mat[MAX_N][MAX_N];

	// input
	scanf("%d %d", &nrow, &ncol);

	for (row = 0; row < nrow; row++)
		for (col = 0; col < ncol; col++)
			scanf("%d", &mat[row][col]);

	// transpose
	for (col = 0; col < ncol; col++) {
		for (row = 0; row < nrow; row++)
			printf("%d ", mat[row][col]);
		puts("");
	}
	return 0;
}
