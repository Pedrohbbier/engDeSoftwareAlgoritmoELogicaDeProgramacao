#include <stdio.h>

int main(){
	int n1;
	printf("Digite o numero: ");
	scanf("%d" , &n1);
	
	 if(n1 % 10 == 0){
	 	printf("\n %d e divisivel por 10" , n1);
	 }
	 
	 if(n1 % 5 == 0){
	 	printf("\n %d e divisivel por 5" , n1);
	 }
	 
	 if(n1 % 2 == 0){
	 	printf("\n %d e divisivel por 2" , n1 );
	 }
	 
	 if((n1 % 10 != 0 ) &&  (n1 % 5 != 0 ) && (n1 % 2 != 0)){
	 	printf("\n %d nao e divisivel por 2, 5 ou 10" , n1 );
	 }
}
