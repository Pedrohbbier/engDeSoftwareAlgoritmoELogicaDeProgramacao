
#include <stdio.h>

int main() {
    char tipoCombustivel;
    float valorVeiculo, desconto, valorFinal;
    float totalDesconto = 0, totalPago = 0;

    while (1) {
        printf("Informe o tipo de combustível (A para álcool, G para gasolina, D para diesel) ou 0 para encerrar: ");
        scanf(" %c", &tipoCombustivel);

        if (tipoCombustivel == '0') {
            break;
        }

        printf("Informe o valor do veículo: ");
        scanf("%f", &valorVeiculo);

        switch (tipoCombustivel) {
            case 'A':
                desconto = valorVeiculo * 0.25;
                break;
            case 'G':
                desconto = valorVeiculo * 0.21;
                break;
            case 'D':
                desconto = valorVeiculo * 0.14;
                break;
            default:
                printf("Tipo de combustível inválido.\n");
                continue; 
        }

        valorFinal = valorVeiculo - desconto;

        totalDesconto += desconto;
        totalPago += valorFinal;

        printf("Desconto: %.2f\n", desconto);
        printf("Valor final a ser pago: %.2f\n\n", valorFinal);
    }

    printf("Total de desconto para todos os clientes: %.2f\n", totalDesconto);
    printf("Total pago por todos os clientes: %.2f\n", totalPago);

}