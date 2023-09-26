#include <stdio.h>

main(){
	int i , x , n = 0 , cont = 0 ,somaNumPar = 0  , somaNumPrimo = 0;
	
	for(i = 1 ; i<=10 ; i++){
		printf("\nDigite o numero %d: " , i);
		scanf("%d" , &n);
		
		if(n%2 == 0){
			somaNumPar += n;
		} else {
		
        for (x=1 ; i<=n ; x++){
        	if(n%x == 0){
        		cont++;
			}
		}
		if(cont == 2){
			somaNumPrimo += n;
		}
	}
	}
	printf("\nSoma dos números pares: %d" , somaNumPar);
	printf("\nSoma dos números primos: %d" , somaNumPrimo);
}
