#include <stdio.h>

main(){
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d" , &idade );
	
	if(idade < 18){
		printf("Menor de idade");
	} else if (idade >= 18 && idade < 65){
		printf("Maior de idade");
	} else {
		printf("Pessoa idosa");
}
}
