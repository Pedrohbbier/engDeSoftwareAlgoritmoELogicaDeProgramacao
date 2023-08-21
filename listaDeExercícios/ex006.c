#include <stdio.h>

main(){
	float real , dolar;
	printf("Digite o valor em reais: ");
	scanf("%f" , &real);
	dolar = real / 4.99; //valor do dolar na cotação do dia 21/08/2023
	printf ("Em dolar: %2.f" , dolar);
}
