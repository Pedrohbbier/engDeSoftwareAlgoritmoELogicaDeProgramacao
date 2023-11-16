#include <stdio.h>

int main(){
	float MAIOR , INTER , MENOR ;
	printf("Digite o primeiro numero: ");
	scanf("%f" , &MAIOR);
	printf("\n Digite o segundo numero:");
	scanf("%f" , &INTER);
	printf("\n Digite o terceiro numero:");
	scanf("%f" , &MENOR);
	
	
	
	
	if(MAIOR > INTER && MAIOR > MENOR){
		printf("\n %f : maior numero" , MAIOR);
	}
	if(MAIOR > INTER && MAIOR < MENOR || MAIOR < INTER && MAIOR > MENOR ){
		printf("\n  %f : numero intermediario" , MAIOR);
	}
	if(MAIOR < INTER && MAIOR < MENOR){
		printf("\n %f : menor numero"  , MAIOR);
	}
	
	
	
	
	if(INTER > MAIOR && INTER > MENOR){
		printf("\n %f : maior numero" , INTER);
	}
	if(INTER > MAIOR && INTER < MENOR || INTER < MAIOR && INTER > MENOR ){
		printf("\n  %f : numero intermediario" , INTER);
	}
	if(INTER < MAIOR && INTER < MENOR){
		printf("\n %f : menor numero"  , INTER);
	}
	
	
	
	if(MENOR > MAIOR && MENOR > INTER){
		printf("\n %f : maior numero" , MENOR);
	}
	if(MENOR > MAIOR && MENOR < INTER || MENOR < MAIOR && MENOR > INTER ){
		printf("\n  %f : numero intermediario" , MENOR);
	}
	if(MENOR < MAIOR && MENOR < INTER){
		printf("\n %f : menor numero"  , MENOR);
	}
	
	if(MAIOR == INTER && MAIOR == MENOR){
		printf("Todos os numeros sao iguais");
	}
}
