#include <stdio.h>

main(){
	float valorVendido , resValorVendido , resSapatosVendidos , res;
	int sapatosVendidos;
	
	printf("Digite o valor vendido esse mes: ");
	scanf("%f" , &valorVendido);
	
	printf("Digite quantos sapatos foram vendidos");
	scanf("%d" , &sapatosVendidos );
	
	resValorVendido = valorVendido * 0.20;
	
	resSapatosVendidos = sapatosVendidos  * 5;
	
	res = resValorVendido + resSapatosVendidos;
	
	printf("Voce ganhou %.2f de comissao" , res);
}
