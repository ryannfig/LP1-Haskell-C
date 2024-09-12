#include <stdio.h>

int main() {
    int num, parte1, parte2, soma;

    for (num = 1000; num <= 9999; num++) {
        parte1 = num / 100;
        parte2 = num % 100;
        soma = parte1 + parte2;
        if (soma * soma == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
