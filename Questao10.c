#include <stdio.h>

void preencheArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

int main() {
    int n;
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &n);
    
    double valores[n];
    preencheArray(valores, n);
    
    printf("Valores inseridos:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf\n", valores[i]);
    }
    
    return 0;
}
