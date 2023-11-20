#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, homem = 0, mulher = 0;
    char nome[50], sexo;

    for (i=0;i<56;i++){
        printf("\nDigite seu nome:");
        gets (nome);

        printf("\nDigite seu sexo (F ou M):");
        scanf("%c", &sexo);

        if (sexo == 'M' || sexo == 'm'){
            printf("\n%s eh homem", nome);
            homem++;
        } else if (sexo == 'F' || sexo == 'f'){
            printf("\n%s eh mulher", nome);
            mulher++;
        } else {
            printf("\nSEXO NAO REGISTRADO");
        }
        fflush (stdin);
    }

    printf("\nQuantidade de homens: %d", homem);
    printf("\nQuantidade de mulheres: %d", mulher);
}