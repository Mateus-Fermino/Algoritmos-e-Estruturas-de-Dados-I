#include <stdio.h>

    int main(){
        int i, num, soma=0;
        printf("Digite um numero: \n");
        scanf("%d", &num);
        for ( i = 0; i <= num; i++)
        {
            if (i % 2==0)
            {
                soma +=i;
            }
        }
        printf("A soma dos numeros paresd e 0 até %d é: %d\n", num, soma);
    }