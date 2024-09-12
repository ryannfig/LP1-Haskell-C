#include <stdio.h>

int main()
{
    int decimal, binario = 0, posicao = 1;
    
    // Solicita ao usuario o numero decimal
    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);
    
    // converte decimal para binario
    while (decimal > 0)
    {
        // calcula o prox digito binario e o add ao numero binario
        binario += (decimal % 2) * posicao; 
        decimal /= 2;// divide o numero decimal por 2 p/ continuar a conversão
        posicao *= 10; //atualiza a posiçao multiplicando-a por 1- para a proxima posiçao binaria
    }
    
    printf("O numero binario é: %d\n", binario);
    
    return 0;
}
