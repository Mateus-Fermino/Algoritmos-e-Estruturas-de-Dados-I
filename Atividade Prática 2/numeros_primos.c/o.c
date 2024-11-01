#include <stdio.h>
    int Primo(int num){
        for (int i = 2; i <= num/2; i++)
        {
            if (num%i==0)
            {
                return 0;
            }
            
        }
        return 1;
    }
    int main(){
        int n,count=0,num=2,soma=0;
        printf("Digite quantos numero primos deseja somar: ");
        scanf("%d", &n);
        while (count < n)
        {
            if (Primo(num))
            {
                soma+=num;
                count++;
            }
            num++; 
        }
        printf("A soma dos %d primeiros números primos é: %d\n", n, soma);

        return 0;
    }