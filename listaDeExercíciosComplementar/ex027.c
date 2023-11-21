#include <stdio.h>

main() {
    int lado1, lado2, lado3;

    printf("Informe três valores inteiros representando os lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {

        if (lado1 == lado2 && lado2 == lado3) {
            printf("Os lados formam um triângulo equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Os lados formam um triângulo isóscele.\n");
        } else {
            printf("Os lados formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores informados não formam um triângulo.\n");
    }

    return 0;
}