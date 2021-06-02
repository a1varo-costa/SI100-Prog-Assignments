/**
 * 	Assignment 013 - reverse string
 *
 * The program takes as input a string of at most
 * 80 characters and prints this string reversed.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <string.h>

#define MAX_N 80

int main(void)
{
	char str[MAX_N];
	int i, len;

	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	if (str[len-1] == '\n')
		str[--len] = '\0';

	for (i = len - 1; i >= 0; i--)
	       printf("%c", str[i]);
	puts("");
	return 0;
}
