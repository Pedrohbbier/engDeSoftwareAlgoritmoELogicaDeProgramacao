#include <stdio.h>
#include <string.h>

struct dados{
	char nome[50];
	int nroMatricula;
	char curso[30];
	
} aluno[5] ;

main(){
	int i , x;
	
	for(i = 0 ; i < 5 ; i++){
		printf("Digite o nome do aluno %d: " , i+1);
		gets(aluno[i].nome);
		fflush(stdin);
		printf("Digite o numero de matricula do aluno %d:" , i+1);
		scanf("%d" , &aluno[i].nroMatricula);
		fflush(stdin);
		printf("Digite o curso do aluno %d:" , i+1);
		gets(aluno[i].curso);
		fflush(stdin);
	}
	
	for(i = 0; i < 5 ; i++){
		printf("\nNome aluno %d: %s " , i+1 , aluno[i].nome);
		printf("\nNumero matricula aluno %d: %d" , i+1 , aluno[i].nroMatricula);
		printf("\nCurso aluno %d: %s" , i+1 , aluno[i].curso);
	}
}
