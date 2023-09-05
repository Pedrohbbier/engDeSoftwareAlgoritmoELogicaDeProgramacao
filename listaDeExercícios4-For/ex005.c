#include <stdio.h>

int main() {
    int num, i, j;

    printf("Digite um n�mero para saber a sequ�ncia de n�meros primos: ");
    scanf("%d", &num);

    printf("N�meros primos at� %d: ", num);

    for (i = 2; i <= num; i++) {
        int ehPrimo = 1; // Assumimos que i � primo inicialmente

        // Verificamos se i � divis�vel por qualquer n�mero entre 2 e i-1
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ehPrimo = 0; // i n�o � primo
                break;
            }
        }

        // Se ehPrimo ainda for 1, i � primo e o exibimos
        if (ehPrimo) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
