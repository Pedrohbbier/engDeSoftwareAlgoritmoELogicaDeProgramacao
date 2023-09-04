#include <stdio.h>

main(){
	float compra , lucro , venda;
	
	printf("Digite o valor da compra: ");
	scanf("%f" , &compra);
	
	if(compra < 10){
		lucro = compra * 0.7;
		venda = compra + lucro;
		printf("Valor de venda: %.2f" , venda );
	}
	if(compra >= 10 && compra < 30){
		lucro = compra * 0.5;
		venda = compra + lucro;
		printf("Valor de venda: %.2f" , venda );
	}
	if(compra >= 30 && compra < 50){
		lucro = compra * 0.4;
		venda = compra + lucro;
		printf("Valor de venda: %.2f" , venda );
	}
		if(compra >= 50){
		lucro = compra * 0.3;
		venda = compra + lucro;
		printf("Valor de venda: %.2f" , venda );
	}
}
