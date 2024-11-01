#include <stdio.h>
int main(){
    int nota, media, soma=0, i;
    for ( i = 1; i <= 4; i++)
    {
        printf("Digite a %d nota: ", i);
        scanf("%d", &nota);
        soma +=nota;
        
    }
    media = soma/4;
    if (media >=6)
        {
            printf("Aluno aprovado!, Media:%d", media);
        }else
        {
            printf("Aluno Reprovado!, Media:%d", media);
        }

    return 0;
}