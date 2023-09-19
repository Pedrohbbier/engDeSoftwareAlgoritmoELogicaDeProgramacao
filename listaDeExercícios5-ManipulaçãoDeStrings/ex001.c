#include <stdio.h>
#include <stdlib.h>

main(){
	char nome[50];
	printf("Digite seu nome abaixo, vai aparecer as primeiras quatro letras: ");
	scanf("%4s" , &nome);
	printf("%s" , nome);
}
