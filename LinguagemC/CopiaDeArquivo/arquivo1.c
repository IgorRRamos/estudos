#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void copiaArquivo(FILE *num1, FILE *num2);

int main(int argc, char *argv[]) {
    char palavra[] = "Teste copia de arquivo";
    
    FILE *file;
    file = fopen("Arquivo 1.txt", "r");
    if(file == NULL){
        perror("ERRO:\n");
        exit(0);
        system("pause");
    }
    FILE *file2;
    file2 = fopen("Arquivo 2.txt", "w");
    copiaArquivo(file, file2);

    fclose(file);
    fclose(file2);
    return 0;
}

void copiaArquivo(FILE *num1, FILE *num2){
    char palavra [1000];

    while(fgets(palavra, 1000, num1) != NULL){
        fputs(palavra, num2);
    }

}