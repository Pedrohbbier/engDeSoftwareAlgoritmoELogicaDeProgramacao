#include <stdio.h>

int main(){
	int matriz1[2][2],matriz2[2][2] ,linha , coluna , somaMatriz[2][2];
	
	printf("Digite os quatro numeros da primeira matriz:\n ");
	
	for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			scanf("\n%d" , &matriz1[linha][coluna]);
		}
	}
	
	printf("Digite os quatro numeros da segunda matriz:\n ");
	for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			scanf("\n%d" , &matriz2[linha][coluna]);
		}
	}
	
	printf("Soma das matrizes: \n");
	
	for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			somaMatriz[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
			printf("\n%d" , somaMatriz[linha][coluna]);
		}
	}
}
