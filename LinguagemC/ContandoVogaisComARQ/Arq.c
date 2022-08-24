#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char frase[50], frase2;
    int vogal = 0, consoante = 0;

    FILE *file = fopen("QuantasVogaisTem.txt", "w");
    if (file == NULL) {
        perror("ERROR:\n");
        exit(1);
    }
    fgets(frase, 50, stdin);
    fputs(frase, file);
    fclose(file);

    file = fopen("QuantasVogaisTem.txt", "r");
    if (file == NULL) {
        perror("ERROR:\n");
        exit(1);
    }

    do {
        frase2 = fgetc(file);
        if (!feof(file)) {
            if (frase2 == 'a' || frase2 == 'e' || frase2 == 'i' || frase2 == 'o' || frase2 == 'u') {
                vogal++;
                
            } else if (frase2 != '\n') {
                consoante++;
            }
        }

    } while (!feof(file));

    fclose(file);

    printf("%d\n", vogal);
    printf("%d\n", consoante);

    return 0;
}