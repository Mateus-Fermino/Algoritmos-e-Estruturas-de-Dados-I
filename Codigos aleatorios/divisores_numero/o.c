#include <stdio.h>
    int main(){
        int numero, i;
        printf("qual numero voce deseja saber os divisores? ");
        scanf("%d", &numero);
        for(i = 1; i <= numero; i++) 
        if(numero % i == 0) {
            printf("%d ", i);  // Imprime o divisor
        }

        return 0;
    }