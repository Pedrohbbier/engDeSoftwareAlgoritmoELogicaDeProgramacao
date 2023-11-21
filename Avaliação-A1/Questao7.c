#include <stdio.h>

int qtdAlunos;

struct ensino{
	char nome[50];
	int matricula;
	int notaMatematica;
	int notaPortugues;
	int notaCiencias;
} aluno[1000] ;

int media(int b);

int media(b){
	int mediaAluno;
	
	mediaAluno = ((aluno[b].notaMatematica) + (aluno[b].notaPortugues) + (aluno[b].notaCiencias)) / 3;
	return mediaAluno;
};

int main(){
	int i;
	char teste[3];
	char teste2[3];
	int count = 0;
	int mediaAlunoHere;
	
	for(i = 0; i < 1000 ; i++){
		printf("Digite o nome do aluno: ");
		scanf("%s" , &aluno[i].nome);
		printf("Digite o numero de matricula do aluno: ");
		scanf("%d" , &aluno[i].matricula);
		printf("Digite a nota do aluno em matematica: ");
		scanf("%d" , &aluno[i].notaMatematica);
		printf("Digite a nota do aluno em portugues: ");
		scanf("%d" , &aluno[i].notaPortugues);
		printf("Digite a nota do aluno em ciencias: ");
		scanf("%d" , &aluno[i].notaCiencias);
		printf("Media do aluno %s: %d" , aluno[i].nome , media(i));
		printf("\nQuer cadastrar mais alunos? \nDigite (s) para sim ou (n) para nao:  ")	;
		scanf("%s" , &teste[3]);
		if(teste[3] != 's'){
			break;
		} else {
			count++;
		}
	};
	printf("Deseja exibir os dados dos alunos e se eles foram aprovados ou nao?  \nDigite (s) para sim ou (n) para nao: ");
	scanf( "%s" , &teste2[3]);
	if(teste2[3] == 's'){
		for(i = 0; i <= count ; i++){
			printf("\n-----------------");
			printf("\nNome aluno: %s"  , aluno[i].nome);
			printf("\nMatricul: %d" , aluno[i].matricula);
			printf("\nNota matematica: %d" , aluno[i].notaMatematica);
			printf("\nNota portugues: %d" , aluno[i].notaPortugues);
			printf("\nNota ciencias: %d" , aluno[i].notaCiencias);
			printf("\nMedia: %d" , media(i));
			mediaAlunoHere = media(i);
			if (mediaAlunoHere < 6 ){
				printf("\nReprovado");
			} else {
				printf("\nAprovado");
			}
	}
};
}
