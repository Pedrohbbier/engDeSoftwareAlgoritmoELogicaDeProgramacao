#include <stdio.h>

int main(){
    int numeros80[80];
    int i;
    int n = 0;
    printf("Digite oitenta numeros: ");
    for(i = 0; i <= 79 ; i++){
        scanf("%d" , &numeros80[i]);
        if(numeros80[i] >= 10 && numeros80[i] <= 150){
            n++;
        }
    }
    printf("%d numeros estao entre 10 e 150" , n);
}