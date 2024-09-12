#include <stdio.h>

int main() {
    int horas;
    float valorHora, salario;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Digite o valor da hora: ");
    scanf("%f", &valorHora);

    if (horas <= 40) {
        salario = horas * valorHora;
    } else if (horas <= 60) {
        salario = 40 * valorHora + (horas - 40) * valorHora * 1.5;
    } else {
        salario = 40 * valorHora + 20 * valorHora * 1.5 + (horas - 60) * valorHora * 2;
    }

    printf("O salário semanal é: R$%.2f\n", salario);

    return 0;
}
