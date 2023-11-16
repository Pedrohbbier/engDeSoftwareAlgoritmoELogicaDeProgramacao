#include <stdio.h>
#include <math.h>


int main(){
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

        printf("Os �ngulos internos do tri�ngulo s�o:\n");
        printf("\n�ngulo A: %.2f graus\n", anguloA);
        printf("\n�ngulo B: %.2f graus\n", anguloB);
        printf("\n�ngulo C: %.2f graus\n", anguloC);

        // Verifica se � um tri�ngulo ret�ngulo (um dos �ngulos � 90 graus)
        if (anguloA == 90.0 || anguloB == 90.0 || anguloC == 90.0) {
            printf("\n� um Tri�ngulo Ret�ngulo.\n");
        } else {
            printf("\nN�o � um Tri�ngulo Ret�ngulo.\n");
        }
		
	} else {
		printf("Os valores nao podem formar um triangulo");
	}
}
