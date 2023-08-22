#include <stdio.h>

main(){
	float tanque , km , autonomia , consumoMedio;
	printf("Qual a capacidade do tanque ? ");
	scanf("%f" , &tanque);
	printf("Qual foi a quilometragem percorrida desde a ultima vez que o veiculo foi abastecido ? ");
	scanf("%f" , &km);
	consumoMedio = km / tanque;
	autonomia = consumoMedio * tanque; //Ele sempre abastece o tanque cheio
	printf("Consumo medio: %.2f \n" , consumoMedio); 
	printf("Autonomia: %.2f" , autonomia);
}
