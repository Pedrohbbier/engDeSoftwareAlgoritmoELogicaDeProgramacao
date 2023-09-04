#include <stdio.h>

main(){
	float qtdNum , i  , media , x;
	printf("Digite a quantidade de numeros que você quer usar para calcular a media: ");
	scanf("%f" , &qtdNum);
	printf("Os numeros sao: ");
	for(i = 1 ; i <= qtdNum ; i++){
		printf("\n%.2f" , i);
		x += i;
		if(i ==qtdNum){
			media = x / qtdNum;
		}
	}
	printf("\nA media e: %.2f" , media);
}
