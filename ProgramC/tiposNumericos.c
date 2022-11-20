/*
 Tipos de dados

 Tipos numéricos:
 - Inteiros;
 - Reais;
 %d => quando for int
 %f => quando for float
 %.2f => o ponto após a % significa a quantidade de casas decimais após o ponto.
 %lf => quando for double
 */

#include <stdio.h>

int main() {
//	Inteiro
//	int nota1, nota2; //7, 890, ...

//	Reais
	float nota1, media; //3.14, 1.23, ...
	double nota2; //23.4, 1.23, ... o Double suporta uma quantidade maior de dados do que o float

	printf("Qual a primeria nota? ");
	scanf("%f", &nota1);

	printf("Qual a segunda nota? ");
	scanf("%lf", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua média é %.2f", media);

	return 0;
}
