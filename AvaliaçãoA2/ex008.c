#include <stdio.h>

main(){
	int anos , meses , dias , segundos;
	
	printf("\nDigite a sua idade: ");
	
	printf("\nDigite quantos anos voc� tem: ");
	scanf("%d" , &anos);
	
	printf("\nDigite quantos meses voc� tem: ");
	scanf("%d" , &meses);
	
	printf("\nDigite quantos dias voc� tem: ");
	scanf("%d" , &dias);
	
	anos = anos * 365;
	meses = meses * 30;
	dias = dias + anos + meses;
	
	segundos = dias * 86400;
	
	printf("Voc� ja viveu cerca de %d" ,segundos);
}
