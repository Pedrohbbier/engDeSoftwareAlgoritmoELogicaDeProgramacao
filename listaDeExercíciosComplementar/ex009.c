#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d" , &n);

    if(n >= 100 && n <= 200){
        printf("%d esta entre 100 e 200" , n);
    }
}