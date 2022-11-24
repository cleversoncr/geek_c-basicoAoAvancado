//	Matrizes

#include <stdio.h>

int main() {

//	vetores de inteiros

	/*
	 [00][01]
	 [10][11]
	 */

	int numeros[2][2];

	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
		}
	}

//	vetores e reais

//	float valores[5][5];

	return 0;
}
