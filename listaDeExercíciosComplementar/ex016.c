#include <stdio.h>

int main() {
    int numProdutos = 40, i;
    float precoCusto, precoVenda;
    float totalCusto = 0, totalVenda = 0;

    for (i = 1; i <= numProdutos; ++i) {
    printf("\nInforme os preços para o produto %d:\n", i);

    printf("Preço de Custo: ");
    scanf("%f", &precoCusto);

    printf("Preço de Venda: ");
    scanf("%f", &precoVenda);

    totalCusto += precoCusto;
    totalVenda += precoVenda;

    if (precoVenda > precoCusto) {
        printf("Produto %d: Lucro\n", i);
    } else if (precoVenda < precoCusto) {
        printf("Produto %d: Prejuízo\n", i);
    } else {
        printf("Produto %d: Empate\n", i);
        }
    }

    float mediaCusto = totalCusto / numProdutos;
    float mediaVenda = totalVenda / numProdutos;

    printf("\nMédia de Preço de Custo: %.2f\n", mediaCusto);
    printf("Média de Preço de Venda: %.2f\n", mediaVenda);

}
