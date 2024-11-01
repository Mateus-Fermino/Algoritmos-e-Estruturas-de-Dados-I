#include <stdio.h>
    int main(){
        int numero, i, menor=1000, primeiro, iguais=1;
        for ( i = 1; i <=3; i++)
        {
            printf("Digite o numero %d ", i);
            scanf("%d", &numero);
            if (i==0)
            {
                primeiro =numero;
            }else if (numero != primeiro)
            {
                iguais=0;
            }
            if (numero < menor)
            {
                menor = numero;
             }
        }
         if (iguais)
        {
            printf("Valores iguais");
        } else
        {
            printf("O menor numero é: %d", menor);
        }
        return 0;
    }