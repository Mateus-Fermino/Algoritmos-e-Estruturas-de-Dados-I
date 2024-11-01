#include <stdio.h>
int main(){
    int senha, senhasistema;
    printf("Digite a senha do sistema: ");
    scanf("%d", &senhasistema);
    printf("*******************************************\n");
    printf("Acesso ao Sistema:Digite sua senha: ");
    scanf("%d", &senha);
    while (senha != senhasistema)
    {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }
    printf("Senha Correta! Acesso Permitido.");
    return 0;
}