#include <stdio.h>

int main(){
	int matriz[6][6] , linha , coluna ,maior = 0;
	
	printf("Digite os 36 numeros numeros da matriz:\n");
	
	for(linha = 0 ; linha < 6 ; linha++){
		for(coluna = 0 ; coluna < 6 ; coluna++){
			scanf("%d" , &matriz[linha][coluna]);
		}
	}
	
		for(linha = 0 ; linha < 6 ; linha++){
		for(coluna = 0 ; coluna < 6 ; coluna++){
			if(matriz[linha][coluna] > 10){
				maior++;
			}
		}
	}
	
	printf("\nTem %d valores maior que 10" , maior);
}
