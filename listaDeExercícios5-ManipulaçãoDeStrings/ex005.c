#include <stdio.h>
#include <stdlib.h>

main(){
	char nome[50] , endereco[50] , telefone[15];
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu endereco: ");
	gets(endereco);
	printf("Digite seu telefone: ");
	gets(telefone);
	
	printf("\nnome: %s" , nome );
	printf("\nendereco: %s" , endereco );
	printf("\ntelefone: %s" , telefone );
	
}
