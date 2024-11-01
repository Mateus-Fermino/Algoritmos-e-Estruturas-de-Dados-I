#include <stdio.h>
    int main(){
        float nota, soma, media;
        int  i, nume_nt;
        char cont;
        do
        {
            soma=0;
            printf("Quantas notas deseja verificar? ");
            scanf("%d", &nume_nt);
            for ( i = 1; i <= nume_nt; i++)
            {
            printf("digite a %dº nota: \n", i);
            scanf("%f", &nota);
            soma+=nota;
            }
            media = soma/nume_nt;
            printf("A media das notas foi: %2f\n", media);
            if (media >= 7) {
                printf("Aluno aprovado!\n");
            } else if (media >= 5 && media < 7) {
                printf("Aluno em Recuperação!\n");
            } else {
                printf("Aluno reprovado!!!\n");
            } 
            printf("Deseja continuar? (s/n): ");
            scanf(" %c", &cont);
        } while (cont == 's' || cont == 'S');
        printf("programa encerrado!");
        
       return 0; 
    }