#include <stdio.h>

main(){
	int anos , meses , dias , segundos;
	
	printf("\nDigite a sua idade: ");
	
	printf("\nDigite quantos anos você tem: ");
	scanf("%d" , &anos);
	
	printf("\nDigite quantos meses você tem: ");
	scanf("%d" , &meses);
	
	printf("\nDigite quantos dias você tem: ");
	scanf("%d" , &dias);
	
	anos = anos * 365;
	meses = meses * 30;
	dias = dias + anos + meses;
	
	segundos = dias * 86400;
	
	printf("Você ja viveu cerca de %d" ,segundos);
}
