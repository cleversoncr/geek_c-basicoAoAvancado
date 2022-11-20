//Aula sobre variáveis

#include <stdio.h>

int main() { //a chave delimita um bloco de código (início)
//	Declarando variáveis
	int idade;
//	int idade = 0;

//	Funçãoe para escrita do console
	printf("Qual é sua idade? "); //o ; finaliza um comando

//	Receber dados
	scanf("%d", &idade); //%d define o tipo que nesse caso é inteiro

//	Saída
	printf("A sua idade é %d\n", idade);

	return 0;
} //fim do bloco
