#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void adicionando(int num, int *p1);
void determinadolocal(int num, int *p1);
void listall(int num, int *p1, int tall);

int main(int argc, char *argv[]) {
    int num, choice, tamanho;
    printf("DIGITE O TAMANHO DA MEMORIA: ");
    scanf("%d", &tamanho);

    int *p1 = (int *)calloc(tamanho, sizeof(int));

    do {
        system("cls");
        puts("(1) - ADICIONAR VALOR NA MEMORIA");
        puts("(2) - VISUALIZAR O VALOR ALOCADO NA MEMORIA");
        puts("(3) - VISUALIZAR TODOS OS VALORES ALOCADOS NA MEMORIA");
        puts("(4) - SAIR\n");

        printf("ESCOLHA UMA OPCAO: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                adicionando(num, p1);
                system("pause");
                break;

            case 2:
                system("cls");
                determinadolocal(num, p1);
                system("pause");
                break;

            case 3:
                system("cls");
                listall(num, p1, tamanho);
                system("pause");
                break;

            default:
                break;
        }
    } while (choice != 4);

    return 0;
}

void adicionando(int num, int *p1) {
    do {
        printf("QUAL POSICAO DA MEMORIA:");
        scanf("%d", &num);
        p1 += num;
        if(p1 != 0){
        puts("POSICAO NA MEMORIA JA OCUPADA\n");
        }
    } while (*p1 != 0);

    system("cls");
    printf("VALOR: ");
    scanf("%d", p1);
    p1 -= num;
}

void determinadolocal(int num, int *p1) {
    printf("QUAL POSICAO DA MEMORIA: ");
    scanf("%d", &num);
    system("cls");
    p1 += num;
    printf("VALOR: %d\n", *p1);
    p1 -= num;
}

void listall(int num, int *p1, int tall) {
    puts("TODOS OS VALORES ALOCADOS NA MEMORIA:");
    for (int i = 0; i < tall; i++, p1++) {
        printf("%d\n", *p1);
    }
    p1 -= tall;
}