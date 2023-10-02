#include <stdio.h>
main(){
    int num, soma = 0;

    printf("\nDigite um numero:");
    scanf("%d", &num);

    while (num != 0){
        soma += num;
        printf("Digite outro numero (0 para parar):");
        scanf("%d", &num);
    }

    printf("\nA soma dos numeros: %d", soma);
}
