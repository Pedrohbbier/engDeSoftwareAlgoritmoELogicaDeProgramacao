#include <stdio.h>

main(){
	int num , antecessor , sucessor;
	printf("Digite um numero:");
	scanf("%d" , &num);
	antecessor = num - 1;
	sucessor = num + 1;
	printf("Numero antecessor: %d \n" , antecessor); //  \n serve para pular linha
	printf("Numero sucessor: %d" , sucessor);
}
