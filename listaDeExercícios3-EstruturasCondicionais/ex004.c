#include <stdio.h>

main(){
	float saldoMedio , credito;
	
	printf("Digite seu saldo medio: ");
	scanf("%f" , &saldoMedio );
	
	if(saldoMedio <= 500 ){
		printf("Você não recebe credito");
	}
	
	if(saldoMedio > 500 && saldoMedio <= 1000){
		credito = saldoMedio * 0.3;
		printf("saldo medio: %.2f" , saldoMedio);
		printf("\n credito: %.2f" , credito);
	};
	
		if(saldoMedio > 1000 && saldoMedio <= 3000){
		credito = saldoMedio * 0.4;
		printf("saldo medio: %.2f" , saldoMedio);
		printf("\n credito: %.2f" , credito);
	};
	
		if(saldoMedio > 3000){
		credito = saldoMedio * 0.5;
		printf("saldo medio: %.2f" , saldoMedio);
		printf("\n credito: %.2f" , credito);
	};
}
