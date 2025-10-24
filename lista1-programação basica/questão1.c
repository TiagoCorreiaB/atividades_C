#include <stdio.h>
/* Escrever um programa que leia dois numeros e imprima a sua soma. */
main () {
    float n1, n2, r;
    printf("Digite um numero");
    scanf("%f", &n1);
    printf("Digite outro numero");
    scanf("%f", &n2);
    r = n1 + n2;
    printf("\n%.2f + %.2f = %.2f",n1,n2,r);
    return 0;
}
