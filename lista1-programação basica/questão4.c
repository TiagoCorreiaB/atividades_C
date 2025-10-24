#include <stdio.h>
/* Uma locadora tem duas unidades na cidade, uma na Pituba e outra em Itapoa. Faca um programa que
informe quantas fitas existem no momento com clientes considerando que o acervo total e de 4000 fitas
divididas igualmente entre as duas unidades e que existem respectivamente 1.620 e 1710 fitas no
momento na loja da Pituba e na loja de Itapoa. O programa deve informar na tela a quantidade de fitas
com os clientes da Pituba, com os clientes de Itapoa e o percentual total de fitas com clientes. */
main () {
	float clientpit, clientita, totalcliente;
	totalcliente = (1620.0 + 1710.0)/4000*100;
	clientpit = 2000 - 1620;
	clientita = 2000 - 1710;
	printf("\n%.2f Da o total de pituba",clientpit);
	printf("\n%.2f Da o total de itapoan",clientita);
	printf("\nO total do cliente da %.2f por cento",totalcliente);
}
