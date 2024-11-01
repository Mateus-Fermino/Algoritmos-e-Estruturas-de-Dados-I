#include <stdio.h>
int main(){
    int i, a, lado;
    printf("Digite o lado do quadrado: ");
        scanf("%d", &lado); 
        for (i = 0; i < lado; i++)
    {
        for ( a=0; a<=lado; a++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
