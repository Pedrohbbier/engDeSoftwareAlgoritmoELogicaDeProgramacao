#include <stdio.h>

int main(){
	int vetor[10] , n = 0 , countVetor;
	int i;
	
	printf("Digite 10 numeros que ocuparam o vetor: ");
	for(i = 0; i < 10 ; i++){
		scanf("%d" , &vetor[i]);
	}
	
	printf("Digite o valor de n: ");
	scanf("%d" , &n);
	
	for(i = 0; i < 10 ; i++){
		if(n == vetor[i]){
			countVetor++;
		}
	}
	
	printf("%d está %d vezes dentro do vetor" , n , countVetor);
}
