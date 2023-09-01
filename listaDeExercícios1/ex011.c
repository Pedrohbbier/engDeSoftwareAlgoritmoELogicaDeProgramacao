#include <stdio.h>

main(){
	float brancos , nulos , validos , total , resBrancos , resNulos , resValidos;
	
	printf("Escreva a quantidade de votos brancos: ");
	scanf("%f" , &brancos);
	
	printf("Escreva a quantidade de votos nulos: ");
	scanf("%f" , &nulos);
	
	printf("Escreva a quantidade de votos validos: ");
	scanf("%f" , &validos);
	
	total = brancos + nulos + validos;
	
	resBrancos = (brancos / total) * 100;
	resNulos = (nulos / total ) * 100;
	resValidos = (validos / total ) * 100;
	
	printf("\nVotos brancos: %.2f%%" , resBrancos);
	printf("\nVotos nulos: %.2f%%" , resNulos);
	printf("\nVotos validos: %.2f%%" , resValidos);
}
