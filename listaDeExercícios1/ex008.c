#include <stdio.h>

main(){
	int kmPercorridos , diasAlugados , valorPago;
	
	printf("Por quantos dias voce alugou o carro ?");
	scanf("%d" , &diasAlugados);
	
	printf("Quantos quilometros voce percorreu com o carro ?");
	scanf("%d" , &kmPercorridos);
	
	valorPago = (diasAlugados * 70) + (kmPercorridos * 0.15);
	printf("Voc� ter� que pagar %d" , valorPago);
}
