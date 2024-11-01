#include <stdio.h>
    int main(){
        int idade;
        while (1)
        {
        printf("Digite sua idade:");
        scanf("%d", &idade);
        if (idade <=0)
        {
            printf("Programa encerrado\n");
            break;
        }
        if (idade >=0 && idade<=12)
        {
            printf("Criança\n");
        } else if (idade>=13 && idade<=17)
        {
            printf("Adolescente\n");
        } else if (idade >=18 && idade <=64)
        {
            printf("Adulto\n");
        } else if (idade >=67)
        {
            printf("Idoso\n");
        } else
        {
            printf("Idade invalida!\n");
        }
        }
        return 0;
    }