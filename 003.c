/**
 * 	Assignment 003 - date
 *
 * Given a date in the format dd/mm/yyyy, this program converts
 * the month number to its name and print the date in the format
 * '<dd> de <month name> de <year>', using switch/case.
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <string.h>

int main()
{
	int day, month, year;
	char month_name[16];

	scanf("%2d/%2d/%4d", &day, &month, &year);

	switch (month) {
	case 1:
		strcpy(month_name, "Janeiro");
		break;
	case 2:
		strcpy(month_name, "Fevereiro");
		break;
	case 3:
		strcpy(month_name, "Marco");
		break;
	case 4:
		strcpy(month_name, "Abril");
		break;
	case 5:
		strcpy(month_name, "Maio");
		break;
	case 6:
		strcpy(month_name, "Junho");
		break;
	case 7:
		strcpy(month_name, "Julho");
		break;
	case 8:
		strcpy(month_name, "Agosto");
		break;
	case 9:
		strcpy(month_name, "Setembro");
		break;
	case 10:
		strcpy(month_name, "Outubro");
		break;
	case 11:
		strcpy(month_name, "Novembro");
		break;
	case 12:
		strcpy(month_name, "Dezembro");
		break;
	default:
		puts("Mes invalido");
		month_name[0] = '\0';
	}

	if (month_name[0] != '\0')
		printf("%d de %s de %d\n", day, month_name, year);

	return 0;
}
