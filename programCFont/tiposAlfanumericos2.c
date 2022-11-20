/*
 %s => quando for string
 Na linguagem C, toda string é encerrada por \0
 Ex. Se iniciar uma string de 5 caracteres, a palavra não pode passar de 4 caracteres.
 */

#include <stdio.h>

int main() {
//	Declaração de uma string em C

	char nome[50]; //49 caracteres

	printf("Qual é o seu nome? ");
	gets(nome);

	printf("Seu nome é %s", nome);

	return 0;
}
