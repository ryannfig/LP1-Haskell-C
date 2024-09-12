#include <stdio.h>

int situacao_aluno(int media, int faltas, int horasAula) {
    if (media >= 70 && (horasAula - faltas) >= horasAula * 0.75) {
        return 1;
    }
    return 0;
}

int main() {
    int media, faltas, horasAula;

    printf("Digite a média final: ");
    scanf("%d", &media);
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    printf("Digite o total de horas-aula: ");
    scanf("%d", &horasAula);

    if (situacao_aluno(media, faltas, horasAula)) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
