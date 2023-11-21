#include <stdio.h> 
#include <stdlib.h> 



main() { 
	int b=40;
	int estante[2][2]; //o enunciado pedia 40 X 40, porém visando facilitar o teste coloquei 2 X 2
    char produtos[6][100] = {"vazio","xampu","condicionador","hidratante","tintura","demaquilante"};
    int countXampo = 0;
    int countCondicionador = 0;
    int countHidratante = 0;
    int countTintura = 0;
    int countDemaquilante = 0;
    int countNada = 0;
    int linha, coluna = 0;	
    
	printf("Considere os produtos e seus codigos: \n"); 
	printf("1: xampu;\n2: condicionador;\n3: hidratante;\n4: tintura;\n5: demaquilante;\n0: vazio\n");
	printf("\nAdicione %d produtos na estante informando seu codigo\n",b*b); 
	
	for (linha = 0; linha < b; linha++) { 
		for (coluna = 0; coluna < b; coluna++) {
			printf("\nEscreva o codigo:\n ");
			scanf("%d", &estante[linha][coluna]); 
			if (estante[linha][coluna] == 1){
				countXampo++;
			} else if (estante[linha][coluna] == 2){
				countCondicionador++;
			}else if (estante[linha][coluna] == 3) {
				countHidratante++;
			}else if (estante[linha][coluna] == 4){
				countTintura++;
			}else if (estante[linha][coluna] == 5){
				countDemaquilante++;
			} else if (estante[linha][coluna] == 0) {
				countNada++;
			}
			if (estante[linha][coluna] > 5 || estante[linha][coluna] < 0) { 
				printf("\nCodigo invalido\n");
				coluna--;
			} 
		} 
	}
	
	printf("\nQuantidade xampo: %d\n" , countXampo);
	printf("\nQuantidade condicionador: %d\n" , countCondicionador);
	printf("\nQuantidade hidratante: %d\n" , countHidratante);
	printf("\nQuantidade tintura: %d\n" , countTintura);
	printf("\nQuantidade demaquilante: %d\n" , countDemaquilante);
	printf("\nQuantidade de prateleiras vazias: %d" , countNada);
}

