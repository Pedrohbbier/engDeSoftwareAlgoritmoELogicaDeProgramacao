#include <stdio.h>

main(){
	int num , i , fatorial , x;
	
	printf("Digite um numero: ");
	scanf("%d" , &num);
	
	x=1;
	
	for(i = num ; i>=1 ; i--){
		fatorial *= i;
		printf("\n Processo %d : %d" , x ,fatorial);
		x++;
	}
}
