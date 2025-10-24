#include <stdio.h>
/* Fazer um programa que leia um número e, a seguir, leia uma lista de números até achar um igual ao
primeiro lido. */
int main () {
	int numA, numB;
	printf("\nDigite um numero");
	scanf("%d", &numA);
	numB = 0;
	do {
		printf("Digite outro numero");
	    scanf("%d", &numB);
	} while (numA == numB);
	if (numA == numB) {
		printf("\nNumero encontrado");
	}
	return 0;
}