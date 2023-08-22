#include <stdio.h>

main(){
	float num1 , num2 , resSoma , resSub , resMul , resDiv;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	resSoma = num1 + num2;
	resSub = num1 - num2;
	resMul = num1 * num2;
	resDiv = num1 / num2;
	
	printf(" Resultado soma: %.2f ", resSoma);
	printf("\n Resultado subtracao: %.2f", resSub);
	printf("\n Resultado multiplicacao: %.2f", resMul);
	printf("\n Resultado divisao: %.2f", resDiv);
}
