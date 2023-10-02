#include <stdio.h>

main(){
	int qtdBrancos , qtdValidos , qtdNulos , totalVotos;
	float porBrancos , porValidos , porNulos;
	
	printf("Digite a quantidade de votos brancos: ");
	scanf("%d" , &qtdBrancos);
	
	printf("Digite a quantidade de votos validos: ");
	scanf("%d" , &qtdValidos);
	
	printf("Digite a quantidade de votos nulos: ");
	scanf("%d" , &qtdNulos);
	
	totalVotos = qtdBrancos + qtdValidos + qtdNulos;
	
	porBrancos = (qtdBrancos * 100) / totalVotos;
	printf("\nPorcentagem de votos brancos: %.2f%% " , porBrancos );
	
	porValidos = (qtdValidos * 100) / totalVotos;
	printf("\nPorcentagem de votos brancos: %.2f%% " , porValidos );
	
	porNulos = (qtdNulos * 100) / totalVotos;
	printf("\nPorcentagem de votos brancos: %.2f%% " , porNulos );
}
