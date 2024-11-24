#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Prototipação das funções
void exibirMenu();
void cadastrarCliente();
void listarClientes();
void cadastrarProduto();
void realizarVenda();
void limparTela();
int main() {
    int opcao;
    do {
        exibirMenu(); // Exibe o menu principal
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                cadastrarCliente(); // Cadastra um cliente
                break;
            case 2:
                listarClientes(); // Lista os clientes cadastrados
                break;
            case 3:
                cadastrarProduto(); // Cadastra um produto
                break;
            case 4:
                realizarVenda(); // Realiza uma venda e atualiza estoque
                break;
            case 0:
                printf("Encerrando o sistema...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
    return 0;
}
// Função para exibir o menu principal
void exibirMenu() {
    printf("\n=== Mini Sistema ===\n");
    printf("1. Cadastrar Cliente\n");
    printf("2. Listar Clientes\n");
    printf("3. Cadastrar Produto\n");
    printf("4. Realizar Venda\n");
    printf("0. Sair\n");
    printf("====================\n");
}
// Função para cadastrar cliente e salvar em arquivo
void cadastrarCliente() {
    char nome[50];
    char cpf[15];
    FILE *arquivo;
    limparTela(); // Limpa a tela para facilitar leitura
    printf("\n--- Cadastro de Cliente ---\n");
    printf("Nome: ");
    scanf(" %[^\n]", nome); // Permite nomes com espaços
    printf("CPF: ");
    scanf("%s", cpf); // Lê o CPF do cliente
    // Abre o arquivo de clientes em modo de acréscimo
    arquivo = fopen("clientes.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    // Salva o cliente no arquivo
    fprintf(arquivo, "Nome: %s\nCPF: %s\n\n", nome, cpf);
    fclose(arquivo);
    printf("\nCliente cadastrado com sucesso!\n");
}
// Função para listar os clientes cadastrados
void listarClientes() {
    char linha[100];
    FILE *arquivo;
    limparTela(); // Limpa a tela antes de listar os clientes
    printf("\n--- Lista de Clientes ---\n");
    // Abre o arquivo de clientes em modo de leitura
    arquivo = fopen("clientes.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum cliente cadastrado ainda ou erro ao abrir o arquivo!\n");
        return;
    }
    // Lê e exibe cada linha do arquivo
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
    printf("\nFim da lista.\n");
}
// Função para cadastrar produto e salvar em arquivo
void cadastrarProduto() {
    char nomeProduto[50];
    float preco;
    int quantidade;
    FILE *arquivo;
    limparTela(); // Limpa a tela antes do cadastro
    printf("\n--- Cadastro de Produto ---\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", nomeProduto); // Permite nomes com espaços
    printf("Preco (use ponto para separar decimais): ");
    scanf("%f", &preco); // Lê o preço do produto
    printf("Quantidade em estoque: ");
    scanf("%d", &quantidade); // Lê a quantidade em estoque
    // Abre o arquivo de produtos em modo de acréscimo
    arquivo = fopen("produtos.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de produtos!\n");
        return;
    }
    // Salva os detalhes do produto no arquivo
    fprintf(arquivo, "Nome: %s\nPreco: %.2f\nQuantidade: %d\n\n", nomeProduto, preco, quantidade);
    fclose(arquivo);
    printf("\nProduto cadastrado com sucesso!\n");
}
// Função para realizar venda e atualizar o estoque
void realizarVenda() {
    char nomeProduto[50];
    int quantidade;
    FILE *arquivo, *temp;
    char linha[100];
    int produtoEncontrado = 0;
    float precoProduto = 0;
    int estoque = 0;
    limparTela(); // Limpa a tela antes de iniciar a venda
    printf("\n--- Realizar Venda ---\n");
    printf("Nome do produto: ");
    scanf(" %[^\n]", nomeProduto); // Permite nomes com espaços
    printf("Quantidade: ");
    scanf("%d", &quantidade); // Lê a quantidade desejada

    // Abre o arquivo de produtos para leitura e um temporário para escrita
    arquivo = fopen("produtos.txt", "r");
    temp = fopen("temp.txt", "w");
    if (arquivo == NULL || temp == NULL) {
        printf("Erro ao abrir o arquivo de produtos!\n");
        return;
    }
    // Procura o produto no arquivo e verifica o estoque
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        fprintf(temp, "%s", linha); // Copia a linha para o arquivo temporário
        if (strstr(linha, nomeProduto) != NULL) {
            produtoEncontrado = 1;
            fgets(linha, sizeof(linha), arquivo); // Lê o preço
            sscanf(linha, "Preco: %f", &precoProduto);
            fprintf(temp, "%s", linha); // Copia o preço para o temporário

            fgets(linha, sizeof(linha), arquivo); // Lê a quantidade
            sscanf(linha, "Quantidade: %d", &estoque);

            if (quantidade > estoque) {
                printf("Quantidade solicitada excede o estoque disponível.\n");
                fprintf(temp, "Quantidade: %d\n", estoque); // Copia o estoque original
            } else {
                // Atualiza o estoque e registra no arquivo temporário
                estoque -= quantidade;
                fprintf(temp, "Quantidade: %d\n", estoque);
                float totalVenda = precoProduto * quantidade;
                printf("\nVenda realizada com sucesso!\n");
                printf("Produto: %s\nQuantidade: %d\nValor Total: %.2f\n", nomeProduto, quantidade, totalVenda);
            }
        }
    }
    fclose(arquivo);
    fclose(temp);
    if (!produtoEncontrado) {
        printf("Produto não encontrado!\n");
        remove("temp.txt"); // Remove o arquivo temporário
    } else {
        // Substitui o arquivo original pelo temporário
        remove("produtos.txt");
        rename("temp.txt", "produtos.txt");
    }
}
// Função para limpar a tela
void limparTela() {
    #ifdef _WIN32
        system("cls");  // Para Windows
    #else
        system("clear"); // Para sistemas Unix/Linux/Mac
    #endif
}