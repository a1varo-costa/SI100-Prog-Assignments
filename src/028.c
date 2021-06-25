/**
 *	Assignment 028 - mean
 *
 *  Given the number of students N, their names, IDs and scores
 *  on exam 1 (P1) and exam 2 (P2), the program computes the scores
 *  mean and prints the name, ID and mean of each student.
 *
 *  This example show the usage of dynamic allocated structs.
 *
 *  Author: Álvaro A. Costa
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME 102

struct student {
	char name[MAX_NAME];
	int ra;
	float score_p1, score_p2, score_mean;
};


void readline(char *dest, int size)
{
	int ch, len;

	while (isspace(ch=getchar()))
		;
	ungetc(ch, stdin); // devolve o caractere não espaço

	fgets(dest, size, stdin);

	len = strlen(dest);
	if (dest[len-1] == '\n')
		dest[len-1] = '\0';
}


int main()
{
	struct student *students;
	int n, i;

	scanf("%d", &n);

	students = (struct student *) malloc(n * sizeof(*students));
	if (students == NULL) {
		printf("ERR: alocacao falhou!\n");
		return 1;
	}

	for (i = 0; i < n; i++) {
		readline(students[i].name, MAX_NAME);

		scanf("%d", &students[i].ra);
		scanf("%f", &students[i].score_p1);
		scanf("%f", &students[i].score_p2);

		students[i].score_mean = (students[i].score_p1 + students[i].score_p2) / 2;
	}

	for (i = 0; i < n; i++) {
		printf("%d\t%s\t%.2f\n", students[i].ra, students[i].name, students[i].score_mean);
	}

	return 0;
}
