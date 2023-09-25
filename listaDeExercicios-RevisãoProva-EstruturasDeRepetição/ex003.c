#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	int i;
	float valorGeral , valorDito , parcelaAPrazo ;
	char prazoOuAVista;
	
	for(i = 1 ; i<=15; i++){
		printf("Digite o valor da compra %d: " , i);
		scanf("%f" , &valorDito);
		valorGeral += valorDito;
	}
	
	printf("Digite se quer pagar a prazo em 3 vezes ou a vista (P/V):  ");
	scanf("%s" , &prazoOuAVista);
	
	if(prazoOuAVista == 'P' || prazoOuAVista == 'p'){
		parcelaAPrazo = valorGeral / 3;
		printf("Valor total da compra: %.2f" , valorGeral);
		printf("\nA prazo, cada parcela saira por %.2f" , parcelaAPrazo);
	} else if (prazoOuAVista == 'V' || prazoOuAVista == 'v'){
		printf("Valor total da compra: %.2f" , valorGeral);
	}
}
