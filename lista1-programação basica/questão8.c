#include <stdio.h>
/* O numero 3025 tem uma propriedade interessante: 30 + 25 = 55 e (55)2 = 3025. Escreva um programa
que le um numero inteiro e determinar se ele possui ou nao essa propriedade. */
int main (){
	int numero1, numero2, soma;
	printf("Digite primeiro numero com 2 algarizmos");
	scanf("%d", &numero1);
	printf("Digite o segundo numero com dois algarizmos");
	scanf("%d", &numero2);
	
	soma = numero1 + numero2;
	
	if (((numero1 + numero2) == soma) && ((soma * soma) == (numero1 * 100)+ numero2)) {
	    printf("Numero magico");
	}	
	else {
		printf("numero normal");
	}

	return 0;
}