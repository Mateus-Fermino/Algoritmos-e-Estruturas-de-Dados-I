#include <stdio.h>
    int main(){
        int i, num;
        float media, soma;
        for ( i = 0; i < 10; i++)
        {
            printf("Digite um numero: \n");
            scanf("%d", &num);
            soma +=num;
        }
        media = soma/10;
        printf("A media dos numeros foi: %f", media);
        return 0;
    }