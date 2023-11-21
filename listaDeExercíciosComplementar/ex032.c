#include <stdio.h>

int main() {
    float notaLaboratorio, notaSemestral, notaExame, notaFinal;

    printf("Informe a nota do trabalho de laboratório (0 a 10): ");
    scanf("%f", &notaLaboratorio);

    printf("Informe a nota da avaliação semestral (0 a 10): ");
    scanf("%f", &notaSemestral);

    printf("Informe a nota do exame final (0 a 10): ");
    scanf("%f", &notaExame);

    if (notaLaboratorio < 0 || notaLaboratorio > 10 ||
        notaSemestral < 0 || notaSemestral > 10 ||
        notaExame < 0 || notaExame > 10) {
        printf("Por favor, informe notas válidas no intervalo de 0 a 10.\n");
        return 1;  
    }

    notaFinal = (notaLaboratorio * 2 + notaSemestral * 3 + notaExame * 5) / 10;

    printf("A nota final do estudante é: %.2f\n", notaFinal);

    return 0;  
}
