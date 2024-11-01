#include <stdio.h>
int main(){
    int sorte=41, num;
    printf("_____________________________________\n");
    printf("       Adivinhador de numero         \n");
    for (;;)
    {
        printf("digite o numero entre 1 e 100:");
        scanf("%d", &num);
        if (num == sorte)
        {
            printf("Parabens voce acertou! \n");
            break;
        } else
        {
            printf("numero errado tente Novamente! \n");
        }
        
    }
    
    return 0;
}