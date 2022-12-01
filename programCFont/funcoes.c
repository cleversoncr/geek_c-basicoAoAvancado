// Escrevendo funções

// Estrutura das funções
/*
 void		- Tipo de retorno
 mensagem 	- Nome
 () 		- Parâmetros de entrada (opcional)
 {} 		- Implementação
 return 	- Retorno (opcional)
 */

#include <stdio.h>

void mensagem() {
	printf("Bem vindo!\n");
}

int soma(int num1, int num2) {
	int res = num1 + num2;
	return res;
}

void proximo_char(char caractere) {
	printf("%c", caractere + 1);
}

int main() {
	printf("Olá...\n");

	mensagem();

	//int retorno = soma(1, 2);
	//printf("Retorno = %d", retorno);
	printf("Retorno = %d\n", soma(4, 6));

	char cara = 97; //tabela ASCII
	proximo_char(cara);
	return 0;

}
