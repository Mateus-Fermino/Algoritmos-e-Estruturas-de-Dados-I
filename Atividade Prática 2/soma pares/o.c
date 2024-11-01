#include <stdio.h>
int main()
{
    int soma = 0, i = 2, num;
    printf("Digite um numero:");
    scanf("%d", &num);
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            soma += i;    
        }
        
        i++;
    }

    printf("A oma dos pares de 1 ate %d é:%d\n ", num, soma);
}