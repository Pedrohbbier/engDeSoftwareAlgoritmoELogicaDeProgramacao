#include <stdio.h>

main(){
	float sombraP , sombraM , alturaP , altura ;
	
	printf("Digite a sua altura em cm: ");
	scanf("%f" , &altura);
	
	printf("Escreva a medida da sombra do predio em cm: ");
	scanf("%f" , &sombraP);
	
	printf("Escreva a media da sua sombra em cm: ");
	scanf("%f" , &sombraM);
	
	alturaP = (altura * sombraP) / sombraM;
	printf("Altura do predio: %.2f cm" , alturaP);
}
