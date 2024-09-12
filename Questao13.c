#include <stdio.h>

int main() {
    int a, b, c;
    float media;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c) / 3.0;

    printf("A média é: %.2f\n", media);

    return 0;
}
