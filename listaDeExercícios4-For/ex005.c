#include <stdio.h>

int main() {
    int num, i, j;

    printf("Digite um número para saber a sequência de números primos: ");
    scanf("%d", &num);

    printf("Números primos até %d: ", num);

    for (i = 2; i <= num; i++) {
        int ehPrimo = 1; // Assumimos que i é primo inicialmente

        // Verificamos se i é divisível por qualquer número entre 2 e i-1
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = 0; // i não é primo
                break;
            }
        }

        // Se ehPrimo ainda for 1, i é primo e o exibimos
        if (ehPrimo) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
