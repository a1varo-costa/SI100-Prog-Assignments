/**
 * 	Atividade 011 - array
 *
 * The program receives as input 2 sequences of 10 integers
 * and stores them in 2 arrays. Then it prints the interleaving
 * of these arrays.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>


int main(void)
{
	int i, vec1[10], vec2[10];

	for (i = 0; i < 10; i++)
		scanf("%d", &vec1[i]);

	for (i = 0; i < 10; i++)
		scanf("%d", &vec2[i]);

	for (i = 0; i < 10; i++) {
		printf("%d|%d|", vec1[i], vec2[i]);
	}
	puts("");
	return 0;
}

