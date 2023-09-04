#include <stdio.h>

main(){
	int num , i , x;
	
	printf("Digite um numero inteiro para exibir a multiplicacao dele de 1 a 10: ");
	scanf("%d" , &num);
	
	for(i = 1 ; i <= 10 ; i++){
		x = num * i;
		printf("\n %d X %d = %d" ,num ,  i  , x);
	}
}
