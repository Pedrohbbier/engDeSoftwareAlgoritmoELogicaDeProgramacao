#include <stdio.h>

int main() {
    int a, b, c;

    printf("Informe três valores inteiros distintos:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c) {
        if (b < c) {
            printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", a, c, b);
        }
    } else if (b < a && b < c) {
        if (a < c) {
            printf("Valores em ordem crescente: %d, %d, %d\n", b, a, c);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", b, c, a);
        }
    } else {
        if (a < b) {
            printf("Valores em ordem crescente: %d, %d, %d\n", c, a, b);
        } else {
            printf("Valores em ordem crescente: %d, %d, %d\n", c, b, a);
        }
    }

}
