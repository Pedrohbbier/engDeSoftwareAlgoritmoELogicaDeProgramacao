#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50];
	int i;
	printf("Digite seu nome: ");
	scanf("%s" , &nome);
	
	printf("Seu nome 10 vezes: ");
	for(i = 1 ; i <= 10 ; i++){
		printf("\n%s" , nome);
	}
}
