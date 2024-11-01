#include <stdio.h>
    int main(){
        int a, b, maior;
        printf("digite dois numeros: ");
        scanf("%d%d", &a, &b);
        if (a>b)
        {
            printf("O maior numero é: %d\n", maior);
        }
        else
        {
            printf("O maior numero é: %d\n", b);
        }

        return 0;
    }