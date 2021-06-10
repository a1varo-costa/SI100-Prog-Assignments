/**
 *	Assignment 025 - Miltao's Show
 *
 * 'Miltao's Show' is a game where the users choose a
 * math question and try to answer it correctly. The
 * game ends when the user types "FIM" or fails to answer
 * a question.
 *
 * The program reads from stdin the questions to be
 * registered until it finds the string "FIM". After
 * that, prints the string "Prepare-se para o show do Miltao"
 * and reads the number of the question the user chose to be
 * asked, prints the question and reads the answer. If it
 * is wrong, prints "Resposta errada, voce perdeu!" and
 * finishes execution. If the answer is correct, prints
 * "Parabens, voce acertou!" and repeats the process of
 * waiting for the next question to be chosen until the
 * user fails to answer or types "FIM".
 *
 * Example:
 * 	- Input:
 * 		INT
 *		Qual a raiz quadrada de 4?
 *		2 3 4
 *		0
 *		FLOAT
 *		Quanto e 9 dividido por 3?
 *		2.00 3.00 4.22
 *		1
 *		FIM
 *		INT
 *		0
 *		0
 *		FLOAT
 *		0
 *		1
 *		FIM
 *	- Output:
 *		Prepare-se para o Show do Miltao!
 *		Pergunta: Qual a raiz quadrada de 4?
 *		Alternativa 0: 2
 *		Alternativa 1: 3
 *		Alternativa 2: 4
 *		Parabens, voce acertou!
 *		Pergunta: Quanto e 9 dividido por 3?
 *		Alternativa 0: 2.00
 *		Alternativa 1: 3.00
 *		Alternativa 2: 4.22
 *		Parabens, voce acertou!
 *
 * Author: Álvaro A. Costa
 */

#include <stdio.h>
#include <string.h>

#define BUF_MAX 102
#define QST_MAX 10
#define ALT_MAX 3

#define TYPE_INT   0
#define TYPE_FLOAT 1


// dados de uma única pergunta
struct qst {
	// enunciado
	char stmt[BUF_MAX];

	// alternativas
	float alt[ALT_MAX];
	int correct_alt;
};

// vetor de perguntas com controle de
// tipo (int ou float) e tamanho
struct qstvec {
	struct qst qst[QST_MAX];
	int type, size;
};


// lê uma linha de stdin com até MAX caracteres,
// armazenado-a em buf, removendo '\n' sobrando
// no início e no fim da linha.
// Retorna o número de bytes lidos.
int readline(char *buf)
{
	int len, ch;
	len = 0;

	// descarta '\n' no início
	while ((ch = getchar()) == '\n')
		;
	buf[len++] = ch;

	// lê até final de linha
	while (len < BUF_MAX-1 && (ch = getchar()) != EOF && ch != '\n') {
		buf[len++] = ch;
	}
	buf[len] = '\0';
	return len;
}


// Faz a pergunta armazenada em qstvec->qst[idx]
// e valida a resposta do usuário.
// Retorna -1 se idx for inválido, 0 se a resposta
// foi errada e 1 se a resposta foi certa.
int ask_and_check(struct qstvec *qstvec, int idx)
{
	struct qst *qst;
	int i, ans;

	if (idx > qstvec->size - 1)
		return -1;

	qst = &qstvec->qst[idx];

	printf("Pergunta: %s\n", qst->stmt);
	for (i = 0; i < 3; i++) {
		if (qstvec->type == TYPE_INT)
			printf("Alternativa %d: %d\n", i, (int)qst->alt[i]);
		else
			printf("Alternativa %d: %.2f\n", i, qst->alt[i]);
	}
	scanf("%d", &ans);
	if (ans != qst->correct_alt)
		return 0;
	return 1;
}


int main()
{
	struct qstvec qstint, qstfloat, *p_qstvec;
	struct qst *p_qst;

	char buf[BUF_MAX];
	int query, i, j;

	qstint.type = TYPE_INT;
	qstfloat.type = TYPE_FLOAT;

	for (i = 0; ; i++) {
		readline(buf);
		if (strcmp(buf, "FIM") == 0)
			break;

		// tipo da pergunta
		if (strcmp(buf, "INT") == 0)
			p_qstvec = &qstint;
		else
			p_qstvec = &qstfloat;

		j = p_qstvec->size++;
		p_qst = &p_qstvec->qst[j];

		// enunciado da pergunta
		readline(buf);
		strcpy(p_qst->stmt, buf);

		// alternativas
		scanf("%f %f %f", &p_qst->alt[0],
		                  &p_qst->alt[1],
		                  &p_qst->alt[2]);
		scanf("%d", &p_qst->correct_alt);
	}

	printf("Prepare-se para o Show do Miltao!\n");
	int status;

	for (i = 0; ; i++) {
		readline(buf);
		if (strcmp(buf, "FIM") == 0)
			break;

		// tipo da pergunta
		if (strcmp(buf, "INT") == 0)
			p_qstvec = &qstint;
		else
			p_qstvec = &qstfloat;

		// pergunta e valida resposta
		scanf("%d", &query);
		status = ask_and_check(p_qstvec, query);
		if (status == 0) {
			printf("Resposta errada, voce perdeu!\n");
			break;
		}
		else if (status < 0) {
			printf("Entrada invalida!\n");
			break;
		}
		printf("Parabens, voce acertou!\n");
	}
	return 0;
}
