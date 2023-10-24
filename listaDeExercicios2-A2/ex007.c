#include <stdio.h>
main(){
    int vet[11];  
    int x;

    for (x = 0; x < 11; x++) {
        vet[x] = 10 + x;
    }

    
    for (x = 0; x < 11; x++) {
        printf("\nNumeros do vetor: %d ", vet[x]);
    }
}

