#include <stdio.h>

int main(){
    int n;
    printf("Digite quantas pessoas voce quer ver se estao aptas ao servico militar obrigatorio:  ");
    scanf( "%d" ,&n);
    char nome[50];
    char sexo[20];
    int idade;
    char estadoSaude[10];
    int i;

    for(i = 1 ; i <= n ; i++ ){
        printf("\nDigite o nome da pessoa %d: " , i);
        scanf("%s" , &nome);
        printf("\nDigite o sexo da pessoa %d (m = masculino) (f = feminino)  :" , i);
        scanf("%s" , &sexo);
        printf("\nDigite a idade da pessoa %d:" , i);
        scanf("%d" , &idade);
        printf("\nDigite o estado de saude da pessoa %d :(bom) ou (ruim)" , i);
        scanf("%s" , &estadoSaude);

        if((sexo == "m" || sexo == "masculino") && (idade >= 18 && idade < 65 ) && (estadoSaude == "bom") ){
            printf("\n%s aprovado para o servico militar obrigatorio" , nome);
        } else {
            printf("\n%s reprovado para o servico militar obrigatorio" , nome);
        }

    }
    

}