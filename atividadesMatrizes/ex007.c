#include <stdio.h>

main(){
	int matriz[3][3] ,linha , coluna , par , impar;
	
	printf("Digite os 9 numeros de uma matriz 3X3: \n");
	
	for(linha = 0; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			scanf("\n%d" , &matriz[linha][coluna]);
			if(matriz[linha][coluna] %2 == 0){
				par++;
			} else {
				impar++;
			}
		}
	}
	
	//Utilizando 3 for para printar a matriz de um jeito diferente
	printf("Matriz: \n");
	for(linha = 0; linha < 1 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			printf("%d" , matriz[linha][coluna]);
		}
	} 
	printf("\n");
	for(linha = 1; linha < 2 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			printf("%d" , matriz[linha][coluna]);
		}
	} 
	printf("\n");
	for(linha = 2; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			printf("%d" , matriz[linha][coluna]);
		}
	} 
	
	printf("\nQuantidade de numeros pares: %d" , par );
	printf("\nQuantidade de numeros pares: %d" , impar );
}
