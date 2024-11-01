#include <stdio.h>
int main(){
    int i, a, num;
    printf("Digite um numero para dar forma: ");
        scanf("%d", &num); 
        for (i = 0; i < num; i++)
    {
        for ( a=0; a<=i; a++)
        {
            printf("*");
        }
        
        printf("\n");
    }
}
