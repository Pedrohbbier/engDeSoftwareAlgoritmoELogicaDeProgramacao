#include <stdio.h>

main(){
	float valorDepositado , rendimento , valorTotal;
	
	printf("Digite o valor depositado: ");
	scanf("%f" , &valorDepositado);
	
	rendimento = valorDepositado * 0.007;
	valorTotal = rendimento + valorDepositado;
	printf("O valor com o rendimento foi de %.2f" , valorTotal);
}
