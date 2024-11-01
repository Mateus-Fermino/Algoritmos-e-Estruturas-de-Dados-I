#include <stdio.h>
    int main(){
        float salario_base, salario_receber, gratificacao;

        printf("digite o seu salario: R$");
        scanf("%f", &salario_base);
        gratificacao= salario_base*0.05;
        salario_receber = salario_base+ gratificacao;
        printf("O novo salario a ser recebido: R$%2.f\n", salario_receber);

        return 0;
    }