#include <stdio.h>

main(){
	int n1 , n2 , n3;
	
	printf("Escreva n1: ");
	scanf("%d" , &n1);
	
	printf("Escreva n2: ");
	scanf("%d" , &n2);
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("\nn1: %d" , n1);
	printf("\nn2: %d" , n2);
}
