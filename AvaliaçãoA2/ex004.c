#include <stdio.h>
main(){
	int num , soma;
    do{
    	printf("Digite um numero: ");
    	scanf("%d" , &num);
    	soma = soma + num;
	} while (soma <= 100);
	printf("%d" , soma);
}
