#include <stdio.h>

main(){
	int i , idade = 0 , mediaIdade = 0 , cond1 = 0 ;
	float peso , altura , porcentagem ,cond2 = 0 , cond3 = 0 ;
	
	for(i = 1; i<=10 ; i++){
		
		printf("Digite a altura da pessoa %d: " , i);
		scanf("%f" , &altura);
		
		printf("\nDigite a idade da pessoas %d: " , i);
		scanf("%d" , &idade);
		mediaIdade += idade;
		
		printf("Digite o peso da pessoa %d: " , i);
		scanf("%f" , &peso);
		
		if(peso >= 90 && altura < 150){
			cond1++;
		}
		
		if(altura > 190){
			cond2++;
			if(idade >=10 && idade <= 30){
				cond3++;
			}
		}
	}
	
	mediaIdade = mediaIdade / 10;
	printf("\nMedia de idade das dez pessoas: %d " , mediaIdade);
	
	printf("\nQuantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50: %d" , cond1);
	
	porcentagem = (cond3/cond2) * 100;
	printf("\nPorcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: %.2f %%" , porcentagem);
	
	
	
	
}
