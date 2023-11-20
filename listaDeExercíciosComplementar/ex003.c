#include <stdio.h>

int main(){
    float vd , vdRendimento;
    printf("Digite o valor depositado na poupanca: ");
    scanf("%f" , &vd);
    vdRendimento = vd * 0.007;

    vdRendimento += vd;

    printf("Valor apos um mes: %f.2" , vdRendimento);
    
}