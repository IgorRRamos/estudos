#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *f;
    f = fopen("lendoDadosArquivo.txt", "w");
    if (!f) {
        perror("ERROR\n");
        exit(1);
        system("pause");
    }
    char palavra;

    do {
        printf("Digite um caractere: ");
        setbuf(stdin, NULL);
        palavra = getchar();

        fputc(palavra, f);
    } while (palavra != '0');

    fclose(f);

    f = fopen("lendoDadosArquivo.txt", "r");
    if (!f) {
        perror("ERROR\n");
        exit(1);
        
    }

    do {
        palavra = fgetc(f);
        printf("%c", palavra);

    } while (!feof(f));

    fclose(f);
    return 0;
}