#include <stdio.h>
int main()
{
    int i, n, soma = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        soma = soma + (5 * (i * i) + 2 * i + 8);
    }
    printf("O somatório até %d é: %d\n", n, soma);
    return 0;
}