#include <stdio.h>

main(){
	float hora , min , seg , resHora , resMin , resTotal;
	printf("Digite a hora:");
	scanf("%f" , &hora);
	printf("Digite os minutos:");
	scanf("%f" , &min);
	printf("Digite os segundos:");
	scanf("%f" , &seg);
	resHora = (hora * 60) * 60;
	resMin = min * 60;
	resTotal = seg + resHora + resMin;
	printf( "Tempo total em segundos:  %.2f" , resTotal);
}
