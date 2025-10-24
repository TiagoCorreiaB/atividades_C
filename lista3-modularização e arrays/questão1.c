#include <stdio.h>
/* Fazer um programa que leia um vetor com 8 elementos, e imprima a multiplicação dos elementos lidos. */
void lerdados(int a[], int b[], int c[]);
int main() {
    int a[8], b[8], c[8];
    lerdados(a, b, c);
    return 0;
}
void lerdados(int a[], int b[], int c[]) {
    for (int i = 0; i < 8; i++) {
        printf("Digite o valor %d do vetor A: ", i + 1);
        scanf("%d", &a[i]);
        printf("Digite o valor %d do vetor B: ", i + 1);
        scanf("%d", &b[i]);
        c[i] = a[i] + b[i];
    }
    printf("Vetor C (soma de A e B):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", c[i]);
    }
}