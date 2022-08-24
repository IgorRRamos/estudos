#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char frase[] = "IGOR RODRIGUES RAMOS";

    FILE *f;
    f = fopen("C:\\projetoarq\\arquivo.txt", "w");

    if (!f) {
        perror("ERROR\n");
        system("pause");
        exit(1);
    }
    for (int i = 0; i < strlen(frase); i++) {
        fputc(frase[i], f);
    }
    fclose(f);

    return 0;
}