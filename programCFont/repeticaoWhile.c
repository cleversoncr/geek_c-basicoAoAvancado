// Estrutura de repetição While
#include <stdio.h>

/*
Utilizado quando você precisa de um loop
onde não se tenha um número fixo de elementos
mas que tenha um critério de parada e
antes de iniciar o loop a condição é checada.
*/

int main()
{
	int numero, soma = 0;

	printf("Informe um número: ");
	scanf("%d", &numero);

	while (numero != 0)
	{
		soma = soma + numero;

		printf("Informe um número: ");
		scanf("%d", &numero);
	}

	printf("A soma é %d\n", soma);
	return 0;
}