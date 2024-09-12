#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite os lados do triângulo: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Triângulo equilátero.\n");
        } else if (x == y || y == z || x == z) {
            printf("Triângulo isósceles.\n");
        } else {
            printf("Triângulo escaleno.\n");
        }
    } else {
        printf("Não formam um triângulo.\n");
    }

    return 0;
}
