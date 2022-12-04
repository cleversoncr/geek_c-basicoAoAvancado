#include <stdio.h>

// O * é o apontador do endereço de memória
void incrementa(int *contador) {
	printf("Antes de incremtar\n");
	printf("O contador vale %d\n", (*contador)); //valor
	printf("O endereço de memória é %d\n", contador); //endereço de memória

	printf("Depois de incremtar\n");
	printf("O contador vale %d\n", ++(*contador));
	printf("O endereço de memória é %d\n", contador);
}

int main() {
	/*
	 Quando declaramos uma variável, a linguagem C
	 aloca um espaço em memória para colocar
	 este valor
	 */
	int contador = 10;

	printf("O contador vale %d\n", contador);
//	Para acessar o endereço de memória, utilizamos o &
	printf("O endereço de memória é %d\n", &contador);

//	Cópia por valor
	incrementa(&contador);

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);
	return 0;
}
