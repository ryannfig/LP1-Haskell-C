#include <stdio.h>

int main() {
    int aposta1, aposta2, real1, real2, pontos = 0;

    printf("Digite o placar apostado (ex: 3 2): ");
    scanf("%d %d", &aposta1, &aposta2);

    printf("Digite o placar real (ex: 3 2): ");
    scanf("%d %d", &real1, &real2);

    if ((aposta1 > aposta2 && real1 > real2) || (aposta1 < aposta2 && real1 < real2) || (aposta1 == aposta2 && real1 == real2)) {
        pontos += 10;
    }

    if (aposta1 == real1) {
        pontos += 5;
    }
    if (aposta2 == real2) {
        pontos += 5;
    }

    printf("Pontos do apostador: %d\n", pontos);

    return 0;
}
