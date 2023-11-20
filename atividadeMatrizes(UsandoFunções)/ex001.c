#include <stdio.h>

int linha , coluna;

int soma(int a[2][2]);

int main(){
	int matriz[2][2];
	
	
	printf("Digite os quatro numeros da matriz:\n ");
	for(linha = 0; linha <2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			scanf("%d" , &matriz[linha][coluna]);
		}
	}
	printf("Soma dos valores: %d" , soma(matriz));
}

int soma(int a[2][2]){
	int somaGeral = 0;
	for(linha = 0; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			somaGeral += a[linha][coluna];
		}
	}
	
	return somaGeral;
}
