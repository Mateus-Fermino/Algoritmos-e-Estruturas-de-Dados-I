#include <stdio.h>
    int main(){
        int numero;
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero % 2 !=0)
        {
            printf("%d É impar", numero);
        } else
        {
            printf("%d É par", numero);
        }
        
        return 0;
    }