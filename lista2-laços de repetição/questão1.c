#include <stdio.h>
/* Escrever um programa que, dado um conjunto de números inteiros positivos, determine qual o menor
valor do conjunto. O final do conjunto de valores é conhecido através do valor zero (0), que não deve ser
considerado. */
int main () {
	int aux, valor;
	printf("\nDigite um numero");
	scanf("%d", &valor);
	aux = valor;
	do {
		printf("\nDigite um numero (0 para parar)");
		scanf("%d", &valor);
		if (valor != 0) {
			if (aux > valor) {
			aux = valor;
		    }
		}
	} while (valor != 0);
    printf("\nO menor valor que escreveu e o %d",aux);
    return 0;
}