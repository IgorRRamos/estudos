#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct {
    int day, month;
} data;

typedef struct {
    char name[50], fone[50];
    int status, code;
    data aniversario;
} cadastro;

void collect(cadastro acesso[], int *cont);
void search(cadastro acesso[], int busca);
void searchName(cadastro acesso[], char *busca);
void listAll(cadastro acesso[]);
void searchString(cadastro acesso[], char *busca);
void searcMonth(cadastro acesso[], int cBusca);

int main(int argc, char *argv[]) {
    cadastro acesso[MAX];
    int choice, i = 0, codeBusca;
    char busca[50];

    for (int j = 0; j < MAX; j++) {
        acesso[j].status = 0;
    }

    FILE *f1 = fopen("Cadastros.txt", "r+b");
    if ((i = fread(acesso, sizeof(cadastro), MAX, f1)) < 1) {
        if (feof(f1)) {
            printf("ERRO NA LEITURA");
            exit(1);
        }
    }
    fclose(f1);

    do {
        puts("(1) INSERIR CONTATOS");
        puts("(2) REMOVER CONTATO");
        puts("(3) PESQUISAR CONTATO PELO NOME");
        puts("(4) LISTAR TODOS OS CONTATOS");
        puts("(5) LISTAR CONTATO POR UMA DADA LETRA");
        puts("(6) IMPRIMIR OS ANIVERSARIANTES DO MES");
        puts("(0) SAIR");
        puts("");

        printf("SELECIONE UMA OPCAO: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                collect(acesso, &i);
                puts("\n");
                i++;

                break;

            case 2:
                system("cls");
                printf("DIGITE O CODIGO DO CONTATO QUE DESEJA DESATIVAR: ");
                scanf("%d", &codeBusca);
                search(acesso, codeBusca);
                puts("\n");

                break;

            case 3:
                system("cls");
                setbuf(stdin, NULL);
                printf("DIGITE O NOME DO CONTATO QUE DESEJA LISTAR: ");
                fgets(busca, 50, stdin);
                searchName(acesso, busca);
                puts("\n");

                break;

            case 4:
                system("cls");
                listAll(acesso);
                puts("\n");
                break;

            case 5:
                system("cls");
                setbuf(stdin, NULL);
                printf("DIGITE A PRIMEIRA LETRA DO CONTATO: ");
                fgets(busca, 50, stdin);
                searchString(acesso, busca);
                puts("\n");

                break;

            case 6:
                system("cls");
                printf("DIGITE O MES: ");
                scanf("%d", &codeBusca);
                searcMonth(acesso, codeBusca);
                puts("\n");

                break;

            default:
                break;
        }
    } while (choice != 0);

    f1 = fopen("Cadastros.txt", "w+b");
    if (f1 == NULL) {
        perror("ERRO:\n");
        return 1;
    }
    for (int j = 0; j < i; j++) {
        if (acesso[j].status == 1) {
            if (fwrite(&acesso[j], sizeof(cadastro), 1, f1) != 1) {
                printf("ERRO AO SALVAR O ARQUIVO\n!");
                exit(1);
            } else {
                printf("OS DADOS FORA SALVOS COM SUCESSO!\n");
            }
        }
    }

    fclose(f1);
    return 0;
}

void collect(cadastro acesso[], int *cont) {
    printf("CODIGO: ");
    scanf("%d", &acesso[*cont].code);
    setbuf(stdin, NULL);

    printf("NOME: ");
    setbuf(stdin, NULL);
    fgets(acesso[*cont].name, 50, stdin);

    printf("DATA DE ANIVERSARIO: ");
    scanf("%d/%d", &acesso[*cont].aniversario.day, &acesso[*cont].aniversario.month);

    printf("TELEFONE: ");
    setbuf(stdin, NULL);
    fgets(acesso[*cont].fone, 50, stdin);

    acesso[*cont].status = 1;
}

void search(cadastro acesso[], int busca) {
    for (int j = 0; j < MAX; j++) {
        if (busca == acesso[j].code) {
            acesso[j].code = 0;
            printf("CONTATO REMOVIDO\n");
        }
    }
}

void searchName(cadastro acesso[], char *busca) {
    for (int j = 0; j < MAX; j++) {
        if (strcmp(acesso[j].name, busca) == 0) {
            printf("CODIGO: %d\n", acesso[j].code);
            printf("NOME: %s", acesso[j].name);
            printf("DATA DE ANIVERSARIO: %d/%d\n", acesso[j].aniversario.day, acesso[j].aniversario.month);
            printf("TELEFONE: %s", acesso[j].fone);
            printf("STATUS: %d\n", acesso[j].status);
        }
    }
}

void listAll(cadastro acesso[]) {
    for (int j = 0; j < MAX; j++) {
        if (acesso[j].status == 1) {
            printf("CODIGO: %d\n", acesso[j].code);
            printf("NOME: %s", acesso[j].name);
            printf("DATA DE ANIVERSARIO: %d/%d\n", acesso[j].aniversario.day, acesso[j].aniversario.month);
            printf("TELEFONE: %s", acesso[j].fone);
            printf("STATUS: %d\n", acesso[j].status);
            puts("\n");
        }
    }
}

void searchString(cadastro acesso[], char *busca) {
    for (int j = 0; j < MAX; j++) {
        if (busca[0] == acesso[j].name[0]) {
            printf("CODIGO: %d\n", acesso[j].code);
            printf("NOME: %s", acesso[j].name);
            printf("DATA DE ANIVERSARIO: %d/%d\n", acesso[j].aniversario.day, acesso[j].aniversario.month);
            printf("TELEFONE: %s", acesso[j].fone);
            printf("STATUS: %d\n", acesso[j].status);
        }
    }
}

void searcMonth(cadastro acesso[], int cBusca) {
    printf("ANIVERSARIANTE DO MES:\n");
    for (int j = 0; j < MAX; j++) {
        if (cBusca == acesso[j].aniversario.month) {
            printf("CODIGO: %d\n", acesso[j].code);
            printf("NOME: %s", acesso[j].name);
            printf("DATA DE ANIVERSARIO: %d/%d\n", acesso[j].aniversario.day, acesso[j].aniversario.month);
            printf("TELEFONE: %s", acesso[j].fone);
            printf("STATUS: %d\n", acesso[j].status);
        }
    }
}