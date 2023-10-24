#include <stdio.h>

main(){
	int matriculas[9];
	int al[2];
	int i , a = 1 ,j = 0 , p = 1;
	
	for(i = 0 ; i <= 10 ; i++){
		matriculas[i] = a;
		a++;
	}

	for(j = 0 ; j<3 ; j++){
		printf("Digite o numero de matricula do aluno %d: " , p);
		scanf("%d" , &al[j]);
		for(i = 0 ; i <= 10 ; i++){
			if(al[j] == matriculas[i]){
				printf("A matricula %d ja existe\n" , al[j]);
			}	
		}
		p++;
	}
}
