# include <stdio.h>
int main(){
    int i, num, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        if (i % 2 == 1 )
        {
            soma +=i;
        }
        
    }
    printf("A soma dos numeros impares de 1 até %d é: %d\n", num, soma);
    

}