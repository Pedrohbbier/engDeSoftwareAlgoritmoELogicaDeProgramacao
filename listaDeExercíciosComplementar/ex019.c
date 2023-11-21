#include <stdio.h>

main() {
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("Os números são iguais.\n");
    } else {

        if (num1 > num2) {
            printf("O primeiro número %d é maior que o segundo número %d.\n", num1, num2);
        } else {
            printf("O segundo número %d é maior que o primeiro número %d.\n", num2, num1);
        }

        printf("Os números são diferentes.\n");
    }

}