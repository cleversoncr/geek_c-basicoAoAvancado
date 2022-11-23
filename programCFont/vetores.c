// Vetores
#include <stdio.h>

// Array uni-dimensional
int main() {

//	vetores e strings
	char nome[50];
//	"a"
	printf("Qual seu nome? ");
	gets(nome);
	printf("Olá %s\n", nome);

//	vetores e caracteres
	char letras[26]; //0... 25
//	'a'
	int contador = 0;
	for (int i = 97; i <= 122; i++) {
		letras[contador] = i;
		contador = contador + 1;
	}
//	Imprimindo as letras e seus valores em decimal
	for (int i = 0; i < 26; i++) {
		printf("%d == %c\n", letras[i], letras[i]);
	}

//	char l = 'l';
//	char a = 97;

//	vetores e inteiros
	int numeros[5]; //0... 4
	numeros[0] = 1;
	numeros[1] = 3;
	numeros[2] = 5;
	numeros[3] = 7;
	numeros[4] = 9;

//	vetores e reais
	float valores[5]; //0... 4
	for (int i = 0; i < 5; i++) {
		valores[i] = (float) numeros[i] / 2;
	}
	for (int i = 4; i >= 0; i--) {
		printf("%.2f\n", valores[i]);
	}

	return 0;
}
