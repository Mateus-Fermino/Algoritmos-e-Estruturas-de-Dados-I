#include <stdio.h>
int main(){
    int num, soma=0  ;
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    while (num > 0 )
    {
         soma += num % 10;  
        num /= 10; 
    }
    printf("A soma do numero digitado foi: %d", soma);
}