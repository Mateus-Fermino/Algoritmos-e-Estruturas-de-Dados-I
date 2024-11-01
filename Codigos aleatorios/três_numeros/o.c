#include <stdio.h>

int main()
{
    int nmr1, nmr2, nmr3, soma;
    printf("escreva um numero: ");
    scanf("%d", &nmr1);
    printf("escreva um segundo numero: ");
    scanf("%d", &nmr2);
    printf("escreva um terceiro numero: ");
    scanf("%d", &nmr3);
    soma = nmr1+nmr2+nmr3;
    printf("A soma dos numero foi: %d\n", soma);
}