#include <stdio.h>

int main(){
    float valor , prest;

    printf("Digite o valor do produto: ");
    scanf("%f" , &valor);

    prest = valor / 5;

    printf("Valor de cada prestacao: %.2f " , prest);
}