#include <stdio.h>

int main() {
    int tipoCliente;
    float valorKWh, consumo, valorConta;

    printf("Informe o tipo de cliente (1 - Residência, 2 - Comércio, 3 - Indústria): ");
    scanf("%d", &tipoCliente);

    switch (tipoCliente) {
        case 1:
            valorKWh = 0.60;
            break;
        case 2:
            valorKWh = 0.48;
            break;
        case 3:
            valorKWh = 1.29;
            break;
        default:
            printf("Tipo de cliente inválido.\n");
            return 1; 
    }

    printf("Informe o consumo em kWh: ");
    scanf("%f", &consumo);

    valorConta = valorKWh * consumo;

    printf("O valor da conta de luz é: R$ %.2f\n", valorConta);

    return 0; 
}
