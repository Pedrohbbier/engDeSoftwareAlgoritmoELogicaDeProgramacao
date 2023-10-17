#include <stdio.h>

main(){
	int matriz[3][3] ,linha , coluna ,i , soma ,somaDiagonal;
	
	printf("\nDigite os nove numeros da matriz:\n");
	for(linha = 0 ; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			scanf("\n%d" , &matriz[linha][coluna] );
		}
	}
	
	for(linha = 0 ; linha < 3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	printf("\nSoma dos numeros da matriz: %d" , soma);
	
	for(i = 0 ; i < 3 ; i++){
		somaDiagonal = somaDiagonal + matriz[i][i];
	}
	printf("\nSoma dos numeros da diagona matriz: %d" , somaDiagonal);
	
}
