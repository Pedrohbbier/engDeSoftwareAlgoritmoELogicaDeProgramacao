#include <stdio.h>
main(){
	int num, maior = 0, i;
	
	for (i=1; i<=9; i++){
		printf ("\n Digite o numero %d:", i);
		scanf ("%d", &num);
		if (num > maior) {
            maior = num;
        }
    }
    printf ("\nO maior numero: %d", maior);
}
