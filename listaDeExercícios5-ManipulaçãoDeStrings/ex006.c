#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50], sexo;
	int idade;
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu sexo (m/f): ");
	sexo = getchar();
	printf("Digite sua idade : ");
	scanf("%d" , &idade);	
	
	if(sexo == 'f' && idade < 25 ){
		printf("%s aceita " , nome);
	} else if (sexo == 'f' && idade > 25) {
		printf("Nao aceita");
	} else {
		printf("Nao aceito");
	}
}
