#include <stdio.h>

int main(){
    float precoProduto , porc , precoVenda;
    printf("Digite o preco de venda do produto: ");
    scanf("%f" , &precoProduto);
    printf("Digite a porcentagem que deseja adicionar no preco de venda: ");
    scanf("%f" , &porc);
    precoVenda = (precoProduto * porc) / 100 ;
    precoVenda += precoProduto;
    printf("Preco de venda: %.2f" , precoVenda );
}