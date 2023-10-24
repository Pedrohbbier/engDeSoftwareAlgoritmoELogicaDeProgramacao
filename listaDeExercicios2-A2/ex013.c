#include <stdio.h>
main(){
    int i, inferior, superior, soma = 0;

    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);
    printf("Digite o limite superior: ");
    scanf("%d", &superior);

    if (inferior % 2 != 0) {
        inferior++;  
    }
    
    for (i = inferior; i <= superior; i += 2) {
        printf("\n numeros pares: %d ", i);
        soma += i;
    }
    printf("\nSoma dos numeros pares: %d", soma);

}

