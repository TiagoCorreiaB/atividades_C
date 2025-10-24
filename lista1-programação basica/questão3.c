#include <stdio.h>
/* Reescreva o programa anterior solicitando ao usuario que informe o nome e o valor da gasolina em cada
um dos tres postos. */
main () {
	char p1[50], p2[50], p3[50];
	float n1, n2, n3, md;
	
    printf("Digite o nome do primeioro posto");
    scanf("%s", &p1);
    printf("Digite o valor do primeiro posto");
    scanf("%f", &n1);
    
    printf("Digite o nome do segundo posto");
    scanf("%s", &p2);
    printf("Digite o valor do segundo posto");
    scanf("%f", &n2);
    
    printf("Digite o nome do terceiro posto");
    scanf("%s", &p3);
    printf("Digite o valor do terceiro posto");
    scanf("%f", &n3);
    
	md = (n1+n2+n3)/3;
    printf("\nA media dos postos %s, %s e %s da %.2f.", p1, p2, p3, md);
}
