/**
 *	Assignment 024 - max and min in an array
 *
 * Given a sequence of integers as input, the
 * program returns the maximum and minimum element
 * of the sequence.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

#define MAX 20

int N;

struct extremes {
	int max, min;
};


struct extremes find_extremes(int *vec)
{
	int i;
	struct extremes res;

	res.max = -9999;
	res.min = 9999;

	for (i = 0; i < N; i++) {
		res.max = (vec[i] > res.max) ? vec[i] : res.max;
		res.min = (vec[i] < res.min) ? vec[i] : res.min;
	}
	return res;
}


int main()
{
	int i, vec[MAX];
	struct extremes extr;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%d", &vec[i]);

	extr = find_extremes(vec);
	printf("maior valor: %d\n", extr.max);
	printf("menor valor: %d\n", extr.min);

	return 0;
}
