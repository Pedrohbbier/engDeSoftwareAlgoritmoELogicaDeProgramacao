#include <stdio.h>

int main() {
    int x;

    printf("Informe um número: ");
    scanf("%d", &x);

    if (x > 80) {
        printf("O número eh maior que 80.\n");
    } else if (x < 25) {
        printf("O número eh menor que 25.\n");
    } else if (x == 40) {
        printf("O número eh igual a 40.\n");
    } else {
        printf("O numero não se encaixa em nenhuma das condições especificadas.\n");
    }

}