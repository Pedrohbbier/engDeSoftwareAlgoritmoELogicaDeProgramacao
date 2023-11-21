#include <stdio.h>

int main() {
    int numFuncionarios = 584, i;
    float salarioMinimo = 1100.00;  
    float salario, reajuste, novoSalario;
    float totalReajuste = 0, totalNovosSalarios = 0;

    for (i = 1; i <= numFuncionarios; ++i) {
        
        printf("Informe o salário do funcionário %d: ", i);
        scanf("%f", &salario);

        if (salario < 3 * salarioMinimo) {
            reajuste = salario * 0.5;
        } else if (salario >= 3 * salarioMinimo && salario <= 10 * salarioMinimo) {
            reajuste = salario * 0.2;
        } else if (salario > 10 * salarioMinimo && salario <= 20 * salarioMinimo) {
            reajuste = salario * 0.15;
        } else {
            reajuste = salario * 0.1;
        }

        novoSalario = salario + reajuste;

        totalReajuste += reajuste;
        totalNovosSalarios += novoSalario;

        printf("Reajuste: %.2f\n", reajuste);
        printf("Novo salário: %.2f\n\n", novoSalario);
    }

    printf("Total de reajuste para todos os funcionários: %.2f\n", totalReajuste);
    printf("Total de novos salários para todos os funcionários: %.2f\n", totalNovosSalarios);

    return 0;
}
