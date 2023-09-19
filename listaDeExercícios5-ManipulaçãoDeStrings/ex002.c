#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char nome[50];
	int i;
	scanf("%s" , &nome);
	
	
	for(i = 0; i <= strlen(nome) ; i++ ){
		if(i % 2 == 0 ){
			printf("%c" , nome[i]);
		}
	}
	
	
}
