#include <stdio.h>
main(){
    int x, value[10], soma = 0, total = 0;

    for (x=0; x<10; x++){
        printf("\nDigite o valor %d:", x+1);
        scanf("%d", &value[x]);

        if (value[x] < 0) {
            break;  // Encerra o loop se o valor for negativo
        }

        soma += value[x];
        total++;
    }

    if (total > 0) {
        float media = soma / total;
        printf("\nSoma: %d", soma);
        printf("\nMedia: %.2f", media);
        printf("\nValores lidos: %d", total);
    } 
}

