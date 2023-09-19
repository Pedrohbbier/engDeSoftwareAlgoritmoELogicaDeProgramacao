#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50];
	int qtdLetras;
	int i;
	
	printf("Escreva seu nome: ");
	gets (nome);
	
	qtdLetras = strlen(nome);
	
	for(i = 1 ; i <= qtdLetras ; i++){
		printf("\n%s" , nome);
	}
	
}
