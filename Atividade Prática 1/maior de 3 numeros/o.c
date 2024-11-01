#include <stdio.h>
    int main(){
        int num, maior, i;
        maior= -1000;
        for ( i = 1; i <= 3; i++)
        {
            printf("digite o %dº numero: \n", i);
            scanf("%d", &num);
            if (num > maior) {
                maior = num;
            }
        }
         printf("O maior numero digitado foi; %d", maior);
        
    }