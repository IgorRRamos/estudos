#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shot(char chute, char shotWord[], char fantasma[]);
void Word(char chute[], char shotWord[], char fantasma[]);

int main(int argc, char *argv[]) {
    int tall;
    char palavraChave[5] = "bola";

    tall = strlen(palavraChave);

    puts("JOGO DA FORCA");
    puts("5 ERROS VOCE PERDE!");
    puts("");

    int choice, resp;
    char shotOne, shotWord[tall], ghost[tall];

    strcpy(ghost, palavraChave);

    memset(ghost, '*', tall);

    do {
        puts(ghost);

        puts("(1) - ARRISQUE UMA LETRA");
        puts("(2) - ARRISQUE UMA PALAVRA");
        puts("(3) - DESISTIR");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                shot(shotOne, palavraChave, ghost);
                break;

            case 2:
                Word(shotWord, palavraChave, ghost);
                break;

            default:
                break;

                puts("DESEJA JOGAR NOVAMENTE? (1)-Sim , (2)-Nao");
        }
    } while (resp != 2);

    return 0;
}

void shot(char chute, char shotWord[], char fantasma[]) {
    int tamanho;
    tamanho = strlen(shotWord);
    puts("DIGITE A LETRA:");
    setbuf(stdin, NULL);
    scanf("%c", &chute);
    for (int i = 0; i <= tamanho; i++) {
        if (chute == shotWord[i]) {
            fantasma[i] = chute;
        }
    }
}

void Word(char chute[], char palavra[], char fantasma[]) {
    int tamanho;
    tamanho = strlen(palavra);
    puts("DIGITE A PALAVRA");
    setbuf(stdin, NULL);
    fgets(chute, tamanho, stdin);

    if (strcmp(chute, palavra) == 0) {
        system("cls");
        puts("PARABENS!");
    }
}
