#include <stdio.h>
main(){
    int vetor[8], i, maior = 0; 

    for (i = 0; i < 8; i++){
    	printf ("\nDigite o numero %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 8; i++) {
        printf("\nVetor %d: %d ", i+1, vetor[i]);
        if (vetor[i] > 30) {
            maior++;
        }
    }
    
    printf("\nMaiores que 30: %d\n", maior);

}
