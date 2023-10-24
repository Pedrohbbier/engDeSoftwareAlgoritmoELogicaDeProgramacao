#include <stdio.h>

main(){
	int i , j = 0 , nota1[9] , nota2[9] , media[9];
	
	for(i = 1; i <= 3 ; i++){
		printf("Digite a nota da prova 1 do aluno %d: " , i);
		scanf("%d" , &nota1[j]);
		j++;
	}
	
	j = 0;
	
	for(i = 1; i <= 3 ; i++){
		printf("Digite a nota da prova 2 do aluno %d: " , i);
		scanf("%d" , &nota2[j]);
		j++;
	}
	
	j = 0;
	
	for(i = 1; i <= 3 ; i++){
		
		media[j] = (nota1[j] + nota2[j]) / 2 ;
		
		printf("\nMedia aluno %d: %d " , i , media[j]);	
		
		if(media[j] >= 7){
			printf("\nAluno %d aprovado !!!" , i);
		} else{
			printf("\nAluno %d reprovado." , i);
		}
		j++;
	}
}
