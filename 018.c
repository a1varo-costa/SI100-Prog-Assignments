/**
 * 	Assignment 018 - BMI
 *
 * The program takes as input the height (float), weight (float) and
 * name (string) of a person, computes and prints her Body Mass Index:
 *
 * 			BMI = weight / height^2
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>

struct corpo {
	float altura, peso;
	char nome[20];
};

int main(void)
{
	struct corpo corpoA;
	float imc;

	scanf("%f %f ", &corpoA.altura, &corpoA.peso);
	fgets(corpoA.nome, sizeof(corpoA.nome), stdin);

	imc = corpoA.peso / (corpoA.altura * corpoA.altura);
	printf("%.3f\n", imc);

	return 0;
}
