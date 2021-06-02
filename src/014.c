/**
 * 	Assignment 014 - palindromes 
 *
 * The program takes as input a string of at most 80 
 * characters and prints "Esta palavra e um palindromo"
 * if it is a palindrome and "Esta palavra nao e um palindromo"
 * otherwise.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_N 80

int main(void)
{
	char str[MAX_N], reversed[MAX_N];
	int i, j, len;

	fgets(str, sizeof(str), stdin);
	
	len = strlen(str);
	if (str[len - 1] == '\n')
		str[--len] = 0;

	// make sure all characters are lowercase
	for (i = 0; i < len; i++)
		str[i] = tolower(str[i]);

	for (i = len-1, j = 0; i >= 0; i--, j++)
		reversed[j] = str[i];
	reversed[j] = '\0';

	if (strcmp(str, reversed) == 0)
		puts("Esta palavra e um palindromo");
	else
		puts("Esta palavra nao e um palindromo");

	return 0;
}
