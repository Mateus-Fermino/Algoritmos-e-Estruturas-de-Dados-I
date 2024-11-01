#include <stdio.h>

int main() {
    int senha, senha_correta, conf;
    char opcao;

    printf("Crie sua senha: ");
    scanf("%d", &senha);
    senha_correta = senha;
    printf("Confirme sua Senha: ");
    scanf("%d", &conf);
    if (conf == senha_correta) {
        printf("Senha está correta!\n");
    } else {
        while (conf != senha_correta) {
            printf("Senha incorreta!\n");
            printf("Para tentar novamente (T) ou para criar outra senha (N): ");
            scanf(" %c", &opcao);
            if (opcao == 'T' || opcao == 't') {
                printf("Confirme sua Senha: ");
                scanf("%d", &conf);
            } else if (opcao == 'N' || opcao == 'n') {
                printf("Crie sua nova senha: ");
                scanf("%d", &senha);
                senha_correta = senha;
                printf("Confirme sua nova Senha: ");
                scanf("%d", &conf);
            } else {
                printf("Opção inválida! Tente novamente.\n");
            }
        }
        printf("Senha está correta!\n");
    }
    return 1;
}
