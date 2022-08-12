#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct {
    char nome[50];
    int idade, codigo;
    double salario;
} cadastros;

void cadastrar(cadastros pessoas[], int *cont);
void listarTodos(cadastros pessoas[], int cont);
void listagem(cadastros pessoas[], int cont, int busca);
void alteracaoDeDados(cadastros pessoas[], int cont, int codigoBusca);

int main(int argc, char *argv[]) {
    cadastros pessoas[MAX];

    int escolha, cont, codigoBusca;
    char busca[50];

    do {
        puts("(1) ADICIONAR CONTATO");
        puts("(2) LISTAR CONTATOS");
        puts("(3) LISTAR POR NOME");
        puts("(4) ATUALIZAR CONTATO");
        puts("(5) SAIR\n");

        scanf("%d", &escolha);
        setbuf(stdin, NULL);

        switch (escolha) {
            case 1:
                cadastrar(pessoas, &cont);
                cont++;
                system("cls");
                break;

            case 2:
                listarTodos(pessoas, cont);
                break;

            case 3:
                printf("DIGITE O NOME DO CADASTRO: ");
                fgets(busca, 50, stdin);
                setbuf(stdin, NULL);

                listagem(pessoas, cont, busca);

                break;

            case 4:
                printf("DIGITE O CODIGO DO CADASTRO: ");
                scanf("%d", &codigoBusca);
                setbuf(stdin, NULL);

                alteracaoDeDados(pessoas, cont, codigoBusca);
                system("cls");
                break;

            default:
                break;
        }
    } while (escolha != 5);

    return 0;
}

// Função para leitura dos dados
void cadastrar(cadastros pessoas[], int *cont) {
    printf("\nCODIGO: ");
    scanf("%d", &pessoas[*cont].codigo);
    setbuf(stdin, NULL);

    printf("NOME: ");
    fgets(pessoas[*cont].nome, 50, stdin);

    printf("IDADE: ");
    scanf("%d", &pessoas[*cont].idade);

    printf("SALARIO: ");
    scanf("%lf", &pessoas[*cont].salario);
    printf("\n");
}

void listarTodos(cadastros pessoas[], int cont) {
    for (int i = 0; i < cont; i++) {
        printf("\nCODIGO: %d", pessoas[i].codigo);
        printf("NOME: %s", pessoas[i].nome);
        printf("IDADE: %d\n", pessoas[i].idade);
        printf("SALARIO: %.3lf\n", pessoas[i].salario);
        puts("\n");
    }
}

void listagem(cadastros pessoas[], int cont, int busca) {
    for (int i = 0; i < cont; i++) {
        if (strcmp(busca, pessoas[i].nome) == 0) {
            printf("\nCODIGO: %d", pessoas[i].codigo);
            printf("NOME: %s", pessoas[i].nome);
            printf("IDADE: %d\n", pessoas[i].idade);
            printf("SALARIO: %.3lf\n", pessoas[i].salario);
            puts("\n");
        } else {
            printf("NOME DE USUARIO INEXISTENTE!\n");
        }
    }
}

void alteracaoDeDados(cadastros pessoas[], int cont, int codigoBusca) {
    for (int i = 0; i < cont; i++) {
        if (codigoBusca == pessoas[i].codigo) {
            printf("\nCODIGO: ");
            scanf("%d", &pessoas[i].codigo);
            setbuf(stdin, NULL);

            printf("NOME: ");
            fgets(pessoas[i].nome, 50, stdin);
            printf("IDADE: ");
            scanf("%d", &pessoas[i].idade);

            printf("SALARIO: ");
            scanf("%lf", &pessoas[i].salario);
            printf("\n");
        } else {
            printf("CODIGO INEXISTENTE!\n");
        }
    }
}