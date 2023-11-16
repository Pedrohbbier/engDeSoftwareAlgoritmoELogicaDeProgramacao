#include <stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d" , &idade);
	
	if(idade < 16){
	printf("Nao eleitor");
	}
	if(idade >= 18 && idade <= 65){
		printf("Eleitor obrigatorio");
	}
	if((idade < 18 && idade >= 16) || (idade > 65) ){
		printf("Eleitor facultativo");
	}
}
