#include <stdio.h>

int main(){
	float a , b , c;
	
	printf("Digite o valor de A: ");
	scanf("%f" , &a );
	printf("Digite o valor de B: ");
	scanf("%f" , &b );
	printf("Digite o valor de C: ");
	scanf("%f" , &c );
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Os valores podem formar um triangulo");
	} else {
		printf("Os valores nao podem formar um triangulo");
	}
}
