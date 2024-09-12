#include <stdio.h>

int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor2);
    
    if (valor1 == valor2)
    {
        printf("Valores iguais\n");
    }
    else if(valor1 < valor2)
    {
        for(int i = valor1; i <= valor2; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else 
    {
        for (int i = valor1; i >= valor2; i--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
