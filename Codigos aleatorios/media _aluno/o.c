#include <stdio.h>
    int main(){
        int n1, n2;
        float media;
        printf("escreva a primeira nota: ");
        scanf("%d", &n1);
        printf("escreva a segunda nota: ");
        scanf("%d", &n2);
        media = (n1+n2)/2;
        printf("A média do aluno foi: %f\n", media);
        if (media >= 7 && media <= 10)
        {
            printf("O aluno foi APROVADO!");
        } else if (media >=5 && media<7){
            printf("Aluno esta de recuperação!");
        } else
        {
            printf("O Aluno esta REPROVADO!");
        }
    
        return 0;
    }