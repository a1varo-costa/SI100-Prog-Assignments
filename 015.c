/**
 *	Assignment 015 - matrix manipulation
 *
 * The program takes as input an integer N <= 10, followed by an
 * integer X and two matrices of integers, A and B, of order N.
 *
 * The elements in matrix A register incidents in rain forests. But
 * these data are out of order and divided by a factor X.
 *
 * The matrix B describes how A must be rearranged. The i-th line
 * of B has N elements b0, b1, ..., bN-1, representing that the
 * i-th column of A must have the elements that are currently in
 * A[b0][i], A[b1][i], ..., A[bN-1][i].
 *
 * The program prints matrix A, rearranged and multiplied by a
 * scalar X, followed by the sum, mean and standard deviation
 * of each column, as shown below.
 *
 * 	Input:
 *	 	3
 *		2
 *		1 2 3
 *		4 5 6
 *		7 8 9
 *		2 2 2
 *		0 0 0
 *		1 1 1
 *	Output:
 *		Matriz corrigida
 *		6 2 4
 *		12 8 10
 *		18 14 16
 *		Somas::36.00 24.00 30.00
 *		Medias::12.00 8.00 10.00
 *		Desvios::4.90 4.90 4.90
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <math.h>

#define MAXN 10


int main()
{
	int mat[MAXN][MAXN], correct[MAXN][MAXN], mat_size;
	float sum[MAXN], mean[MAXN], std[MAXN];
	int factor, val, row, col;

	scanf("%d %d", &mat_size, &factor);

	for (row = 0; row < mat_size; row++) {
		for (col = 0; col < mat_size; col++) {
			scanf("%d", &val);
			mat[row][col] = factor * val;
		}
	}

	for (col = 0; col < mat_size; col++) {
		sum[col] = mean[col] = std[col] = 0;

		for (row = 0; row < mat_size; row++) {
			scanf("%d", &val);
			correct[row][col] = mat[row][val];
			sum[col] += correct[row][col];
		}
		mean[col] = sum[col] / mat_size;

		// desvio padrao
		for (row = 0; row < mat_size; row++)
			std[col] += pow(correct[row][col] - mean[col], 2);
		std[col] = sqrt(std[col] / mat_size);
	}

	// imprime solucao
	puts("Matriz corrigida ");
	for (row = 0; row < mat_size; row++) {
		for (col = 0; col < mat_size; col++)
			printf("%d\t", correct[row][col]);
		puts("");
	}

	printf("Somas::");
	for (col = 0; col < mat_size; col++)
		printf("%.2f\t", sum[col]);

	printf("\nMedias::");
	for (col = 0; col < mat_size; col++)
		printf("%.2f\t", mean[col]);

	printf("\nDesvios::");
	for (col = 0; col < mat_size; col++)
		printf("%.2f\t", std[col]);
	puts("");

	return 0;
}
