#include <stdio.h>

int main(){
	int linha , j , k , coluna , positivo , negativo , nroVetor;
	
	printf("Digite quantas linhas tem o vetor: ");
	scanf("%d" , &j);
	printf("Digite quantas colunas tem o vetor: ");
	scanf("%d" , &k);
	
	int matriz[j][k];
	
	nroVetor = j * k;
	printf("Digite os %d numeros da matriz:\n " , nroVetor);
	
	for(linha = 0 ; linha < j ; linha++){
		for(coluna = 0 ; coluna < k ; coluna++){
			scanf("\n%d" , &matriz[linha][coluna] );
			if(matriz[linha][coluna] %2 == 0){
				matriz[linha][coluna] = 1;
			} else {
				matriz[linha][coluna] = -1;
			}
		}
	}
	
	for(linha = 0 ; linha < j ; linha++){
		for(coluna = 0 ; coluna < k ; coluna++){
			printf("\n%d" , matriz[linha][coluna]);
		}
	}
	
}
