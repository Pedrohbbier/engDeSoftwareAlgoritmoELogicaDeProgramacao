#include <stdio.h>

main(){
	float peso , altura , imc;
	
	printf("Digite seu peso: ");
	scanf("%f" , &peso );
	printf("Digite sua altura: ");
	scanf("%f" , &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 20){
		printf("Seu IMC e: %.2f , voce esta abaixo do peso" , imc);
	}
	if (imc >=20 && imc < 25){
		printf("Seu IMC e: %.2f , voce esta com peso normal" , imc);
	}
	if (imc >=25 && imc < 30){
		printf("Seu IMC e: %.2f , voce esta com sobre peso" , imc);
	}
	if (imc >=30 && imc < 40){
		printf("Seu IMC e: %.2f , voce esta obeso" , imc);
	}
		if (imc > 40){
		printf("Seu IMC e: %.2f , voce e obeso morbido" , imc);
	}
}
