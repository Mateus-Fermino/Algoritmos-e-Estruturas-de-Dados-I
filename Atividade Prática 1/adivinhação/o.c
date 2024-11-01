#include <stdio.h>
int main()
{
    int numero = 25;
    int numeroSorte, tentativas = 0;
    printf("Adivinhe o número entre 1 e 50: \n");
    while (tentativas < 5)
    {
        printf("Tentativa %d: ", tentativas + 1);
        scanf("%d", &numeroSorte);
        if (numeroSorte == numero)
        {
            printf("Parabéns! Você acertou o número!\n");
            break;
        }
        else if (numeroSorte > numero)
        {
            printf("Muito alto!\n");
        }
        else
        {
            printf("Muito baixo!\n");
        }
        tentativas++;
    }
    if (numeroSorte != numero)
    {
        printf("Você perdeu! O número era %d.\n", numero);
    }
    return 0;
}