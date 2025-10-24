#include <stdio.h>
/* Leia dois vetores VET1 e VET2, ambos com 10 elementos cada, sendo que só devem ser aceitos valores
em ordem crescente. Após gere e imprima o vetor VET3, resultado da intercalação de VET1 e VET2. */
void lerdados(int a[], int b[]);
void ordem(int a[], int b[]);
int main(){
    int a[5], b[5];
    lerdados(a, b);
    return 0;
}
void lerdados(int a[], int b[]){
    printf("\nVetor A");
    for (int i = 0; i < 5; i++){
        printf("\nDigite um numero para a posicao %d: ", i);
        scanf("%d", &a[i]);
        while (i > 0  && a[i - 1] > a[i]){
            printf("\nDigite um valor valido para a posicao %d: ", i);
            scanf("%d", &a[i]);
        }
    }
    printf("\nVetor B");
    for (int i = 0; i < 5; i++){
        printf("Digite um numero para a posicao %d: ", i);
        scanf("%d", &b[i]);
        while (i > 0  && b[i - 1] > b[i]){
            printf("\nDigite um valor valido para a posicao %d: ", i);
            scanf("%d", &b[i]);
        }
    }
    ordem(a, b);
}
void ordem(int a[], int b[]){
    int c[10];
    int j = 0;
    for (int i = 0; i < 5; i++){
        c[j++] = a[i];
        c[j++] = b[i];
    }
    for (int i = 0; i < 10; i++){
        printf("%d ", c[i]);
    }
}