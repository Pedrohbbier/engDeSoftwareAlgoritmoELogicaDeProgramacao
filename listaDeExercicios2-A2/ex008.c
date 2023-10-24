#include <stdio.h>
main(){
    int vetor1[5], vetor2[5], i;
    
    for (i = 0; i < 5; i++){
    	printf("\nDigite o numero %d:", i+1);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < 5; i++) {
        vetor2[i] = vetor1[i] * vetor1[i] * vetor1[i];
    }

    for (i = 0; i < 5; i++){
        printf("\nCubo do numero %d: %d", i+1, vetor2[i]);
    }
}

