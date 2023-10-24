#include<stdio.h>
#include<stdlib.h>

int main() {
    int vetor[100]; 
    int i, num;
    int tamanho = 0;

    for (; tamanho < 100; tamanho++) {
        printf("Digite um número inteiro (999 para parar): ");
        scanf("%d", &num);

        if (num == 999) {
            break;
        }

        vetor[tamanho] = num;
    }

    printf("Vetor na ordem inversa:\n");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
