#include <stdio.h>

int main() {
    int i, valor, maior, menor;
    
    printf("Digite o 1º valor: ");
    scanf("%d", &valor);
    maior = menor = valor;

    for (i = 2; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);
        
        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    
    return 0;
}

