//Estruturas de decisão if, else, else if
#include <stdio.h>

int main() {
	int idade;
	printf("Qual é a sua idade? ");
	scanf("%d", &idade);

	if (idade < 18) {
		printf("Você é menor de idade.\n");
	} else if (idade > 18 && idade < 60) {
		printf("Você é adulto.\n");
	} else {
		printf("Você é idoso.\n");
	}
	printf("Sua idade é %d.", idade);

	return 0;
}
