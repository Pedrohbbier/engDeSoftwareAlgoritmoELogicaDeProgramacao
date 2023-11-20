#include <stdio.h>

int main(){
    float carro;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f" , &carro);
    carro = carro + (carro* 0.45); //imposto
    carro = carro + (carro * 0.28); //porcentagem distribuidor

    printf("Valor do carro para o consumidor: %.2f" , carro);

}