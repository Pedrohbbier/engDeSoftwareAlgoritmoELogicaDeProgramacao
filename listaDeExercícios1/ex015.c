#include <stdio.h>

main(){
	float lata , garrafa600 , garrafa2000 , total;
	
	printf("Escreva a quantidade de latas de 350 ml compradas: ");
	scanf("%f" , &lata );
	
	printf("Escreva a quantidade de garrafas de 600 ml compradas: ");
	scanf("%f" , &garrafa600 );
	
	printf("Escreva a quantidade de garrafas de 2 litros compradas: ");
	scanf("%f" , &garrafa2000 );

	
	total = (lata * 0.350 ) + (garrafa600 * 0.600 ) + (garrafa2000 * 2);
	
	printf("Foi comprado %.2f litros de refrigerante" , total);
}
