#include <stdio.h>
int main(){
    int i, a, num;
    printf("Digite um numero para a forma da sequencia: ");
        scanf("%d", &num); 
        for (i = 1; i <= num; i++)
    {
        for ( a=1; a<=i; a++)
        {
            printf("%d", i);
        }
        
        
        printf("\n");
    }
}