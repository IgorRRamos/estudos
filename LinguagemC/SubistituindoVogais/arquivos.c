#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char letra[50], letra2;

    FILE *f = fopen("subistituindo vogais.txt", "w");
    if (f == NULL) {
        perror("ERRO\n");
        exit(0);
    }
    fgets(letra, 50, stdin);
    fputs(letra, f);
    fclose(f);

    f = fopen("subistituindo vogais.txt", "r+");
    FILE *f2 = fopen("subistituicao de vogais.txt", "w+");
    if (f == NULL) {
        perror("ERRO:\n");
        exit(1);
    }
    if (f2 == NULL) {
        perror("ERRO:\n");
        exit(1);
    }

    do {
        letra2 = fgetc(f);
        if (!feof(f)) {
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u') {
                fputc('*', f2);
            }else{
                fputc(letra2, f2);
            }
        }

    } while (!feof(f));

    fclose(f);
    fclose(f2);

    return 0;
}
