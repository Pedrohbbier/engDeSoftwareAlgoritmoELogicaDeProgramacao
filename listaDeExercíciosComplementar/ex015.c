#include <stdio.h>

int main() {
    int pessoas, i;

    printf("Informe o número de pessoas: ");
    scanf("%d", &pessoas);

    char nome[50];
    char sexo;
    int idade;
    char saude;

    int aptos = 0;
    int inaptos = 0;

    for (i = 1; i <= pessoas; ++i) {
        printf("\nInforme os dados da pessoa %d:\n", i);

        printf("Nome: ");
        scanf("%s", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Condição de saúde (A para apto, I para inapto): ");
        scanf(" %c", &saude);

        if ((idade >= 18 && idade <= 30) && (sexo == 'M' || sexo == 'm') && (saude == 'A' || saude == 'a')) {
            printf("Apto para o serviço militar obrigatório.\n");
            aptos++;
        } else {
            printf("Inapto para o serviço militar obrigatório.\n");
            inaptos++;
        }
    }

    printf("\nTotal de pessoas aptas: %d\n", aptos);
    printf("Total de pessoas inaptas: %d\n", inaptos);

}