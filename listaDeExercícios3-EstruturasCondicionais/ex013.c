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
		
		float a2 = a * a;
        float b2 = b * b;
        float c2 = c * c;
		
		printf("Os valores podem formar um triangulo");
		 if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
            printf("\n… um Tri‚ngulo Ret‚ngulo.\n");
        }
        // Verifica se È um tri‚ngulo obtus‚ngulo
        else if (a2 + b2 < c2 || a2 + c2 < b2 || b2 + c2 < a2) {
            printf("\n… um Tri‚ngulo Obtus‚ngulo.\n");
        }
        // Caso contr·rio, È um tri‚ngulo acut‚ngulo
        else {
            printf("\n… um Tri‚ngulo Acut‚ngulo.\n");
        }
        
	} else {
		printf("N„o pode formar um tri‚ngulo");
	}
}
