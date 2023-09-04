#include <stdio.h>

main(){
	int num , i ;
	
	printf("Escreva um numero, para aparecer a sequencia de numeors primos ate ele: ");
	scanf ("%" , &num);
	
	for(i = 1 ; i == num ; i++){
		if (num % i != 0){
			printf("%d" , i);
		}
	}
}
