#include <stdio.h>

int main() {
    char nome[50];
    char sexo;
    float altura, peso, imc, pesoIdeal;
    int idade;

    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        pesoIdeal = 18.5 * altura * altura;
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("O peso atual está dentro da faixa considerada saudável.\n");
        pesoIdeal = peso;
    } else {
        pesoIdeal = 24.9 * altura * altura;
    }

    printf("\nResumo:\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f metros\n", altura);
    printf("Idade: %d anos\n", idade);
    printf("Peso Ideal: %.2f kg\n", pesoIdeal);

    return 0;
}
