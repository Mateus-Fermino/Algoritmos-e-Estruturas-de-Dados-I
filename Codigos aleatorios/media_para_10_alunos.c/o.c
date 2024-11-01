#include <stdio.h>
    int main(){
        float n1, n2, media;
        int i;
        printf("---Calculo de media para 10 Alunos---\n\n");
        for ( i = 1; i <= 10; i++)
        {
            printf("Digite a primeria nota do aluno: ");
            scanf("%f", &n1);
            printf("Digite a segunda nota do aluno: ");
            scanf("%f", &n2);
                media = (n1+n2)/2;
            printf("\n A media do Aluno foi: %d = %.1f\n", i, media);
            printf("------------------------------------------------------\n\n");
        }

        return 0;
    }