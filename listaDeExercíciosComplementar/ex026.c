#include <stdio.h>

int main() {
    float A, B, resultado;
    char operador;

  
    printf("Informe dois números reais (A e B) e um operador aritmético (+, -, *, /): ");
    scanf("%f %f %c", &A, &B, &operador);

    switch (operador) {
        case '+':
            resultado = A + B;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case '-':
            resultado = A - B;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case '*':
            resultado = A * B;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case '/':
           
            if (B != 0) {
                resultado = A / B;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Operador não definido.\n");
    }
}
