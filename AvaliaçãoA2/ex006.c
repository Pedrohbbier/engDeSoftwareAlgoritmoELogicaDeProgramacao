#include <stdio.h>
#include <stdlib.h>
main(){
	char nome[100], sexo;
	float altura, pesoIdeal;
	
	printf ("\nDigite seu nome:");
	gets (nome);
	
	printf ("\nDigite sua altura:");
	scanf("%f", &altura);
	
	printf ("\nDigite seu sexo ('M' ou 'm' masculino/'F' ou 'f' feminino):");
    scanf ("%s", &sexo);
	
	if (sexo == 'F' || sexo == 'f'){
		pesoIdeal = (62.1 * altura) - 44.7;
		printf ("\n Seu peso ideal sera: %.2f", pesoIdeal);
	} if (sexo == 'M' || sexo == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
		printf ("\n Seu peso ideal sera: %.2f", pesoIdeal);
	}
}


