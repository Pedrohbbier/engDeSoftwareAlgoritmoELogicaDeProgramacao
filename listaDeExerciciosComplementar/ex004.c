#include <stdio.h>

main(){
	float valorCompra , valorPrestacao;
	
	printf("Digite o valor da compra: ");
	scanf("%f" , &valorCompra);
	
	valorPrestacao = valorCompra / 5;
	
	printf("Cada prestacao custara: %.2f" , valorPrestacao);
}
