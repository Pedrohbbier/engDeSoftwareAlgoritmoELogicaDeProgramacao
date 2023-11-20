#include <stdio.h>

int main(){
    int idade[75];
    int i;

    for(i = 0 ; i <= 74 ; i++){
        printf("Digite a idade da pessoa %d: " , i + 1);
        scanf("%d" , &idade[i]);
    }
    for(i = 0 ; i <= 74 ; i++){
        if(idade[i] > 18){
            printf("\npessoa %d = maior de idade" , i + 1);
        } else{
            printf("\npessoa %d = menor de idade" , i + 1);
        }
    }
}