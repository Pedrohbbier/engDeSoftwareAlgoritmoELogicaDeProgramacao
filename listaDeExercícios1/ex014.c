#include <stdio.h>

main(){
	float quilo , reaisQ , valorT , salMin;
	
	printf("Digite o salario minimo: ");
	scanf("%f" , &salMin);
	
	printf("Digite a quantidade de quilowatts gasto: ");
	scanf("%f" , &quilo);
	
	reaisQ = (salMin * 0.1428) / 100;
	valorT = reaisQ * quilo;
	printf("\n Valor de cada quilowatt: %.2f" , reaisQ );
	printf("\n Valor total a ser pago: %.2f " , valorT);
}
