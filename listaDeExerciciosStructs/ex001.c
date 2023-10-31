#include <stdio.h>
#include <string.h>

struct dados{
	char nome[50];
	int idade;
	struct endereco{
		char bairro[30];
		char rua[30];
		int numero;
	} enderecoPessoa ;
} pessoa ;

main(){
	printf("Digite o nome da pessoa: ");
	gets(pessoa.nome);
	
	fflush(stdin);
	
	printf("Digite a idade da pessoa: ");
	scanf("%d" , &pessoa.idade);
	
	fflush(stdin);
	
	printf("Digite o bairro que a pessoa mora:");
	gets(pessoa.enderecoPessoa.bairro);
	
	fflush(stdin);
	
	printf("Digite a rua que a pessoa mora:");
	gets(pessoa.enderecoPessoa.rua);
	
	fflush(stdin);
	
	printf("Digite o numero da pessoa: ");
	scanf("%d" , &pessoa.enderecoPessoa.numero);
	
	printf("\nNome: %s" , pessoa.nome);
	printf("\nIdade: %d" , pessoa.idade);
	printf("\nBairro: %s" , pessoa.enderecoPessoa.bairro);
	printf("\nRua: %s" , pessoa.enderecoPessoa.rua);
	printf("\nNumero: %d" , pessoa.enderecoPessoa.numero);
	
}
