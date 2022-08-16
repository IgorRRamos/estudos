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
        puts("(5) SAIR");

        scanf("%d", &escolha);
        setbuf(stdin, NULL);

        switch (escolha) {
            case 1:
                system("cls");
                cadastrar(pessoas, &cont);
                cont++;
                break;

            case 2:
                system("cls");
                listarTodos(pessoas, cont);
                break;

            case 3:
                system("cls");
                printf("DIGITE O NOME DO CADASTRO: ");
                fgets(busca, 50, stdin);
                setbuf(stdin, NULL);

                listagem(pessoas, cont, busca);

                break;

            case 4:
                system("cls");
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

void cadastrar(cadastros pessoas[], int *cont) {
    printf("CODIGO: ");
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
        printf("CODIGO: %d\n", pessoas[i].codigo);
        printf("NOME: %s", pessoas[i].nome);
        printf("IDADE: %d\n", pessoas[i].idade);
        printf("SALARIO: %.3lf\n", pessoas[i].salario);
        puts("\n");
    }
}

void listagem(cadastros pessoas[], int cont, int busca) {
    for (int i = 0; i < cont; i++) {
        if (strcmp(busca, pessoas[i].nome) == 0) {
            printf("CODIGO: %d\n", pessoas[i].codigo);
            printf("NOME: %s\n", pessoas[i].nome);
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
            printf("CODIGO: ");
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
