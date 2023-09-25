#include <stdio.h>

main(){
	int idade = 0 , i  , cond1 = 0 , cond2 = 0 , cond3 = 0 , cond4 = 0;
	float peso , altura , mediaIdadeCond2 ;
	char corOlho , corCabelo ;
	
	for(i = 1 ; i<=6; i++){
		printf("Qual a idade da pessoa %d: " , i);
		scanf("%d" , &idade);
		
		printf("Qual o peso da pessoa %d: " , i);
		scanf("%f" , &peso);
		
		printf("Qual a altura da pessoa %d: " , i);
		scanf("%f" , &altura);
		
		printf("Qual a cor do olho da pessoa %d" , i);
		printf("\nA - azul; P - preto; V - verde; e C - castanho");
		scanf("%s" , &corOlho);
		
		printf("Qual a cor do cabelo da pessoa %d" , i);
		printf("P - preto; C - castanho; L - loiro; e R - ruivo");
		scanf("%s" , &corCabelo );
		
		if(idade > 50 && peso < 60){
			cond1++;
		}
		
		if(altura < 150){
			mediaIdadeCond2 += idade;
		}
		
		if(corOlho == 'a' || corOlho == 'A' || corOlho == 'azul' || corOlho == 'Azul'){
			cond3++;
		}
		
		if((corCabelo == 'R' || corCabelo == 'r' || corCabelo == 'ruivo' || corCabelo == 'Ruivo') && (corOlho != 'a' || corOlho != 'A' || corOlho != 'Azul' || corOlho != 'azul' )  )
		cond4++;
		}
	}
	printf("\nQuantidade de pessoas com idade superior a 50 anos e com peso inferior a 60 kg: %d" , cond1);
	
	mediaIdadeCond2 = mediaIdadeCond2 / 6;
	printf("\nMedia das idades das pessoas com altura inferior a 1,50 m: %f" , mediaIdadeCond2);
	
	cond3 = (cond3/6) * 100;
	printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %f %%" , cond3);
	
	printf("Quantidade de pessoas ruivas e que não possuem olhos azuis: %d" , cond4);
	
}
