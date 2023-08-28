#include <stdio.h>

main(){
	float num1 , num2 , res;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	res = num1 + num2;
	printf("Resultado da soma: %.2f" , res);
}
