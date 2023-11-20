#include <stdio.h>

int main(){
	int matriz[3][3] , linha , coluna ,multiplicado[3][3];
	
	printf("Digite os nove numeros da matriz: \n");
	
	for(linha = 0; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			scanf("%d" , &matriz[linha][coluna]);
		}
	}
	
	for(linha = 0; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			multiplicado[linha][coluna] = matriz[linha][coluna] * 5;
			printf("\n%d" , multiplicado[linha][coluna]);
		}
	}
}
