#include <stdio.h>

int main() {
    int nivel, horas;
    float salario, valor;

    printf("Digite o nível do professor (1, 2, ou 3): ");
    scanf("%d", &nivel);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas);

    switch(nivel) {
        case 1:
            valor = 12.00;
            break;
        case 2:
            valor = 17.00;
            break;
        case 3:
            valor = 25.00;
            break;
    }

    salario = valor * horas;

    printf("O salário do professor é: R$%.2f\n", salario);
}
