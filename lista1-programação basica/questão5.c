#include <stdio.h>
/* Reescreva o programa anterior considerando que o mesmo devera solicitar que o usuario informe o total
de acervo existente e quantas fitas existem no momento na loja de Itapoa e na Pituba. */
int main () {
	float pituba, itapoan, totalporcentagem, loja, clientes;
	printf("\nDigite o acervo total da loja");
	scanf("%f", &loja);
	printf("\nDigite quantas unidades tem na loja de pituba: ");
	scanf("%f", &pituba);
	printf("\nDigite quantas unidades tem na loja de itapoan: ");
	scanf("%f", &itapoan);
	totalporcentagem = (loja-(pituba+itapoan))/loja * 100;
	clientes = loja - (pituba + itapoan);
	printf ("\nA quantidade de fitas com os clientes sao %.2f e o percentual com esses clientes da %.2f",clientes, totalporcentagem);
	return 0;
}
