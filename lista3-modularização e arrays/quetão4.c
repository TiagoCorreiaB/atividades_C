#include <stdio.h>
/* Escreva um programa que lê um vetor com 12 elementos e determine o maior e o menor elemento desse
vetor, e também as suas respectivas posições. Admita que exista uma única ocorrência para cada valor. */
void levetor(int a[]);
int achamaior(int a[]);
int achamenor(int a[]);
void posicao(int a[],int maior,int menor);
int main(){
    int a[5], maior, menor;
    levetor(a);
    maior = achamaior(a);
    menor = achamenor(a);
    posicao(a, maior, menor);
    return 0;
}
void levetor(int a[]){
    printf("\nVetor A");
    for (int i = 0; i < 5; i++){
        printf("\nDigite o valor para a posicao %d: ", i);
        scanf("%d", &a[i]);
    }
}
int achamaior(int a[]){
    int guardar = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] > guardar){
            guardar = a[i];
        }
    }
    return guardar;
}
int achamenor(int a[]){
    int guardar = a[0];
    for (int i = 0; i < 5; i++){
        if (a[i] < guardar){
            guardar = a[i];
        }
    }
    return guardar;
}
void posicao(int a[],int maior,int menor){
    int posicaoMaior = 0, posicaoMenor = 0;
    for (int i = 0; i < 5; i++){
        if (a[i] == maior){
            posicaoMaior = i;
        }
        if (a[i] == menor){
            posicaoMenor = i;
        }
    }
    printf("\nO maior numero e o %d na posicao %d", maior, posicaoMaior);
    printf("\nO menor numero e o %d na posicao %d", menor, posicaoMenor);
}