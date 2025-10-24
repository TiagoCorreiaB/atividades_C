#include <stdio.h>
/* Fazer um programa que leia dois vetores A e B de 8 elementos cada um e calcula um terceiro vetor C,
cujos elementos são resultado da multiplicação dos elementos correspondentes de A e B. */
void lerdados(int a[], int b[]);
void multiplicar(int a[], int b[]);
void printar(int c[]);
int main() {
    int A[5], B[5];
    lerdados(A, B);
    multiplicar(A, B);
    return 0;
}
void lerdados(int a[], int b[]){
    printf("Vetor A");
    for (int i = 0; i < 5; i++){
        printf("\nDigite o valor para a posicao %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Vetor B");
    for (int i = 0; i < 5; i++){
        printf("\nDigite um valor para a posicao %d: ", i);
        scanf("%d", &b[i]);
    }
}
void multiplicar(int a[], int b[]){
    int c[5];
    for (int i = 0; i < 5; i++){
        c[i] = a[i] * b[i];
    }
    printar(c);
}
void printar(int c[]){
    for (int i = 0; i < 5; i++){
        printf("%d ",c[i]);
    }
}