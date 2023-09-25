#include <stdio.h>

main(){
	int num , i , numRes , tabuada;
	
	printf("Digite um numero: ");
	scanf("%d" , &num);
	printf("Digite ate que numero quer a tabuada: ");
	scanf("%d" , &tabuada);
	
	for(i = 1 ; i <=tabuada ; i++){
		numRes = num * i;
		printf("\n%d X %d = %d" , num ,i, numRes );
	}
}
