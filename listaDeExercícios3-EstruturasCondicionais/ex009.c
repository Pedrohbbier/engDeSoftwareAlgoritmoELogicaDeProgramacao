#include <stdio.h>

main(){
	float nota1 , nota2 , media;
	
	printf("Digite a nota 1: ");
	scanf("%f" , &nota1);
	printf("Digite a nota 2: ");
	scanf("%f" , &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media >= 7 ){
		printf("Aprovado, sua media foi: %.2f" , media);
	} else if ( media >= 3 ){
		printf("Exame, sua media foi: %.2f" , media);
	} else {
		printf("Reprovado, sua media foi: %.2f" , media);
	}
	
}
