#include <stdio.h>
/* Reescreva o programa anterior solicitando ao usuario que informe o numero de tres algarismos. */
int main (){
	int resultado, resultado1, resultado2, resultado3, numero;
	printf("Digite um numero de tres algarizmos");
	scanf("%d", &numero);
	resultado1 = (numero % 10);
	resultado2 = ((numero / 10) % 10);
	resultado3 = (numero / 100);
	resultado = resultado1 *100 + resultado2 *10 + resultado3;
	printf("\nO resultado da %d", resultado);
	return 0;
}
