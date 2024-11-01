#include <stdio.h>
int main()
{
    int num, maior, i = 1;
    printf("Digite o número 1: ");
    scanf("%d", &maior);
    while (i < 5)
    { 
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        if (num > maior)
        {
            maior = num;
        }
        i++;
    }
    printf("O maior número é: %d\n", maior);
    return 0;
}