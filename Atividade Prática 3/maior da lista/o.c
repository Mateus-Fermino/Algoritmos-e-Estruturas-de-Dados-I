#include <stdio.h>
int main(){
    int num, maior, i=1;
    maior=-1000000;
    while (i)
    {
        printf("Digite um numero ou 0 pra sair: ");
        scanf("%d", &num);
        if (num ==0)
        {
            break;
        }
        if (num > maior)
        {
            maior=num;
        }
    }
    if (maior !=-1000000 )
    {
        printf("O maior numero é: %d\n", maior);
    } 
    return 0;
}