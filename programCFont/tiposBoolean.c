#include <stdio.h>

/*
 Tipos de Dados

 Booleanos (verdadeira/falso) true/false
 Na linguagem C não existe um tipo de dados boolean
 Mas a linguagem C reconhece o valor 0 como false
 e QUALQUER valor diferente de 0 como true
 */

int main() {
	int booleano = 0;

	if (booleano) {
		printf("Verdadeiro...");
	} else {
		printf("Falso...");
	}
	return 0;
}
