//Operações Matemáticas

/*
 somar +
 subtrair -
 multiplicar *
 dividir /
 elevar ao quadrado x ** 2
 módulo (resto da divisão de x por y) %

 */
#include <stdio.h>
int main() {
	int num1, num2;
	float res;

	printf("Informe o num1: ");
	scanf("%d", &num1);

	printf("Informe o num2: ");
	scanf("%d", &num2);

	//	soma
	res = num1 + num2;
	printf("A soma é %d\n", (int) res); //cast

//	subtrair
	res = num1 - num2;
	printf("A subtração é %d\n", (int) res);

//	multiplicar
	res = num1 * num2;
	printf("A multiplicação é %d\n", (int) res);

//	dividir
	res = (float) num1 / (float) num2; //cast
	printf("A divisão é %.2f\n", res);

//	elevar ao quadrado
	res = num1 * num1;
	printf("O quadrado de num1 é %d\n", (int) res);

//	modulo
	if (num1 % 2 == 0) {
		printf("O número é par %d\n", num1);
	} else {
		printf("O número é impar", num1);
	}
	return 0;
}
