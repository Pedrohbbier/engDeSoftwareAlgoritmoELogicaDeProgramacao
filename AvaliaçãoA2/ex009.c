#include <stdio.h>

main(){
	float a , n , b = 2 , num;
	int i;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%f" , &n);
	
	num = n;
	
	for(n ; n >= 1 ; n-- ){
		a = a + (num - i) / b;
		i++;
		b++;
	}
	a = a + num;
	printf("%.2f" , a);
}
