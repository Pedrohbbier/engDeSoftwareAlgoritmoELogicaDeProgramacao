#include <stdio.h>

main(){
	float base , altura , area;
	printf("Digite a base:");
	scanf("%f" , &base);
	printf("Digite a altura:");
	scanf("%f" , &altura);
	area = base * altura / 2;
	printf("Area do triangulo: %.2f" , area);
}
