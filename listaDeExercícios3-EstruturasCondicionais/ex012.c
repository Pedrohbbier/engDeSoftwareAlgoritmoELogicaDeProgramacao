#include <stdio.h>

main(){
	float a , b , c;
	
	printf("Digite o valor de A: ");
	scanf("%f" , &a );
	printf("Digite o valor de B: ");
	scanf("%f" , &b );
	printf("Digite o valor de C: ");
	scanf("%f" , &c );
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Os valores podem formar um triangulo");
		 if (a == b && b == c) {
            printf("\n � um tri�ngulo equilatero");
        } else if (a == b || a == c || b == c) {
            printf("\n � um tri�ngulo is�sceles");
        } else {
            printf("\n � um tri�ngulo escaleno");
        }
	} else {
		printf("Os valores nao podem formar um triangulo");
	}
}
