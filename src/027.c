/**
 *	Assignment 027 - symmetric matrix
 *
 *  Given the dimension of a matrix and its elements, the program
 *  checks whether the matrix is symmetric or not.
 *
 *  This example shows the usage malloc for dynamic memory allocation.
 *
 *  Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <stdlib.h>


int **new_mat(int nrow, int ncol);
int is_symmetric(int **mat, int nrow, int ncol);
void free_mat(int ***mat, int nrow);


int **new_mat(int nrow, int ncol)
{
	int **mat;
	int ok, i;

	ok = 1;

	mat = (int **) malloc(nrow * sizeof(int *));
	if (mat == NULL) {
		return mat;
	}

	for (i = 0; i < nrow; i++) {
		mat[i] = (int *) malloc(ncol * sizeof(int));
		if (mat[i] == NULL) {
			ok = 0;
			break;
		}
	}

	if (!ok)
		free_mat(&mat, i);
	return mat;
}


void free_mat(int ***mat, int nrow)
{
	int i;

	for (i = 0; i < nrow; i++)
		free((*mat)[i]);
	free(*mat);
	*mat = NULL;
}


int is_symmetric(int **mat, int nrow, int ncol)
{
	int i, j;

	if (nrow != ncol) {
		return 0;
	}

	for (i = 0; i < nrow; i++) {
		for (j = 0; j < ncol; j++) {
			if (mat[i][j] != mat[j][i])
				return 0;
		}
	}
	return 1;
}


int main()
{
	int ncol, nrow, i, j;
	int **mat;

	scanf("%d %d", &nrow, &ncol);

	if ((mat = new_mat(nrow, ncol)) == NULL) {
		printf("ERR: alocacao falhou!\n");
		return 1;
	}

	for (i = 0; i < nrow; i++)
		for (j = 0; j < ncol; j++)
			scanf("%d", &mat[i][j]);

	if (is_symmetric(mat, nrow, ncol))
		printf("Eh simetrica\n");
	else
		printf("Nao eh simetrica\n");

	free_mat(&mat, nrow);
	return 0;
}
