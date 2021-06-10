/**
 *	Assignment 022 - arrays as parameter
 *
 * The progran takes as input a sequence of N
 * integers and returns the cube of each one.
 * An auxiliar function that takes an array as
 * parameter is used.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

#define MAX 10


void cube(int in[], int out[])
{
	int i;
	for (i = 0; i < MAX; i++)
		out[i] = in[i] * in[i] * in[i];
}

int main()
{
	int vec_in[MAX], vec_ans[MAX];
	int i;

	for (i = 0; i < MAX; i++)
		scanf("%d", &vec_in[i]);

	cube(vec_in, vec_ans);

	for (i = 0; i < MAX; i++)
		printf("%d\n", vec_ans[i]);

	return 0;
}
