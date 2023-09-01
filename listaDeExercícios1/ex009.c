#include <stdio.h>

main(){
	float valorGasto , gorjeta ;
	
	printf("Digite o valor gasto: ");
	scanf("%f" , &valorGasto);
	
	gorjeta = valorGasto * 0.10;
	
	printf("Voce gastou %.2f e deve pagar %.2f de gorjeta" , valorGasto , gorjeta );
}
