#include <stdio.h>

main(){
	int matriz[2][2] , linha , coluna , soma;
	
	printf("Digite os 4 numeros da matriz:\n");
	for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			scanf("%d" , &matriz[linha][coluna]);
		}
	}
	
	for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			printf("\n%d" , matriz[linha][coluna]);
		}
	}
	
		for(linha = 0 ; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 2 ; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	printf("\nSoma dos valores: %d" , soma);
	
	
}
