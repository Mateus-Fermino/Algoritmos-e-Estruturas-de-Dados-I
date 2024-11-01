#include <stdio.h>
int main(){
    int sorte=41, num;
    char resp;
    printf("_____________________________________\n");
    printf("       Adivinhador de numero         \n");
    do
    {
        printf("digite o numero entre 1 e 100:");
        scanf("%d", &num);
        if (num == sorte)
        {
            printf("Parabens voce acertou! \n");
        } else
        {
            printf("numero errado tente Novamente! \n");
        }
        printf("Deseja continuar? (S/N)");
        scanf(" %c", &resp);
        
    } while (resp=='s' || resp =='S' );
    
}