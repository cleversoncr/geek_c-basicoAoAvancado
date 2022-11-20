// Estrutura de repetição do While
#include <stdio.h>

/*
 Utilizado quando você precisa de um loop
 onde não se tenha um número fixo de elementos
 mas que tenha um critério de parada e
 a condição de parada é checada após a primeira execução
 */

int main() {
	int numero, soma = 0;

	do {
		printf("Informe um número: ");
		scanf("%d", &numero);

		soma = soma + numero;
	} while (numero != 0);

	printf("A soma é %d\n", soma);
	return 0;
}
