#include<stdio.h>
#include<stdlib.h>

main(){
	int i, x, y, vet[10];
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	for(i=1; i<=y; i++){
		vet[y]=(x*i);	
		printf("\nA Multiplicação eh %d x  %d = %d", x, i, vet[y]);
	}

}
