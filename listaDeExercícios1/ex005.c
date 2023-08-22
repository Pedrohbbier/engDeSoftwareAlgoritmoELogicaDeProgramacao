#include <stdio.h>

main(){
	float cel , far;
	printf("Digite a temperatura em graus celcius: ");
	scanf("%f" , &cel);
	far = cel * 1.8 + 32;
	printf("Temperatura em fahrenheit: %.2f" , far);
}
