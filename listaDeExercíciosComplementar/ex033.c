#include <stdio.h>

int main() {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3, notaFinal;
    char classificacao;

    printf("Informe o nome do estudante: ");
    scanf("%s", nome);
    printf("Informe o número de matrícula: ");
    scanf("%d", &matricula);
    printf("Informe as três notas do estudante: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    notaFinal = (nota1 + nota2 + nota3) / 3;

    if (notaFinal >= 8 && notaFinal <= 10) {
        classificacao = 'A';
    } else if (notaFinal >= 7 && notaFinal < 8) {
        classificacao = 'B';
    } else if (notaFinal >= 6 && notaFinal < 7) {
        classificacao = 'C';
    } else if (notaFinal >= 5 && notaFinal < 6) {
        classificacao = 'D';
    } else {
        classificacao = 'R';
    }

    printf("\nDados do estudante:\n");
    printf("Nome: %s\n", nome);
    printf("Número de matrícula: %d\n", matricula);
    printf("Nota final: %.2f\n", notaFinal);
    printf("Classificação: %c\n", classificacao);

    int idade;
    char grupoRisco;
    char categoriaSeguro;

    printf("\nInforme a idade do pretendente: ");
    scanf("%d", &idade);

    if (idade < 17 || idade > 70) {
        printf("Idade fora da faixa permitida para aquisição de seguro.\n");
        return 0;
    }

    printf("Informe o grupo de risco (A, B ou C): ");
    scanf(" %c", &grupoRisco);

    if (idade >= 17 && idade <= 30) {
        if (grupoRisco == 'A') {
            categoriaSeguro = 'I';
        } else if (grupoRisco == 'B') {
            categoriaSeguro = 'II';
        } else {
            categoriaSeguro = 'III';
        }
    } else if (idade > 30 && idade <= 50) {
        if (grupoRisco == 'A') {
            categoriaSeguro = 'IV';
        } else if (grupoRisco == 'B') {
            categoriaSeguro = 'V';
        } else {
            categoriaSeguro = 'VI';
        }
    } else {
        if (grupoRisco == 'A') {
            categoriaSeguro = 'VII';
        } else if (grupoRisco == 'B') {
            categoriaSeguro = 'VIII';
        } else {
            categoriaSeguro = 'IX';
        }
    }

    printf("\nDados do pretendente ao seguro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Categoria do seguro: %c\n", categoriaSeguro);

    return 0;
}
