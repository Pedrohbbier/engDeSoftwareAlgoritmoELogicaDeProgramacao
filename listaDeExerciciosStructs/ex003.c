#include <stdio.h>
#include <string.h>

struct curso{
	int matriculaAluno;
	char nome[50];
	int notaPrimeiraProva;
	int notaSegundaProva;
	int notaTerceiraProva;
} aluno[5];

main(){
	int i;
	
	for(i = 0; i < 5 ; i++){
		printf("Digite a matricula do aluno %d:" , i+1);
		scanf("%d" , &aluno[i].matriculaAluno);
		printf("Digite o nome do aluno %d:" , i+1);
		gets(aluno[i].nome);
		printf("Digite a nota do aluno %d na primeira prova:" , i+1);
		scanf("%d" , &aluno[i].notaPrimeiraProva);
		printf("Digite a nota do aluno %d na segunda prova:" , i+1);
		scanf("%d" , &aluno[i].notaSegundaProva);
		printf("Digite a nota do aluno %d na terceira prova:" , i+1);
		scanf("%d" , &aluno[i].notaTerceiraProva);
	}
	
	
}
