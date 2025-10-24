#include <stdio.h>
/* Escreva um programa capaz de calcular o preco medio da gasolina considerando tres postos de
combustivel de Salvador, tomando como base a seguinte tabela :

Posto Paralela      Posto Barra           Posto Rio Vermelho
  R$ 1.37             R$ 1.42                  R$ 1.32

O programa deve apresentar como resultado, o preeo medio da gasolina considerando os tres postos. */
main () {
	float pp, pb, prv, md;
	pp = 1.37;
	pb = 1.42;
	prv = 1.32;
	md = (pp + pb + prv)/3;
    printf("\nA media dos postos da %.2f.", md);
}
