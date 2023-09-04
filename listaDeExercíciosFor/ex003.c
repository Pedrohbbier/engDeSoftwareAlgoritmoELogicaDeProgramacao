#include <stdio.h>

main(){
	int i, n;
	double  termo1 , termo2 , proximoTermo;
	printf("Qual termo você quer da sequencia de Fibonacci: ");
	scanf("%d", &n);
	
	termo1 = 0;
	termo2 = 1;
	
	for(i = 1 ; i <= n ; i++){
		proximoTermo = termo1 + termo2;
		termo1 = termo2;
		termo2 = proximoTermo;
	}
	printf("\n%.0lf" , termo1);
		
		
}
