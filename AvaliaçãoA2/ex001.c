#include <stdio.h>
#include <stdlib.h>
main(){
	char nome[100], sexo;
	int dependente;
	float sal,sal1 , sal2 ,  tempo, reajuste, total , reajuste2;
	
	printf ("\nDigite seu nome:");
	gets (nome);
	
	printf ("\nDigite seu sexo ('M' ou 'm' masculino/'F' ou 'f' feminino):");
    scanf ("%c", &sexo);
	
	printf ("\nDigite a quantidade de dependentes:");
	scanf ("%d", &dependente);
	
	printf ("\nDigite seu salario:");
	scanf ("%f", &sal);
	
	printf ("\nDigite quantos anos voce esta na empresa:");
	scanf ("%f", &tempo);
	
	if ((sexo == 'M' || sexo=='m')  && (tempo >= 10)){
		reajuste = sal * 0.05;
		sal1 = sal + reajuste;
		printf("\nO sal�rio desse funcion�rio ter� um reajuste de %.2f indo para %.2f" , reajuste ,sal1);
		if(dependente > 1){
			reajuste2 = sal1 * 0.02;
			sal2 = sal1 + reajuste2;
			printf("\nEsse funcionario ter� mais um reajuste de %.2f por conta do n�mero de dependentes" , reajuste2);
			printf("\n Com isso o sal�rio do %s vai para %.2f" , nome , sal2);
		}
	}
	
	if ((sexo == 'M' || sexo=='m')  && (tempo < 10)){
		reajuste = sal * 0.03;
		sal1 = sal + reajuste;
		printf("\nO sal�rio desse funcion�rio ter� um reajuste de %.2f indo para %.2f" , reajuste ,sal1);
		if(dependente > 1){
			reajuste2 = sal1 * 0.02;
			sal2 = sal1 + reajuste2;
			printf("\nEsse funcionario ter� mais um reajuste de %.2f por conta do n�mero de dependentes" , reajuste2);
			printf("\n Com isso o sal�rio do %s vai para %.2f" , nome , sal2);
		}
	}
	
		if ((sexo == 'F' || sexo=='f')  && (tempo >= 8)){
		reajuste = sal * 0.05;
		sal1 = sal + reajuste;
		printf("\nO sal�rio desse funcion�rio ter� um reajuste de %.2f indo para %.2f" , reajuste ,sal1);
		if(dependente > 1){
			reajuste2 = sal1 * 0.02;
			sal2 = sal1 + reajuste2;
			printf("\nEsse funcionario ter� mais um reajuste de %.2f por conta do n�mero de dependentes" , reajuste2);
			printf("\n Com isso o sal�rio do %s vai para %.2f" , nome , sal2);
		}
	
	
		if ((sexo == 'F' || sexo=='f')  && (tempo < 8)){
		reajuste = sal * 0.03;
		sal1 = sal + reajuste;
		printf("\nO sal�rio desse funcion�rio ter� um reajuste de %.2f indo para %.2f" , reajuste ,sal1);
		if(dependente > 1){
			reajuste2 = sal1 * 0.02;
			sal2 = sal1 + reajuste2;
			printf("\nEsse funcionario ter� mais um reajuste de %.2f por conta do n�mero de dependentes" , reajuste2);
			printf("\n Com isso o sal�rio do %s vai para %.2f" , nome , sal2);
		}
	}
}
}
