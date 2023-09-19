#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50];
	int qtdLetras;
	int i , nVogais = 0;
	
	printf("Digite seu nome: ");
	scanf("%s" , &nome);
	
	qtdLetras = strlen(nome);
	printf("Vogais: ");
	for(i ; i <= qtdLetras ; i++){
		switch(nome[i]){
			case 'a':
				printf("a");
				nVogais++;
				break;
			case 'e':
				printf("e");
				nVogais++;
				break;
			case 'i':
				printf("i");
				nVogais++;
				break;
			case 'o':
				printf("o");
				nVogais++;
				break;
			case 'u':
				printf("u");
				nVogais++;
				break;
		}
	}
	printf("\nEsse nome tem %d vogais " , nVogais);
}
