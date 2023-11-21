#include <stdio.h>

main() {
    int x, i;

    printf("Informe a quantidade de números: ");
    scanf("%d", &x);

    for (i = 1; i <= x; ++i) {
        int x;

        printf("Informe o número %d: ", i);
        scanf("%d", &x);

        if (x > 0) {
            printf("O número %d eh positivo.\n", x);
        } else if (x < 0) {
            printf("O número %d eh negativo.\n", x);
        } else {
            printf("O número %d eh zero.\n", x);
        }
    }

}