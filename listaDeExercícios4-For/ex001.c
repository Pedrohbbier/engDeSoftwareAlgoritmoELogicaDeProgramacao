#include <stdio.h>

main(){
	int i;
	printf("Numeros pares:");
	for(i=0; i <= 20 ; i ++){
		if(i%2 == 0){
			printf("\n%d" , i);
		}
	}
	printf("\nFim");
}
