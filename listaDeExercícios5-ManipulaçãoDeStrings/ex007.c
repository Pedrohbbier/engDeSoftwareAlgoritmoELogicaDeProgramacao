#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50];
	int qtdLetras;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	qtdLetras = strlen(nome);
	
	printf("Seu nome tem %d letras " , qtdLetras);
}
