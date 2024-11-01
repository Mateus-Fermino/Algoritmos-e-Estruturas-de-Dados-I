#include <stdio.h>
int main(){
    int i=0, num;
    float soma, media;
    while (i < 5 )
    {
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma +=num;
        i++; 
    }
    media = soma/5;
    printf("A media dos numeros foi: %f", media);
}