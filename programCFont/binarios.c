#include <stdio.h>

int main() {
	int valor = 2;
	printf("Valor = %d\n", valor);

//	deslocamento de bits para a esquerda
	valor = valor << 2;
	printf("Valor = %d\n", valor);

	valor = 2;
//	deslocamento de bist para a direita
	valor = valor >> 1;
	printf("Valor = %d\n", valor);

	valor = 2;
	valor = ~valor;
	printf("Valor = %d\n", valor);

	return 0;
}
