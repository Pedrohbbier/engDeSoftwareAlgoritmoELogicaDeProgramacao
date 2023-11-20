#include <stdio.h>

int main(){
    char parar[1];
    float valorCarro;
    int anoCarro , ate2000 = 0 , dps2000 = 0;
    while(parar != "n"){
        printf("Calculadora de descontos da concessionaria:");
        printf("\nDigite o valor do carro: ");
        scanf("%f" , &valorCarro);
        printf("\nDigite o ano do carro: ");
        scanf("%d" , &anoCarro);
        if (anoCarro >= 2000){
            valorCarro -= (valorCarro * 0.012);
            dps2000++;
        } else {
            valorCarro -= (valorCarro * 0.07);
            ate2000++;
        }
        printf("\nValor do carro apos desconto: %f" , valorCarro);
        printf("\nDeseja calcular mais descontos? Se sim digite (s), se deseja parar digite (n)" );
        scanf("%s" ,  &parar);
    }
    printf("\nQuantidade carros com ano superior a 2000: %d" , dps2000);
    printf("\nQuantidade carros com ano inferior a 2000: %d" , ate2000);
}