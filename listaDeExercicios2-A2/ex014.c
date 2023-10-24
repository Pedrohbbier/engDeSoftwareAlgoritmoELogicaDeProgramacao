#include <stdio.h>
main(){
    int n;

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    if (n % 10 == 0 || n % 5 == 0 || n % 2 == 0) {
        printf("\nEsse numero e divisivel por 10, 5 ou 2.\n");
    } else {
        printf("\nEsse numero nao e divisivel por 10, 5 ou 2.");
    }
}

