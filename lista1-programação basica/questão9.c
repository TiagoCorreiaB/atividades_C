#include <stdio.h>
/* Escrever um programa que leia uma velocidade em km/h e imprima o resultado em m/s, da seguinte
forma: xxx km/h equivalem a yyy m/s
obs: 1km/h = 3,6 m/s */
int main (){
	int km;
	float ms;
	printf("Digite a velocidade em km");
	scanf("%d", &km);
	ms = km / 3.6;
	printf("%d km equivalem a %.2f m/s", km, ms);
	return 0;
}
