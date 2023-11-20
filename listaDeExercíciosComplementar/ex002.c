#include <stdio.h>

int main(){
    int n1 , n2;
    int soma, subtracao , divisao;
    printf("Digite o numero 1:");
    scanf("%d" , &n1);
    printf("Digite o numero 2:");
    scanf("%d" , &n2);
    soma = n1 + n2;
    subtracao = n1 - n2;
    divisao = n1 / n2;

    printf("\nSoma: %d" , soma);
    printf("\nSubtracao: %d" , subtracao);
    printf("\ndivisao: %d" , divisao);
}