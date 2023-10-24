#include<stdio.h>
#include<stdlib.h>

main(){
	int x, maior, i, vet1[5], vet2[5];
	
	for(i=1; i<=5; i++){
		printf("\nDigite o %do numero: ", i);
		scanf("%d", &vet1[i]);
		if(vet1[i]>vet1[i-1]){
			maior=vet1[i];
		}
	}
	
	
	for(i=1; i<=5; i++){
		vet2[i]= (vet1[i] * maior);
		printf("\no valor do vetor eh: %d", vet2[i]);
	}
	
	//vet2[5]=vet1[5] * maior;
	//printf("\no valor do vetor eh: %d", vet2[5]);

	//vet2[1]=vet1[1] * maior;
	//vet2[2]=vet1[2] * maior;
	//vet2[3]=vet1[3] * maior;
	//vet2[4]=vet1[4] * maior;
	//vet2[5]=vet1[5] * maior;
	
	//printf("\no valor do vetor eh: %d", vet2[1]);
	//printf("\no valor do vetor eh: %d", vet2[2]);
	//printf("\no valor do vetor eh: %d", vet2[3]);
	//printf("\no valor do vetor eh: %d", vet2[4]);
	//printf("\no valor do vetor eh: %d", vet2[5]);
}
