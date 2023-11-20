#include <stdio.h>

struct escola{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} aluno ;

int main(){
    float media;
    printf("Digite o nome do aluno: ");
    scanf("%s" , &aluno.nome);
    printf("Digite a nota 1 do aluno: ");
    scanf("%f" , &aluno.nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f" , &aluno.nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f" , &aluno.nota3);
    media = ((aluno.nota1) + (aluno.nota2) + (aluno.nota3)) / 3;
    printf("O aluno %s teve uma media de %.2f" , (aluno.nome) , media);
}
