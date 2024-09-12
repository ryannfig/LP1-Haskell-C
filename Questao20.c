#include <stdio.h>

unsigned int inverte(unsigned int n) {
    unsigned int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return invertido;
}

int main() {
    unsigned int n;
    
    printf("Digite um número: ");
    scanf("%u", &n);
    
    printf("Número invertido: %u\n", inverte(n));
    
    return 0;
}
