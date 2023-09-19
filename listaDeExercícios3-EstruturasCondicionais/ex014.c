#include <stdio.h>
#include <math.h>


main(){
	float a , b , c;
	float anguloA, anguloB, anguloC;
	
	printf("Digite o valor de A: ");
	scanf("%f" , &a );
	printf("Digite o valor de B: ");
	scanf("%f" , &b );
	printf("Digite o valor de C: ");
	scanf("%f" , &c );
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Os valores podem formar um triangulo");
		
		anguloA = acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
        anguloB = acos((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / M_PI);
        anguloC = 180.0 - anguloA - anguloB;

        printf("Os ângulos internos do triângulo são:\n");
        printf("\nÂngulo A: %.2f graus\n", anguloA);
        printf("\nÂngulo B: %.2f graus\n", anguloB);
        printf("\nÂngulo C: %.2f graus\n", anguloC);

        // Verifica se é um triângulo retângulo (um dos ângulos é 90 graus)
        if (anguloA == 90.0 || anguloB == 90.0 || anguloC == 90.0) {
            printf("\nÉ um Triângulo Retângulo.\n");
        } else {
            printf("\nNão é um Triângulo Retângulo.\n");
        }
		
	} else {
		printf("Os valores nao podem formar um triangulo");
	}
}
