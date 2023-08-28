#include <stdio.h>

main(){
	float custoFab ,  inCustoFab , porDist;
	
	printf("Qual o custo da fabrica para montar o carro: ");
	scanf("%f" , &custoFab);
	
	inCustoFab = custoFab * 0.45;
	custoFab = custoFab + inCustoFab;
	porDist = custoFab * 0.28;
	custoFab = custoFab + porDist;
	printf("Valor final do veiculo: %.2f" , custoFab );
	
	
	
}
