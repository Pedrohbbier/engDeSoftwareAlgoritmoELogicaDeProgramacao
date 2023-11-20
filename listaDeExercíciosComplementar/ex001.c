#include <stdio.h>

int main(){
    float n1, n2 , soma;
    printf("Digite o primeiro numero: ");
    scanf("%f" , &n1);
    printf("Digite o segundo numero: ");
    scanf("%f" , &n2);
    soma = n1 + n2;
    printf("Soma: %.2f" , soma);
}