#include <stdio.h>
int main(){
    int senha_correta = 123, senha_usuario;

        printf("digite a sua senha: ");
        scanf("%d", &senha_usuario);
        if (senha_usuario == senha_correta)
        {   
            printf("senha está correta");
        } else
        {
            printf("senha está incorreta");
        }

        return 0;
}