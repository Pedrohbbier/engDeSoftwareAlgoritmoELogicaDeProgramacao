#include <stdio.h>

int main(){
	int j , k , somaPares , linha, coluna , qtdNum;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d" , &j);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d" , &k);
	
	int matriz[j][k];
	
	qtdNum = j * k;
	
	printf("Digite os %d numeros da matriz: " , qtdNum);
	for(linha = 0 ; linha < j ; linha++){
		for(coluna = 0 ; coluna < k ; coluna++){
			scanf("\n%d" , &matriz[linha][coluna]);
			if(matriz[linha][coluna] %2 == 0){
				somaPares += matriz[linha][coluna];
			}
		}
	}
	printf("Soma de todos os numeros pares da matriz: %d" , somaPares);
}
