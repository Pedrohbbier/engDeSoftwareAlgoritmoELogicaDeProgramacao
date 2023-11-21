#include <stdio.h>

int main() {
    char nome[50], sexo;
    int idade;
    float salarioFixo, abono, salarioLiquido;

    printf("Informe o nome do funcionário: ");
    scanf("%s", nome);

    printf("Informe o sexo do funcionário (M/F): ");
    scanf(" %c", &sexo);

    printf("Informe a idade do funcionário: ");
    scanf("%d", &idade);

    printf("Informe o salário fixo do funcionário: ");
    scanf("%f", &salarioFixo);

    if ((sexo == 'M' || sexo == 'm') && idade >= 30) {
        abono = 100;
    } else if ((sexo == 'M' || sexo == 'm') && idade < 30) {
        abono = 50;
    } else if ((sexo == 'F' || sexo == 'f') && idade >= 30) {
        abono = 200;
    } else if ((sexo == 'F' || sexo == 'f') && idade < 30) {
        abono = 80;
    } else {
        printf("Sexo ou idade inválidos.\n");
    }

    salarioLiquido = salarioFixo + abono;

    printf("\nNome do funcionário: %s\n", nome);
    printf("Salário Líquido: %.2f\n", salarioLiquido);

}