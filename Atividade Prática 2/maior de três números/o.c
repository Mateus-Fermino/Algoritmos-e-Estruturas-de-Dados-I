#include <stdio.h>
int main()
{
    int maior, numero, i, primeiro, iguais = 1;
    maior = -1000;
    for (i = 1; i <=3; i++)
    {
        printf("Digite o numero %d ", i);
        scanf("%d", &numero);
        if (i == 1)
        {
            primeiro = numero;
        }
        else if (numero != primeiro)
        {
            iguais = 0;
        }

        if (numero > maior)
        {
            maior = numero;
        }
    }
    if (iguais)
    {
        printf("Valores iguais.");
    }
    else
    {
        printf("O maiorr numero é: %d", maior);
    }

    return 0;
}