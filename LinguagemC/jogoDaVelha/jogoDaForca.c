
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificacaoporletra(char chute, char shotWord[], char fantasma[]);
void verificacaoporpalavra(char chute[], char shotWord[], char fantasma[]);

int main(int argc, char *argv[]) {
    int tall;
    char palavraChave[5] = "bola";

    tall = strlen(palavraChave);

    puts("JOGO DA FORCA");
    puts("5 ERROS VOCE PERDE!");
    puts("");

    int choice, resp, chutesErrados = 5;
    char shotOne, shotWord[tall], ghost[tall];

    strcpy(ghost, palavraChave);

    memset(ghost, '*', tall);

    do {
        puts(ghost);

        printf("\n\n%d TENTATIVA(S) RESTANTES\n\n\n", chutesErrados);

        puts("(1) - ARRISQUE UMA LETRA");
        puts("(2) - ARRISQUE UMA PALAVRA");
        puts("(3) - DESISTIR\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                system("cls");
                puts("DIGITE A LETRA:");
                setbuf(stdin, NULL);
                scanf("%c", &shotOne);
                verificacaoporletra(shotOne, palavraChave, ghost);
                break;

            case 2:
                system("cls");
                verificacaoporpalavra(shotWord, palavraChave, ghost);
                if (strcmp(shotWord, palavraChave) == 0) {
                    puts("O jogo acabou!");
                    exit(1);
                }
                break;

            default:
                break;

                if (chutesErrados == 0) {
                    exit(1);
                }
        }
    } while (resp != 2);

    return 0;
}
void verificacaoporletra(char chute, char shotWord[], char fantasma[]) {
    int tamanho, contLetrasErradas = 0;
    tamanho = strlen(shotWord);
    for (int i = 0; i <= tamanho; i++) {
        if (chute == shotWord[i]) {
            fantasma[i] = chute;
            contLetrasErradas++;
        }
    } 
}

void verificacaoporpalavra(char chute[], char palavra[], char fantasma[]) {
    int tamanho;
    tamanho = strlen(palavra);
    puts("DIGITE A PALAVRA");
    setbuf(stdin, NULL);
    fgets(chute, tamanho + 1, stdin);

    if (strcmp(chute, palavra) == 0) {
        system("cls");
        puts("PARABENS!");
    }
}