#include <stdio.h>
#include <stdlib.h>

main(){
	int i , idade = 0 , qtdPessoasMais50=0 , qtdAltura = 0 , x = 0 ;
	float altura , peso , mediaAltura = 0 , porcentagem = 0 , a=0;
	
	for(i = 1 ; i<=5 ; i++){
		printf("Qual a idade da pessoa %d: " , i);
		scanf("%d" , &idade);
		printf("Qual a altura da pessoa %d: " , i);
		scanf("%f" , &altura);
		printf("Qual o peso da pessoa %d: " , i);
		scanf("%f" , &peso);

		
		if(idade >= 50){
			qtdPessoasMais50++;
		} else if (idade >= 10 && idade <= 20){
			x++;
			qtdAltura += altura;
		}
		
		if(peso < 40){
			a++;
		}
		
		
	}
	
	printf("\nTem %d pessoas com mais de 50 anos" , qtdPessoasMais50);
	
	mediaAltura = qtdAltura / x;
	printf("\nA media de altura das pessoas entre 10 e 20 anos e: %.2f" , mediaAltura);
	
	porcentagem = (a/5)*100;
	printf("\nA porcentagem de pessoas com menos de 40kg e %.2f %%" , porcentagem);
	
}
