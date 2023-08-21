#include <stdio.h>

main(){
	float nota1 , nota2 , nota3 , media;
	
	printf("Escreva a primeira nota que tem peso 2:");
	scanf("%f" , &nota1);
	printf("Escreva a segunda nota que tem peso 3:");
	scanf("%f" , &nota2);
	printf("Escreva a terceira nota que tem peso 5:");
	scanf("%f" , &nota3);
	
	nota1 = nota1 * 2;
	nota2 = nota2 * 3;
	nota3 = nota3 * 5;
	media = (nota1 + nota2 + nota3) / 10;
	printf("Sua media foi: %.2f" , media);
	
}
