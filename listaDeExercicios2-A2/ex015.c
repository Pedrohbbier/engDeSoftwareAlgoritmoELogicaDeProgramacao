#include <stdio.h>
main(){
    int valor, soma = 0, contador = 0;

    while (1) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor == -99) {
            break;  
        }

        soma += valor;
        contador++;
    }

    if (contador > 0) {
        float media = soma / contador;
        printf("\nSoma: %d", soma);
        printf("\nMedia: %.2f", media);
    } 
}

