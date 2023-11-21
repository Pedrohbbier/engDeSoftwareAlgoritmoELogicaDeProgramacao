#include <stdio.h>

main() {
    int x;

    printf("Digite um número de 1 a 5: ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("O número digitado por extenso eh: Um\n");
            break;
        case 2:
            printf("O número digitado por extenso eh: Dois\n");
            break;
        case 3:
            printf("O número digitado por extenso eh: Três\n");
            break;
        case 4:
            printf("O número digitado por extenso eh: Quatro\n");
            break;
        case 5:
            printf("O número digitado por extenso eh: Cinco\n");
            break;
        default:
            printf("Número inválido. O número deve estar no intervalo de 1 a 5.\n");
            break;
    }

}
