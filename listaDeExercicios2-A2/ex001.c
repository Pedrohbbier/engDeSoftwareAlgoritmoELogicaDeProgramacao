#include<stdio.h>
#include<stdlib.h>

main(){
	int i, mat[11], x=1;
	
	for(i=1; i<11; i++){
		
		printf("Digite o numero da %dª matricula: ", i);
		scanf("%d", &mat[i]);
		
		if(mat[i] == mat[i-1] || mat[i]== mat[i-2] || mat[i]== mat[i-3] || mat[i]== mat[i-4] || mat[i]== mat[i-5] || mat[i]== mat[i-6] || mat[i]== mat[i-7] || mat[i]== mat[i-8] || mat[i]== mat[i-9]){
			printf("\nO Numero esta repetido!!!");
			x++;
			return 0;
		
		}		
		}
	
		printf("\nAs matriculas armazenadas sao:");
	for(i=1; i<11; i++){
		printf("\n| id: %d |", mat[i]);
		
	}	
}
