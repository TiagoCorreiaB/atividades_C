#include <stdio.h>
/* Dado o numero de tres algarismo, 379, escreva um programa que armazene na variavel resultado o
valor deste numero inversamente. Utilize as operacoes de { *, /, %, +, -} para resolver a questao. */
int main (){
	int resultado, resultado1, resultado2, resultado3, numero;
	numero = 379;
	resultado1 = (numero % 10);
	resultado2 = ((numero / 10) % 10);
	resultado3 = (numero / 100);
	resultado = resultado1 *100 + resultado2 *10 + resultado3;
	printf("\nO resultado da %d", resultado);
	return 0;
}
