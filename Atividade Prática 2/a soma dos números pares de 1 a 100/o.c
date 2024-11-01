#include <stdio.h>
int main()
{
    int soma = 0, i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0){
          soma += i;
          
        }
        i++;   
    }

    printf("A soma dos pares de 1 a 100 é: %d\n", soma);
    return 0;
}