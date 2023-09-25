#include <stdio.h>

main(){
	int i, x , a;
	
	for(i = 1 ; i <=10 ; i++){
		for(x = 1 ; x<=10 ; x++){
			a = i * x;
			printf("\n%d X %d = %d" , i , x , a );
		}
	}
}
