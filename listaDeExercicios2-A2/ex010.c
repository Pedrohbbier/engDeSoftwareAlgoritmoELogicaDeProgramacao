#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, vetor[8], posicao = -1, ordem = 0, numeropesquisa;

    for (i = 0; i < 8; i++) {
        printf("Digite o %do número inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número que deseja pesquisar: ");
    scanf("%d", &numeropesquisa);


    for (i = 0; i < 8; i++) {
        ordem++;
        if (vetor[i] == numeropesquisa) {
            posicao = i;
            break;
        }
    }
	printf("\n====================================================================================");
    if (posicao != -1) {
        printf("\nO numero %d foi encontrado na posicao %d do vetor.\n", numeropesquisa, posicao);
        printf("\nFoi o %do numero digitado.\n", ordem);
    } else {
        printf("\nnão existe :(\n");
    }
}
