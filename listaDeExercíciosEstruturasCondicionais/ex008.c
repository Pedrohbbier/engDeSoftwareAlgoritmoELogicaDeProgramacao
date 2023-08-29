#include <stdio.h>

main(){
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d" , &idade);
	
	if(idade < 10){
		printf("Voce pagara por mes 30 reais de plano de saude");
	} else if (idade < 29){
		printf("Voce pagara por mes 60 reais");
	} else if (idade < 59){
		printf("Voce pagara por mes 120 reais");
	} else if (idade < 65){
		printf("Voce pagara por mes 250 reais");
	} else {
		printf("Você pagara por mes 400 reais");
	}
}
