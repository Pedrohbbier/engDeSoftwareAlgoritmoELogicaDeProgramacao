#include <stdio.h>

main(){
	float custo , percentual , taxa , venda;
	
	printf("Digite o preço de custo: ");
	scanf("%f" , &custo);
	printf("Digite em numero inteiro a porcentagem que quer adicionar ao preco do produto para vender ele: ");
	scanf("%f" , &percentual);
	
	taxa = percentual / 100;
	venda = taxa * custo;
	venda = venda + custo;
	printf("Valor final do produto: %.2f" , venda);
}
