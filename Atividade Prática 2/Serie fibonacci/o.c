#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, proxTermo;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            proxTermo = t1;
        }
        else if (i == 2)
        {
            proxTermo = t2;
        }
        else
        {
            proxTermo = t1 + t2;
            t1 = t2;
            t2 = proxTermo;
        }
    }
    printf("O %do termo da série de Fibonacci é: %d\n", n, proxTermo);
    return 0;
}